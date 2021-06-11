import Vector3 = godot.Vector3;
import deg2rad = godot.deg2rad;

export default class Test extends godot.RigidBody {
	angularVelocity: Vector3 = new Vector3(0, 0, 0);
	linearVelocity: Vector3 = new Vector3(0, 0, 0);

	constructor() {
		super();
	}

	_ready() {
		godot.print("Hello World!");
	}

	_integrate_forces(state: godot.PhysicsDirectBodyState) {
		state.add_torque(new Vector3(-500, 0, 0));
	}
}
