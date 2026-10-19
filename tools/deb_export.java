import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class deb_export extends GhidraScript {
    Pattern CLS = Pattern.compile("^[-+]\\[([A-Za-z_]\\w*)(?:\\([^)]*\\))?\\s");

    void wbin(String path, String text) throws IOException {
        Writer w = new OutputStreamWriter(new FileOutputStream(path), "UTF-8");
        w.write(text); w.close();
    }
    String safe(String n) { return n.replaceAll("[^\\w.-]", "_"); }

    public void run() throws Exception {
        String[] args = getScriptArgs();
        String OUT = args[0];
        File outDir = new File(OUT);
        if (!outDir.exists()) outDir.mkdirs();
        File funcDir = new File(OUT, "_funcs");
        if (!funcDir.exists()) funcDir.mkdirs();

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        TreeMap<String, ArrayList<String[]>> groups = new TreeMap<>();
        ArrayList<String> index = new ArrayList<>();
        int nTotal = 0, nOk = 0, nThunk = 0, nShort = 0, nFail = 0;

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            nTotal++;
            if (nTotal % 200 == 0) println("[deb_export] scanned " + nTotal + " (ok=" + nOk + ")");
            if (f.isThunk()) { nThunk++; continue; }
            String name = f.getName();
            long addr = f.getEntryPoint().getOffset();
            DecompileResults res;
            try { res = di.decompileFunction(f, 30, monitor); }
            catch (Exception e) { nFail++; continue; }
            if (res == null || !res.decompileCompleted()) { nFail++; continue; }
            String code = res.getDecompiledFunction().getC();
            if (code == null || code.trim().length() < 40) { nShort++; continue; }
            nOk++;
            Matcher m = CLS.matcher(name);
            String cls = m.find() ? m.group(1) : "FUN_";
            ArrayList<String[]> lst = groups.get(cls);
            if (lst == null) { lst = new ArrayList<>(); groups.put(cls, lst); }
            lst.add(new String[]{ name, Long.toHexString(addr), code });
            index.add(name + "\t0x" + Long.toHexString(addr) + "\t" + cls);
            wbin(new File(funcDir, String.format("%016x_%s.c", addr, safe(name))).getAbsolutePath(),
                 "// " + name + " @0x" + Long.toHexString(addr) + "\n" + code);
        }

        for (Map.Entry<String, ArrayList<String[]>> e : groups.entrySet()) {
            String cls = e.getKey();
            StringBuilder cur = new StringBuilder();
            int size = 0, part = 1;
            ArrayList<String> written = new ArrayList<>();
            for (String[] r : e.getValue()) {
                String chunk = "// ==== " + r[0] + " @0x" + r[1] + " ====\n" + r[2] + "\n";
                if (size + chunk.length() > 2097152 && cur.length() > 0) {
                    String fn = (cls.equals("FUN_") ? "FUN_" : cls + "_") + (part == 1 ? "" : "part" + part) + ".c";
                    wbin(new File(OUT, fn).getAbsolutePath(), cur.toString());
                    written.add(fn); part++; cur = new StringBuilder(); size = 0;
                }
                cur.append(chunk); size += chunk.length();
            }
            if (cur.length() > 0) {
                String fn = (cls.equals("FUN_") ? "FUN_" : cls + "_") + (part == 1 ? "" : "part" + part) + ".c";
                wbin(new File(OUT, fn).getAbsolutePath(), cur.toString());
                written.add(fn);
            }
            println("[deb_export] group " + cls + " -> " + written);
        }

        StringBuilder idx = new StringBuilder("name\taddress\tgroup\n");
        for (String r : index) idx.append(r).append("\n");
        wbin(new File(OUT, "_index.tsv").getAbsolutePath(), idx.toString());

        StringBuilder ix = new StringBuilder();
        for (Map.Entry<String, ArrayList<String[]>> e : groups.entrySet()) {
            ix.append("== ").append(e.getKey()).append(" (").append(e.getValue().size()).append(") ==\n");
            for (String[] r : e.getValue()) ix.append("  0x").append(r[1]).append("  ").append(r[0]).append("\n");
        }
        wbin(new File(OUT, "_full_class_method_index.txt").getAbsolutePath(), ix.toString());

        wbin(new File(OUT, "_summary.txt").getAbsolutePath(),
            "Total scanned : " + nTotal + "\nExported      : " + nOk + "\nSkipped (thunk): " + nThunk + "\nSkipped (short): " + nShort + "\nFailed         : " + nFail + "\n");
        println("[deb_export] DONE ok=" + nOk + " total=" + nTotal);
    }
}
