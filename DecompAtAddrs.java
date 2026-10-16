import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class DecompAtAddrs extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        di.setOptions(opts);
        di.openProgram(currentProgram);
        for (String a : args) {
            Address addr = currentProgram.getAddressFactory().getAddress(a);
            Function f = getFunctionContaining(addr);
            if (f == null) { println("NOFUNC " + a); continue; }
            DecompileResults r = di.decompileFunction(f, 180, monitor);
            println("===== FUNC " + f.getName() + " entry=" + f.getEntryPoint() + " (contains " + a + ") =====");
            if (r.decompileCompleted()) {
                println(r.getDecompiledFunction().getC());
            } else {
                println("DECOMP_FAIL: " + r.getErrorMessage());
            }
        }
        di.dispose();
    }
}
