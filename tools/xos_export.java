import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class xos_export extends GhidraScript {
    static String OUT = "C:\\Users\\20546\\Desktop\\ios_cc4BX\\XOS159\u53cd\u7f16\u8bd1";
    static Pattern CLS = Pattern.compile("^[-+]\\[([A-Za-z_]\\w*)(?:\\([^)]*\\))?\\s");

    void wbin(String path, String text) throws IOException {
        Writer w = new OutputStreamWriter(new FileOutputStream(path), "UTF-8");
        w.write(text); w.close();
    }
    String safe(String n) { return n.replaceAll("[^\\w.-]", "_"); }

    public void run() throws Exception {
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
            if (nTotal % 500 == 0) println("[xos_export] scanned " + nTotal + " (ok=" + nOk + " thunk=" + nThunk + " short=" + nShort + " fail=" + nFail + ")");
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
            String fn = String.format("%016x_%s.c", addr, safe(name));
            wbin(new File(funcDir, fn).getAbsolutePath(), "// " + name + " @0x" + Long.toHexString(addr) + "\n" + code);
        }

        for (Map.Entry<String, ArrayList<String[]>> e : groups.entrySet()) {
            String cls = e.getKey();
            StringBuilder sb = new StringBuilder();
            if (!cls.equals("FUN_")) sb.append("// class ").append(cls).append(" (").append(e.getValue().size()).append(" methods)\n\n");
            int size = 0, part = 1;
            StringBuilder cur = new StringBuilder();
            for (String[] it2 : e.getValue()) {
                String chunk = "// ==== " + it2[0] + " @0x" + it2[1] + " ====\n" + it2[2] + "\n";
                if (cls.equals("FUN_") && size + chunk.length() > 2097152 && cur.length() > 0) {
                    String fn = part == 1 ? "FUN_.c" : "FUN__part" + part + ".c";
                    wbin(new File(OUT, fn).getAbsolutePath(), cur.toString());
                    cur = new StringBuilder(); size = 0; part++;
                }
                if (!cls.equals("FUN_")) sb.append(chunk);
                else { cur.append(chunk); size += chunk.length(); }
            }
            if (cls.equals("FUN_") && cur.length() > 0) {
                String fn = part == 1 ? "FUN_.c" : "FUN__part" + part + ".c";
                wbin(new File(OUT, fn).getAbsolutePath(), cur.toString());
            } else if (!cls.equals("FUN_")) {
                wbin(new File(OUT, cls + ".c").getAbsolutePath(), sb.toString());
            }
        }

        StringBuilder idx = new StringBuilder("name\taddress\tgroup\n");
        for (String r : index) idx.append(r).append("\n");
        wbin(new File(OUT, "_index.tsv").getAbsolutePath(), idx.toString());

        StringBuilder ix = new StringBuilder();
        for (Map.Entry<String, ArrayList<String[]>> e : groups.entrySet()) {
            ix.append("== ").append(e.getKey()).append(" (").append(e.getValue().size()).append(") ==\n");
            for (String[] it3 : e.getValue()) ix.append("  0x").append(it3[1]).append("  ").append(it3[0]).append("\n");
        }
        wbin(new File(OUT, "_full_class_method_index.txt").getAbsolutePath(), ix.toString());

        wbin(new File(OUT, "_summary.txt").getAbsolutePath(),
            "Total scanned : " + nTotal + "\nExported      : " + nOk + "\nSkipped (thunk): " + nThunk + "\nSkipped (short): " + nShort + "\nFailed         : " + nFail + "\n");
        println("[xos_export] DONE ok=" + nOk + " total=" + nTotal);
    }
}
