# 解包 .deb 并扫描 dylib 中语音发送相关的字符串（逆向参考用）
import re
import sys
import tarfile
import io
import lzma
import gzip
import bz2

sys.stdout.reconfigure(encoding="utf-8", errors="replace")

DEB = sys.argv[1] if len(sys.argv) > 1 else r"c:\Users\20546\Desktop\ios_cc4BX\插件\小微助手_2.2-9_有根.deb"

KEYWORDS = [
    "voicemsg", "voicelength", "voicformat", "m_byteBuffer", "m_nsImgBuf",
    "AddMsg", "MessageReturn", "MessageService", "AddLocalMsg",
    "CMessageWrap", "CMessageMgr", "SendVoiceMessage", "VoiceData",
    "silk", "SILK", "m_iVoiceTime", "m_uiMessageType", "initWithMsgType",
    "MessageWrap", "voiceData", "audioData", "m_nsContent", "MsgWrap",
]


def read_ar(path):
    data = open(path, "rb").read()
    assert data[:8] == b"!<arch>\n", "not an ar archive"
    members = []
    pos = 8
    while pos + 60 <= len(data):
        hdr = data[pos:pos + 60]
        name = hdr[0:16].decode("ascii", "replace").strip()
        size = int(hdr[48:58].decode("ascii", "replace").strip() or 0)
        body = data[pos + 60:pos + 60 + size]
        members.append((name, body))
        pos += 60 + size
        if size % 2:
            pos += 1
    return members


def extract_strings(blob, min_len=4):
    return set(re.findall(rb"[\x20-\x7e]{%d,}" % min_len, blob))


def main():
    members = read_ar(DEB)
    print("== ar members:", [n for n, _ in members])
    data_body = None
    for name, body in members:
        if name.startswith("data.tar"):
            data_body = body
            data_name = name
    assert data_body, "no data.tar found"

    # 解压 data.tar（gz / xz / bz2 / 原始）
    tar_bytes = None
    for opener in (gzip.decompress, lzma.decompress, bz2.decompress, lambda b: b):
        try:
            tar_bytes = opener(data_body)
            print("== decompressed with:", opener)
            break
        except Exception:
            continue
    assert tar_bytes, "cannot decompress data.tar"

    tf = tarfile.open(fileobj=io.BytesIO(tar_bytes))
    targets = []
    for m in tf.getmembers():
        if m.isfile() and (".dylib" in m.name or m.name.endswith(".plist")):
            targets.append(m)
    print("== files:")
    for m in targets:
        print("   ", m.name, m.size)

    for m in targets:
        blob = tf.extractfile(m).read()
        if not m.name.endswith(".dylib"):
            continue
        print("\n" + "=" * 70)
        print("DYLIB:", m.name, len(blob), "bytes")
        print("=" * 70)
        strs = extract_strings(blob, 5)
        low = {s.lower(): s for s in strs}
        # 第二模式：--grep <regex> 列出所有匹配字符串
        if len(sys.argv) >= 4 and sys.argv[2] == "--grep":
            pat = re.compile(sys.argv[3].encode(), re.I)
            hits = sorted(s for s in strs if pat.search(s))
            print("-- matches(%d):" % len(hits))
            for h in hits:
                print("   ", h.decode("utf-8", "replace"))
            continue
        for kw in KEYWORDS:
            kwb = kw.encode("ascii").lower()
            hits = sorted(s for s in strs if kwb in s.lower())
            if hits:
                print("\n-- [%s] %d hits" % (kw, len(hits)))
                for h in hits[:40]:
                    try:
                        print("   ", h.decode("utf-8", "replace"))
                    except Exception:
                        pass


if __name__ == "__main__":
    main()
