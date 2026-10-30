//
//  MioZipReader.m
//  MioPlugin
//

#import "MioZipReader.h"
#import <dlfcn.h>
#import <mach-o/dyld.h>
#import <string.h>
#import <stdlib.h>

// libz 经 dlsym 加载：z_stream 按 arm64 标准布局声明（112 字节，与系统 libz 一致）
typedef struct {
    const unsigned char *next_in;
    unsigned int avail_in;
    unsigned long total_in;
    unsigned char *next_out;
    unsigned int avail_out;
    unsigned long total_out;
    const char *msg;
    void *state;
    void *(*zalloc)(void *, unsigned, unsigned);
    void (*zfree)(void *, void *);
    void *opaque;
    int data_type;
    unsigned long adler;
    unsigned long reserved;
} mio_z_stream;

typedef int (*mio_inflateInit2_fn)(mio_z_stream *, int, const char *, int);
typedef int (*mio_inflate_fn)(mio_z_stream *, int);
typedef int (*mio_inflateEnd_fn)(mio_z_stream *);

static mio_inflateInit2_fn mio_inflateInit2 = NULL;
static mio_inflate_fn mio_inflate = NULL;
static mio_inflateEnd_fn mio_inflateEnd = NULL;

static BOOL mio_load_libz(void) {
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        mio_inflateInit2 = (mio_inflateInit2_fn)dlsym(RTLD_DEFAULT, "inflateInit2_");
        mio_inflate = (mio_inflate_fn)dlsym(RTLD_DEFAULT, "inflate");
        mio_inflateEnd = (mio_inflateEnd_fn)dlsym(RTLD_DEFAULT, "inflateEnd");
        if (!mio_inflateInit2 || !mio_inflate || !mio_inflateEnd) {
            // 主可执行文件未导出时显式拉起 libz
            void *h = dlopen("/usr/lib/libz.1.dylib", RTLD_NOW | RTLD_GLOBAL);
            if (!h) h = dlopen("/usr/lib/libz.dylib", RTLD_NOW | RTLD_GLOBAL);
            if (h) {
                mio_inflateInit2 = (mio_inflateInit2_fn)dlsym(h, "inflateInit2_");
                mio_inflate = (mio_inflate_fn)dlsym(h, "inflate");
                mio_inflateEnd = (mio_inflateEnd_fn)dlsym(h, "inflateEnd");
            }
        }
    });
    return (mio_inflateInit2 && mio_inflate && mio_inflateEnd);
}

// raw deflate（windowBits=-15，跳过 zlib 头）：返回 YES 时 out 填满
static BOOL mio_raw_inflate(const unsigned char *in, NSUInteger inLen,
                            unsigned char *out, NSUInteger outLen) {
    if (!mio_load_libz()) return NO;
    mio_z_stream s;
    memset(&s, 0, sizeof(s));
    s.next_in = in;
    s.avail_in = (unsigned int)inLen;
    s.next_out = out;
    s.avail_out = (unsigned int)outLen;
    // version 参数只做首字符比对，stream_size 必须等于真 z_stream 大小（布局已对齐 112B）
    if (mio_inflateInit2(&s, -15, "1", (int)sizeof(mio_z_stream)) != 0) return NO;
    int ret = mio_inflate(&s, 5 /* Z_FINISH */);
    BOOL ok = (ret == 1 /* Z_STREAM_END */) && (s.avail_out == 0);
    mio_inflateEnd(&s);
    return ok;
}

static inline uint16_t rd16(const unsigned char *p) { return (uint16_t)(p[0] | (p[1] << 8)); }
static inline uint32_t rd32(const unsigned char *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

// 目标路径清洗：拒绝 ".." 与绝对路径组件，返回拼好的绝对路径（非法返回 nil）
static NSString *mio_safe_dest(NSString *destRoot, NSString *entryName) {
    NSMutableArray *parts = [NSMutableArray array];
    for (NSString *comp in [entryName pathComponents]) {
        if (comp.length == 0 || [comp isEqualToString:@"."] || [comp isEqualToString:@"/"]) continue;
        if ([comp isEqualToString:@".."]) return nil;
        [parts addObject:comp];
    }
    if (parts.count == 0) return nil;
    NSString *rel = [parts componentsJoinedByString:@"/"];
    return [destRoot stringByAppendingPathComponent:rel];
}

@implementation MioZipReader

+ (BOOL)unzipFileAtPath:(NSString *)zipPath
          toDestination:(NSString *)destPath
                errText:(NSString **)errText {
    if (errText) *errText = nil;
    NSFileManager *fm = [NSFileManager defaultManager];

    NSData *data = [NSData dataWithContentsOfFile:zipPath];
    if (data.length < 22) {
        if (errText) *errText = @"zip 文件损坏或为空";
        return NO;
    }
    const unsigned char *bytes = (const unsigned char *)data.bytes;
    NSUInteger len = data.length;

    // 1. 定位 EOCD（PK\x05\x06）：从尾部向前扫，注释区 ≤ 64KB
    NSUInteger eocd = NSNotFound;
    NSUInteger scanFrom = len - 22;
    NSUInteger scanFloor = (len > 22 + 65536) ? len - 22 - 65536 : 0;
    for (NSUInteger i = scanFrom + 1; i-- > scanFloor;) {
        if (bytes[i] == 0x50 && i + 22 <= len && rd32(bytes + i) == 0x06054b50) {
            eocd = i;
            break;
        }
    }
    if (eocd == NSNotFound) {
        if (errText) *errText = @"无效的 zip（找不到目录结尾标记）";
        return NO;
    }
    uint16_t entryCount = rd16(bytes + eocd + 10);
    uint32_t cdOffset = rd32(bytes + eocd + 16);

    // 2. 遍历中央目录（PK\x01\x02）
    NSUInteger cdPos = cdOffset;
    int written = 0;
    [fm createDirectoryAtPath:destPath withIntermediateDirectories:YES attributes:nil error:nil];
    for (int idx = 0; idx < entryCount; idx++) {
        if (cdPos + 46 > len || rd32(bytes + cdPos) != 0x02014b50) break;
        uint16_t method = rd16(bytes + cdPos + 10);
        uint32_t compSize = rd32(bytes + cdPos + 20);
        uint32_t uncompSize = rd32(bytes + cdPos + 24);
        uint16_t nameLen = rd16(bytes + cdPos + 28);
        uint16_t extraLen = rd16(bytes + cdPos + 30);
        uint16_t cmtLen = rd16(bytes + cdPos + 32);
        uint32_t localOff = rd32(bytes + cdPos + 42);

        NSString *entryName = [[NSString alloc] initWithBytes:bytes + cdPos + 46
                                                       length:nameLen
                                                     encoding:NSUTF8StringEncoding];
        cdPos += 46 + nameLen + extraLen + cmtLen;
        if (entryName.length == 0) continue;
        // 目录项 / macOS 垃圾直接跳过
        if ([entryName hasSuffix:@"/"]) continue;
        if ([entryName hasPrefix:@"__MACOSX"] || [entryName.lastPathComponent isEqualToString:@".DS_Store"]) continue;

        // 3. 本地头（PK\x03\x04）定位数据区：文件名/extra 长度以本地头为准
        if (localOff + 30 > len || rd32(bytes + localOff) != 0x04034b50) continue;
        uint16_t lNameLen = rd16(bytes + localOff + 26);
        uint16_t lExtraLen = rd16(bytes + localOff + 28);
        NSUInteger dataPos = localOff + 30 + lNameLen + lExtraLen;
        if (dataPos + compSize > len) continue;

        NSString *dest = mio_safe_dest(destPath, entryName);
        if (!dest) continue; // 路径穿越条目静默丢弃

        // 中间目录
        NSString *destDir = dest.stringByDeletingLastPathComponent;
        [fm createDirectoryAtPath:destDir withIntermediateDirectories:YES attributes:nil error:nil];

        NSData *payload = nil;
        if (method == 0) {
            payload = [data subdataWithRange:NSMakeRange(dataPos, compSize)];
        } else if (method == 8) {
            unsigned char *outBuf = (unsigned char *)malloc(uncompSize ? uncompSize : 1);
            if (outBuf) {
                if (mio_raw_inflate(bytes + dataPos, compSize, outBuf, uncompSize)) {
                    payload = [NSData dataWithBytesNoCopy:outBuf length:uncompSize freeWhenDone:YES];
                } else {
                    free(outBuf);
                }
            }
        }
        if (!payload || (NSUInteger)payload.length != uncompSize) {
            if (errText) *errText = [NSString stringWithFormat:@"条目解压失败：%@", entryName];
            return NO;
        }
        if (![payload writeToFile:dest atomically:YES]) {
            if (errText) *errText = [NSString stringWithFormat:@"写入失败：%@", entryName.lastPathComponent];
            return NO;
        }
        written++;
    }

    if (written == 0) {
        if (errText) *errText = @"zip 内没有可用文件";
        return NO;
    }
    return YES;
}

@end
