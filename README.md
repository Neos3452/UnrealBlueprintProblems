# Problems with Unreal Engine Blueprints

0. Subobject is None:

    SubObject is assigned in Objects constructor. On first run everything works. Change sources and recompile in the Editor. On subsequent runs SubObject is None.

0. Enum is not being hot reloaded:

    Enum defined in class header. Multicast delegate with argument of Enum type defined as well. Compile blueprint - works. Recompile project in the editor, compile blueprint - enum not defined. To fix it "Refresh all nodes".
