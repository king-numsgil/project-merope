export default class Test extends godot.KinematicBody {
	constructor() {
		super();
	}

	_ready() {
		godot.print("Hello World!");
	}

	_process(delta: number) {
		this.rotate_z(godot.deg2rad(20 * delta));
	}
}
