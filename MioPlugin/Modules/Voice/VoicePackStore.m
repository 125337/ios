#import "VoicePackStore.h"
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"

// ═══════════════════════════════════════════════════════
// C 安全工具
// ═══════════════════════════════════════════════════════

/// 仅当对象存在同名 ivar 时才写入（防御不同微信版本字段差异）
static void MioSetIvarIfExist(id obj, const char *ivarName, id value) {
    if (!obj || !ivarName) return;
    Class cls = object_getClass(obj);
    unsigned int count = 0;
    Ivar *list = class_copyIvarList(cls, &count);
    for (unsigned int i = 0; i < count; i++) {
        const char *name = ivar_getName(list[i]);
        if (name && strcmp(name, ivarName) == 0) {
            object_setIvar(obj, list[i], value);
            break;
        }
    }
    free(list);
}

/// 安全写入整型 ivar（按类型编码定长写入，避免 object_setIvar 写 NSNumber 指针越界）
static void MioSetIntIvarIfExist(id obj, const char *ivarName, long long value) {
    if (!obj || !ivarName) return;
    Ivar ivar = class_getInstanceVariable(object_getClass(obj), ivarName);
    if (!ivar) return;
    const char *enc = ivar_getTypeEncoding(ivar);
    if (!enc) return;
    char *base = (__bridge void *)obj;
    ptrdiff_t off = ivar_getOffset(ivar);
    switch (enc[0]) {
        case 'c': case 'B': *(signed char *)(base + off) = (signed char)value; break;
        case 'i': *(int *)(base + off) = (int)value; break;
        case 'I': *(unsigned int *)(base + off) = (unsigned int)value; break;
        case 's': *(short *)(base + off) = (short)value; break;
        case 'S': *(unsigned short *)(base + off) = (unsigned short)value; break;
        case 'l': case 'q': *(long long *)(base + off) = value; break;
        case 'L': case 'Q': *(unsigned long long *)(base + off) = (unsigned long long)value; break;
        default: break; // 非整型字段跳过
    }
}

/// 探测 CMessageWrap 的语音数据 ivar：不同微信版本字段名不同
/// （老版本 m_nsImgBuf，新版实测为 m_byteBuffer —— MioPlugin(9).log 全量 ivar 确认）
static Ivar MioFindVoiceDataIvar(id msg) {
    if (!msg) return NULL;
    static Ivar cached = NULL;
    static BOOL probed = NO;
    if (probed) return cached;
    unsigned int count = 0;
    Ivar *list = class_copyIvarList(object_getClass(msg), &count);
    NSMutableArray *names = [NSMutableArray array];
    for (unsigned int i = 0; i < count; i++) {
        const char *n = ivar_getName(list[i]);
        if (!n) continue;
        NSString *name = @(n);
        [names addObject:name];
        const char *enc = ivar_getTypeEncoding(list[i]);
        if (!enc || enc[0] != '@') continue; // 仅对象类型
        NSString *lower = name.lowercaseString;
        if ([lower isEqualToString:@"m_bytebuffer"] ||
            [lower containsString:@"imgbuf"] || [lower containsString:@"voicedata"] || [lower containsString:@"voicebuf"]) {
            cached = list[i];
            WPLog(@"Voice", @"[Send] 语音数据字段命中: %@", name);
            break;
        }
    }
    free(list);
    if (!cached) WPLog(@"Voice", @"[Send] 未命中语音数据字段, CMessageWrap ivars(%u): %@", count, names);
    probed = YES;
    return cached;
}

/// 从 XML 内容提取 voicelength="数字"（毫秒）
static long long MioParseVoiceLengthMs(NSString *content) {
    if (content.length == 0) return 0;
    NSRange head = [content rangeOfString:@"voicelength=\""];
    if (head.location == NSNotFound) return 0;
    NSUInteger start = NSMaxRange(head);
    if (start >= content.length) return 0;
    NSUInteger end = [content rangeOfString:@"\"" options:0 range:NSMakeRange(start, content.length - start)].location;
    if (end == NSNotFound || end <= start) return 0;
    NSString *num = [content substringWithRange:NSMakeRange(start, end - start)];
    return (long long)[num longLongValue];
}

/// NSUserDefaults 存取小工具
static id prefObject(NSString *key) {
    return [[NSUserDefaults standardUserDefaults] objectForKey:key];
}
static void prefSetObject(id obj, NSString *key) {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    if (obj) [d setObject:obj forKey:key]; else [d removeObjectForKey:key];
    [d synchronize];
}

static NSString * const kPrefDurations = @"MioPlugin_Voice_Durations";   // {relPath: ms}
static NSString * const kPrefFavorites = @"MioPlugin_Voice_Favorites";   // [relPath]
static NSString * const kPrefRecents   = @"MioPlugin_Voice_Recents";     // [relPath]

/// 支持预览/探测的音频扩展名
static BOOL MioIsSystemPlayableExt(NSString *ext) {
    static NSArray *exts = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ exts = @[@"mp3", @"m4a", @"aac", @"wav", @"caf", @"aif", @"aiff", @"flac"]; });
    ext = [ext lowercaseString];
    for (NSString *e in exts) if ([ext isEqualToString:e]) return YES;
    return NO;
}

// ═══════════════════════════════════════════════════════
// VoicePackItem
// ═══════════════════════════════════════════════════════

@implementation VoicePackItem
@end

// ═══════════════════════════════════════════════════════
// VoicePackStore
// ═══════════════════════════════════════════════════════

@implementation VoicePackStore

#pragma mark - 目录

+ (NSString *)rootDirectory {
    NSString *docs = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    return [docs stringByAppendingPathComponent:@"Mio助手/语音包"];
}

+ (NSString *)chatIncludeDirectory {
    return [[self rootDirectory] stringByAppendingPathComponent:@"聊天纳入"];
}

+ (void)ensureRootDirectoryExists {
    NSFileManager *fm = [NSFileManager defaultManager];
    for (NSString *dir in @[[self rootDirectory], [self chatIncludeDirectory]]) {
        if (![fm fileExistsAtPath:dir]) {
            [fm createDirectoryAtPath:dir withIntermediateDirectories:YES attributes:nil error:nil];
        }
    }
}

+ (NSString *)relPathForAbsPath:(NSString *)absPath {
    NSString *root = [self rootDirectory];
    if (![absPath hasPrefix:root]) return nil;
    NSString *rel = [absPath substringFromIndex:root.length];
    if ([rel hasPrefix:@"/"]) rel = [rel substringFromIndex:1];
    return rel.length > 0 ? rel : nil;
}

#pragma mark - 条目操作

+ (NSComparator)itemComparator {
    return ^NSComparisonResult(VoicePackItem *a, VoicePackItem *b) {
        if (a.isDirectory != b.isDirectory) return a.isDirectory ? NSOrderedAscending : NSOrderedDescending;
        BOOL fa = [self isFavoriteRelPath:a.relPath];
        BOOL fb = [self isFavoriteRelPath:b.relPath];
        if (fa != fb) return fa ? NSOrderedAscending : NSOrderedDescending;
        return [a.name compare:b.name options:NSCaseInsensitiveSearch | NSNumericSearch];
    };
}

+ (NSArray<VoicePackItem *> *)listItemsInRelPath:(NSString *)relPath {
    NSString *base = [self rootDirectory];
    if (relPath.length > 0) base = [base stringByAppendingPathComponent:relPath];
    NSFileManager *fm = [NSFileManager defaultManager];
    NSArray<NSURL *> *urls = [fm contentsOfDirectoryAtURL:[NSURL fileURLWithPath:base]
                               includingPropertiesForKeys:@[NSURLIsDirectoryKey, NSURLFileSizeKey, NSURLContentModificationDateKey]
                                                  options:0
                                                    error:nil];
    NSMutableArray<VoicePackItem *> *items = [NSMutableArray array];
    for (NSURL *url in urls) {
        // 隐藏文件跳过
        if ([[url lastPathComponent] hasPrefix:@"."]) continue;
        VoicePackItem *it = [[VoicePackItem alloc] init];
        it.name = url.lastPathComponent;
        it.absPath = url.path;
        it.relPath = [self relPathForAbsPath:url.path] ?: url.lastPathComponent;
        it.isDirectory = NO;
        unsigned long long size = 0;
        NSNumber *isDirNum = nil;
        if ([url getResourceValue:&isDirNum forKey:NSURLIsDirectoryKey error:nil]) {
            it.isDirectory = isDirNum.boolValue;
        }
        NSDictionary *attrs = [fm attributesOfItemAtPath:url.path error:nil];
        if (!it.isDirectory) size = attrs.fileSize ?: 0;
        it.fileSize = size;
        it.modDate = attrs[NSFileModificationDate];
        [items addObject:it];
    }
    [items sortUsingComparator:[self itemComparator]];
    return items;
}

+ (BOOL)createFolderNamed:(NSString *)name inRelPath:(NSString *)relPath error:(NSError **)error {
    if (name.length == 0) return NO;
    name = [name stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (name.length == 0 || [name hasPrefix:@"."]) return NO;
    NSString *base = [self rootDirectory];
    if (relPath.length > 0) base = [base stringByAppendingPathComponent:relPath];
    NSString *dir = [base stringByAppendingPathComponent:name];
    if ([[NSFileManager defaultManager] fileExistsAtPath:dir]) {
        if (error) *error = [NSError errorWithDomain:@"MioVoice" code:1 userInfo:@{NSLocalizedDescriptionKey: @"同名文件或文件夹已存在"}];
        return NO;
    }
    return [[NSFileManager defaultManager] createDirectoryAtPath:dir withIntermediateDirectories:YES attributes:nil error:error];
}

+ (BOOL)renameItemAtRelPath:(NSString *)relPath toName:(NSString *)newName error:(NSError **)error {
    if (relPath.length == 0 || newName.length == 0) return NO;
    newName = [newName stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (newName.length == 0) return NO;
    NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
    NSString *parent = [abs stringByDeletingLastPathComponent];
    NSString *newAbs = [parent stringByAppendingPathComponent:newName];
    NSFileManager *fm = [NSFileManager defaultManager];
    if ([newAbs isEqualToString:abs]) return YES;
    if ([fm fileExistsAtPath:newAbs]) {
        if (error) *error = [NSError errorWithDomain:@"MioVoice" code:2 userInfo:@{NSLocalizedDescriptionKey: @"同名文件或文件夹已存在"}];
        return NO;
    }
    BOOL ok = [fm moveItemAtPath:abs toPath:newAbs error:error];
    if (ok) {
        // 迁移元数据：时长 / 收藏 / 最近
        NSString *newRel = [self relPathForAbsPath:newAbs] ?: newName;
        NSMutableDictionary *durs = [[prefObject(kPrefDurations) mutableCopy] ?: @{} mutableCopy];
        NSNumber *dur = durs[relPath];
        if (dur) {
            [durs removeObjectForKey:relPath];
            durs[newRel] = dur;
            prefSetObject(durs, kPrefDurations);
        }
        [self migrateMetaForRelPath:relPath toRelPath:newRel];
        [self previewStop]; // 防止正在播放被删除路径的文件
    }
    return ok;
}

+ (BOOL)deleteItemAtRelPath:(NSString *)relPath error:(NSError **)error {
    if (relPath.length == 0) return NO;
    NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
    [self previewStop];
    BOOL ok = [[NSFileManager defaultManager] removeItemAtPath:abs error:error];
    if (ok) {
        // 清理该路径及其子路径的元数据
        NSMutableDictionary *durs = [[prefObject(kPrefDurations) mutableCopy] ?: @{} mutableCopy];
        for (NSString *key in [durs allKeys]) {
            if ([key isEqualToString:relPath] || [key hasPrefix:[relPath stringByAppendingString:@"/"]]) {
                [durs removeObjectForKey:key];
            }
        }
        prefSetObject(durs, kPrefDurations);
        [self removeMetaForRelPathPrefix:relPath fromArrayKey:kPrefFavorites];
        [self removeMetaForRelPathPrefix:relPath fromArrayKey:kPrefRecents];
    }
    return ok;
}

+ (NSString *)importFileFromURL:(NSURL *)url toRelPath:(NSString *)relPath error:(NSError **)error {
    NSFileManager *fm = [NSFileManager defaultManager];
    // 安全作用域授权：文件 App / iCloud 导入的 URL 必须先授权才能读（否则可能复制出 0 字节文件）
    BOOL scoped = [url startAccessingSecurityScopedResource];
    @try {
        NSString *base = [self rootDirectory];
        if (relPath.length > 0) base = [base stringByAppendingPathComponent:relPath];
        NSString *dest = [base stringByAppendingPathComponent:url.lastPathComponent];
        // 重名追加序号
        NSString *name = url.lastPathComponent;
        NSString *ext = name.pathExtension;
        NSString *stem = ext.length > 0 ? [name stringByDeletingPathExtension] : name;
        int seq = 1;
        while ([fm fileExistsAtPath:dest]) {
            NSString *newName = ext.length > 0 ? [NSString stringWithFormat:@"%@(%d).%@", stem, seq, ext] : [NSString stringWithFormat:@"%@(%d)", stem, seq];
            dest = [base stringByAppendingPathComponent:newName];
            seq++;
        }
        NSString *srcPath = url.path;
        if (srcPath.length == 0) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:5 userInfo:@{NSLocalizedDescriptionKey: @"无法访问所选文件（请确认文件已下载到本机）"}];
            return nil;
        }
        BOOL ok = [fm copyItemAtPath:srcPath toPath:dest error:error];
        if (ok) {
            NSDictionary *attrs = [fm attributesOfItemAtPath:dest error:nil];
            WPLog(@"Voice", @"[Import] 导入成功: %@ (%llu 字节, 授权=%d)", dest, attrs.fileSize ?: 0, scoped);
            // 系统可识别音频自动探测时长
            NSString *newRel = [self relPathForAbsPath:dest];
            if (newRel && MioIsSystemPlayableExt(dest.pathExtension)) {
                long long ms = [self probeDurationMsForFile:dest];
                if (ms > 0) [self setDurationMs:ms forRelPath:newRel];
            }
            return [self relPathForAbsPath:dest];
        }
        WPLog(@"Voice", @"[Import] 导入失败: %@ -> %@, 原因: %@", srcPath, dest, error ? (*error).localizedDescription : @"未知");
        return nil;
    } @finally {
        if (scoped) [url stopAccessingSecurityScopedResource];
    }
}

#pragma mark - 元数据内部迁移/清理

+ (void)migrateMetaForRelPath:(NSString *)oldRel toRelPath:(NSString *)newRel {
    for (NSString *key in @[kPrefFavorites, kPrefRecents]) {
        NSMutableArray *arr = [[prefObject(key) mutableCopy] ?: @[] mutableCopy];
        BOOL changed = NO;
        for (NSUInteger i = 0; i < arr.count; i++) {
            NSString *p = arr[i];
            if ([p isEqualToString:oldRel] || [p hasPrefix:[oldRel stringByAppendingString:@"/"]]) {
                NSString *suffix = [p substringFromIndex:oldRel.length];
                arr[i] = [newRel stringByAppendingString:suffix];
                changed = YES;
            }
        }
        if (changed) prefSetObject(arr, key);
    }
}

+ (void)removeMetaForRelPathPrefix:(NSString *)relPath fromArrayKey:(NSString *)key {
    NSMutableArray *arr = [[prefObject(key) mutableCopy] ?: @[] mutableCopy];
    NSMutableArray *out = [NSMutableArray array];
    for (NSString *p in arr) {
        BOOL drop = [p isEqualToString:relPath] || [p hasPrefix:[relPath stringByAppendingString:@"/"]];
        if (!drop) [out addObject:p];
    }
    if (out.count != arr.count) prefSetObject(out, key);
}

#pragma mark - 时长

+ (void)setDurationMs:(long long)ms forRelPath:(NSString *)relPath {
    if (ms <= 0 || relPath.length == 0) return;
    NSMutableDictionary *durs = [[prefObject(kPrefDurations) mutableCopy] ?: @{} mutableCopy];
    durs[relPath] = @(ms);
    prefSetObject(durs, kPrefDurations);
}

+ (long long)durationMsForRelPath:(NSString *)relPath {
    if (relPath.length == 0) return 0;
    NSDictionary *durs = prefObject(kPrefDurations) ?: @{};
    NSNumber *n = durs[relPath];
    if (n) return [n longLongValue];
    NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
    if (MioIsSystemPlayableExt(abs.pathExtension)) {
        long long ms = [self probeDurationMsForFile:abs];
        if (ms > 0) [self setDurationMs:ms forRelPath:relPath];
        return ms;
    }
    return 0;
}

/// AVURLAsset 探测音频时长（毫秒）
+ (long long)probeDurationMsForFile:(NSString *)path {
    @try {
        AVURLAsset *asset = [AVURLAsset URLAssetWithURL:[NSURL fileURLWithPath:path] options:nil];
        double sec = CMTimeGetSeconds(asset.duration);
        if (sec > 0 && sec < 3600.0 * 4) return (long long)(sec * 1000.0);
    } @catch (NSException *e) {}
    return 0;
}

#pragma mark - 收藏 / 最近

+ (NSArray<NSString *> *)favoriteRelPaths {
    return prefObject(kPrefFavorites) ?: @[];
}

+ (BOOL)isFavoriteRelPath:(NSString *)relPath {
    return [[self favoriteRelPaths] containsObject:relPath];
}

+ (void)toggleFavoriteForRelPath:(NSString *)relPath {
    NSMutableArray *arr = [[prefObject(kPrefFavorites) mutableCopy] ?: @[] mutableCopy];
    if ([arr containsObject:relPath]) {
        [arr removeObject:relPath];
    } else {
        [arr insertObject:relPath atIndex:0];
    }
    prefSetObject(arr, kPrefFavorites);
}

+ (NSArray<NSString *> *)recentRelPaths {
    return prefObject(kPrefRecents) ?: @[];
}

+ (void)addRecentRelPath:(NSString *)relPath {
    NSMutableArray *arr = [[prefObject(kPrefRecents) mutableCopy] ?: @[] mutableCopy];
    [arr removeObject:relPath];
    [arr insertObject:relPath atIndex:0];
    while (arr.count > 50) [arr removeLastObject];
    prefSetObject(arr, kPrefRecents);
}

+ (nullable VoicePackItem *)itemForRelPath:(NSString *)relPath {
    if (relPath.length == 0) return nil;
    NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
    NSFileManager *fm = [NSFileManager defaultManager];
    BOOL isDir = NO;
    if (![fm fileExistsAtPath:abs isDirectory:&isDir]) return nil;
    VoicePackItem *it = [[VoicePackItem alloc] init];
    it.name = relPath.lastPathComponent;
    it.absPath = abs;
    it.relPath = relPath;
    it.isDirectory = isDir;
    NSDictionary *attrs = [fm attributesOfItemAtPath:abs error:nil];
    it.fileSize = isDir ? 0 : (attrs.fileSize ?: 0);
    it.modDate = attrs[NSFileModificationDate];
    return it;
}

#pragma mark - 发送

/// 按 silk 帧结构走完整条流，返回帧数（每帧 20ms）；结构非法返回 -1
static long long SilkWalkFrames(const uint8_t *b, NSUInteger len, NSUInteger pos, int sizeBytes) {
    long long frames = 0;
    while (pos + sizeBytes <= len) {
        long long fsz = (sizeBytes == 1) ? b[pos] : (b[pos] | (b[pos + 1] << 8)); // 2字节为小端
        pos += sizeBytes;
        if (fsz == 0) break;            // 结束帧
        if (fsz > 250) return -1;       // 非法帧长（silk 单帧上限 250 字节）
        if (pos + fsz > len) return -1; // 截断
        pos += fsz;
        frames++;
        if (frames > 6000) return -1;   // 防御：超过 2 分钟
    }
    return (pos == len) ? frames : -1;  // 必须恰好走完整条流
}

/// 定位文件内的 silk 流起点（跳过微信本地文件的 0x02 前缀），失败返回 -1
static NSUInteger SilkStreamOffset(NSData *data) {
    const uint8_t *b = data.bytes;
    NSUInteger len = data.length;
    if (len < 9) return (NSUInteger)-1;
    if (memcmp(b, "#!SILK_V3", 9) == 0) return 0;
    if (len > 10 && b[0] == 0x02 && memcmp(b + 1, "#!SILK_V3", 9) == 0) return 1;
    return (NSUInteger)-1;
}

+ (long long)silkDurationMsForFile:(NSString *)path {
    NSData *data = [NSData dataWithContentsOfFile:path];
    if (data.length < 20) return 0;
    NSUInteger off = SilkStreamOffset(data);
    if (off == (NSUInteger)-1) return 0;
    const uint8_t *b = (const uint8_t *)data.bytes + off;
    NSUInteger len = data.length - off;
    NSUInteger pos = 9;
    if (pos < len && b[pos] == '\n') pos++; // 头部变体: #!SILK_V3\n
    // 优先 2 字节小端帧长，其次 1 字节帧长
    long long frames = SilkWalkFrames(b, len, pos, 2);
    if (frames < 0) frames = SilkWalkFrames(b, len, pos, 1);
    if (frames <= 0) return 0;
    return frames * 20; // 每帧固定 20ms
}

+ (NSData *)voiceDataFromWrap:(id)wrap {
    Ivar ivar = MioFindVoiceDataIvar(wrap);
    if (!ivar) return nil;
    id val = object_getIvar(wrap, ivar);
    return [val isKindOfClass:[NSData class]] ? val : nil;
}

// ═══════════════════════════════════════════════════════
// 运行时方法探测（微信版本间选择器名有差异，仿小微助手链路）
// ═══════════════════════════════════════════════════════

/// 在实例/类方法列表中按关键词与参数总数（含 self/_cmd）查找选择器，找不到返回 NULL
static SEL MioFindMethodSel(Class cls, BOOL classMethod, NSArray<NSString *> *keywords, NSUInteger totalArgs) {
    if (!cls) return NULL;
    Class searchCls = classMethod ? object_getClass(cls) : cls;
    unsigned int count = 0;
    Method *list = class_copyMethodList(searchCls, &count);
    SEL found = NULL;
    for (unsigned int i = 0; i < count; i++) {
        NSString *lower = NSStringFromSelector(method_getName(list[i])).lowercaseString;
        for (NSString *k in keywords) {
            if ([lower containsString:k]) {
                if (method_getNumberOfArguments(list[i]) == totalArgs) found = method_getName(list[i]);
                break;
            }
        }
        if (found) break;
    }
    free(list);
    return found;
}

/// 探测语音文件落盘路径（参照小微：getVoicePath → +getPathOfAudio: → getAudioFileName:LocalID:）
/// 新消息 localID=0 时前两条路径即可用（微信录音流程本来就是先落盘后入库）
static NSString *MioProbeVoicePath(id msg, id msgMgr) {
    @try {
        Class wrapCls = object_getClass(msg);
        // 1) wrap 实例方法（如 getVoicePath）
        SEL sel = MioFindMethodSel(wrapCls, NO, @[@"voicepath"], 2);
        if (sel) {
            NSString *p = ((id (*)(id, SEL))objc_msgSend)(msg, sel);
            if ([p isKindOfClass:[NSString class]] && p.length > 0) {
                WPLog(@"Voice", @"[Send] 语音路径: -%@ → %@", NSStringFromSelector(sel), p);
                return p;
            }
        }
        // 2) CMessageWrap 类方法（如 +getPathOfAudio:）
        sel = MioFindMethodSel(wrapCls, YES, @[@"pathofaudio", @"pathofvoice", @"voicepath", @"audiopath"], 3);
        if (sel) {
            NSString *p = ((id (*)(id, SEL, id))objc_msgSend)(wrapCls, sel, msg);
            if ([p isKindOfClass:[NSString class]] && p.length > 0) {
                WPLog(@"Voice", @"[Send] 语音路径: +%@ → %@", NSStringFromSelector(sel), p);
                return p;
            }
        }
        // 3) CMessageMgr 实例方法（如 getAudioFileName:LocalID:；未入库时 localID=0）
        if (msgMgr) {
            SEL sel2 = MioFindMethodSel(object_getClass(msgMgr), NO, @[@"getaudiofilename"], 4);
            if (sel2) {
                unsigned int localID = 0;
                Ivar iv = class_getInstanceVariable(wrapCls, "m_uiMesLocalID");
                if (iv) localID = *(unsigned int *)((__bridge void *)msg + ivar_getOffset(iv));
                NSString *p = ((id (*)(id, SEL, id, unsigned long long))objc_msgSend)(msgMgr, sel2, msg, (unsigned long long)localID);
                if ([p isKindOfClass:[NSString class]] && p.length > 0) {
                    WPLog(@"Voice", @"[Send] 语音路径: -%@ (localID=%u) → %@", NSStringFromSelector(sel2), localID, p);
                    return p;
                }
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[Send] 语音路径探测异常: %@ %@", e.name, e.reason);
    }
    return nil;
}

/// 确保目录存在后写文件，返回是否成功
static BOOL MioWriteVoiceFile(NSData *data, NSString *path) {
    if (path.length == 0 || data.length == 0) return NO;
    NSString *dir = [path stringByDeletingLastPathComponent];
    if (dir.length > 0) [[NSFileManager defaultManager] createDirectoryAtPath:dir withIntermediateDirectories:YES attributes:nil error:nil];
    return [data writeToFile:path atomically:YES];
}

/// 沿继承链扫描方法（class_copyMethodList 只列本类方法，漏掉继承的），verbose 时打印全部命中
static SEL MioFindMethodInChain(Class cls, NSArray<NSString *> *keywords, NSUInteger minArgs, BOOL verbose) {
    SEL found = NULL;
    int logged = 0;
    for (Class c = cls; c != nil && c != [NSObject class]; c = class_getSuperclass(c)) {
        unsigned int count = 0;
        Method *list = class_copyMethodList(c, &count);
        for (unsigned int i = 0; i < count; i++) {
            NSString *name = NSStringFromSelector(method_getName(list[i]));
            NSString *lower = name.lowercaseString;
            for (NSString *k in keywords) {
                if ([lower containsString:k]) {
                    if (verbose && logged++ < 60) WPLog(@"Voice", @"[API] %@:: %@ (%u参)", NSStringFromClass(c), name, method_getNumberOfArguments(list[i]));
                    if (!found && method_getNumberOfArguments(list[i]) >= minArgs) found = method_getName(list[i]);
                    break;
                }
            }
        }
        free(list);
    }
    return found;
}

/// 读取 m_uiMesLocalID（uint ivar 定长读）
static unsigned int MioReadLocalID(id msg) {
    if (!msg) return 0;
    Ivar iv = class_getInstanceVariable(object_getClass(msg), "m_uiMesLocalID");
    if (!iv) return 0;
    return *(unsigned int *)((__bridge void *)msg + ivar_getOffset(iv));
}

/// 一次性诊断（仅轻量确认；★禁止全类扫描：
/// log15 主线程扫描、log16 后台扫描均在枚举 11.4 万类后 ~2s 进程死亡，
/// 疑似微信防护击杀类枚举行为，主线程/后台线程都一样）
static void MioDumpSendAPIOnce(id msgMgr) {
    static BOOL once = NO;
    if (once) return;
    once = YES;
    @try {
        Class namedCls = objc_getClass("CMessageMgr");
        Class instCls = object_getClass(msgMgr);
        WPLog(@"Voice", @"[API] msgMgr实例类=%@ super=%@ | 命名类=%@",
              NSStringFromClass(instCls), NSStringFromClass(class_getSuperclass(instCls)),
              NSStringFromClass(namedCls));
        NSArray<NSString *> *known = @[@"AddMsg:MsgWrap:",
                                       @"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:",
                                       @"SaveMesVoice:MsgWrap:",
                                       @"addMessageToDB:",
                                       @"ResendVoiceMsg:MsgWrap:",
                                       @"SSendVoiceMsg:toContactUsrName:"];
        for (NSString *n in known) {
            SEL s = NSSelectorFromString(n);
            WPLog(@"Voice", @"[API] %@ → 命名类=%d 实例响应=%d", n,
                  namedCls ? (class_getInstanceMethod(namedCls, s) != NULL) : NO,
                  [msgMgr respondsToSelector:s]);
        }
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[API] 轻量确认异常: %@ %@", e.name, e.reason);
    }
}

+ (BOOL)sendVoiceAtRelPath:(NSString *)relPath toChat:(NSString *)chatName error:(NSError **)error {
    @try {
        if (relPath.length == 0 || chatName.length == 0) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:10 userInfo:@{NSLocalizedDescriptionKey: @"参数缺失"}];
            return NO;
        }
        NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
        NSData *data = [NSData dataWithContentsOfFile:abs];
        if (data.length == 0) {
            NSDictionary *attrs = [[NSFileManager defaultManager] attributesOfItemAtPath:abs error:nil];
            WPLog(@"Voice", @"[Send] 读取失败: rel=%@ abs=%@ 存在=%d 大小=%llu",
                  relPath, abs,
                  [[NSFileManager defaultManager] fileExistsAtPath:abs],
                  attrs.fileSize ?: 0);
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:11 userInfo:@{NSLocalizedDescriptionKey: @"音频文件为空或不可读"}];
            return NO;
        }
        NSUInteger off = SilkStreamOffset(data);
        if (off == (NSUInteger)-1) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:16 userInfo:@{NSLocalizedDescriptionKey: @"文件不是有效的 silk 格式"}];
            return NO;
        }
        // 收发网络格式 = 0x02 + silk 流（聊天纳入原样保存的收到 buffer 均带 0x02 前缀，与微信本地文件一致）
        NSData *wire = data;
        if (off == 0) { // 纯 silk 流的包：补 0x02 前缀对齐微信格式
            NSMutableData *m = [NSMutableData dataWithCapacity:data.length + 1];
            const uint8_t pfx = 0x02;
            [m appendBytes:&pfx length:1];
            [m appendData:data];
            wire = m;
        }
        NSMutableString *hex = [NSMutableString string];
        const uint8_t *hb = wire.bytes;
        for (NSUInteger i = 0; i < 16 && i < wire.length; i++) [hex appendFormat:@"%02X ", hb[i]];
        WPLog(@"Voice", @"[Send] 发送格式头: %@", hex);
        Class wrapClass = objc_getClass("CMessageWrap");
        id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
        SEL addSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
        if (!wrapClass || !msgMgr || ![msgMgr respondsToSelector:addSel]) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:12 userInfo:@{NSLocalizedDescriptionKey: @"微信消息接口不可用"}];
            return NO;
        }
        id msg = ((id (*)(id, SEL, long long))objc_msgSend)([wrapClass alloc], @selector(initWithMsgType:), 34LL);
        if (!msg) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:13 userInfo:@{NSLocalizedDescriptionKey: @"消息对象创建失败"}];
            return NO;
        }
        // 语音数据字段：不同微信版本字段名不同，运行时探测（老版本 m_nsImgBuf）
        Ivar dataIvar = MioFindVoiceDataIvar(msg);
        if (!dataIvar) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:15 userInfo:@{NSLocalizedDescriptionKey: @"微信版本不兼容：未找到语音数据字段"}];
            return NO;
        }
        object_setIvar(msg, dataIvar, wire);
        [msg setValue:chatName forKey:@"m_nsToUsr"];
        NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        if (selfUsr.length > 0) [msg setValue:selfUsr forKey:@"m_nsFromUsr"];
        // ★状态=1(待发送)：微信发送/上传队列才会拾取。写 4(已发送)会被队列跳过 → 假发（对方收不到）
        [msg setValue:@(1) forKey:@"m_uiStatus"];
        [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];

        long long ms = [self durationMsForRelPath:relPath];
        if (ms <= 0) {
            ms = [self silkDurationMsForFile:abs]; // silk 逐帧解析真实时长
            if (ms > 0) [self setDurationMs:ms forRelPath:relPath]; // 缓存，列表也显示真实秒数
        }
        if (ms <= 0) ms = 1000; // 最终兜底 1 秒
        // 版本兼容字段：旧版微信有这些 ivar，新版实测（147 ivar 全量）没有，写不进就跳过
        MioSetIntIvarIfExist(msg, "m_uiVoiceTime", ms / 1000);      // 秒
        MioSetIntIvarIfExist(msg, "m_uiVoiceFormat", 4);            // 4 = silk
        MioSetIntIvarIfExist(msg, "m_uiVoiceEndFlag", 1);
        MioSetIntIvarIfExist(msg, "m_uiVoiceForwardFlag", 0);
        // XML 模板参照小微助手逆向结论（voiceformat="4" 数值型最小模板）
        [msg setValue:[NSString stringWithFormat:@"<msg><voicemsg voicelength=\"%lld\" voiceformat=\"4\" forwardflag=\"0\" /></msg>", ms]
               forKey:@"m_nsContent"];
        WPLog(@"Voice", @"[Send] 构造语音: %lldms, wire %llu 字节", ms, wire.length);

        // 仿小微：先把语音写到微信期望的落盘路径（录音流程本就是先落盘后入库，上传管线从文件读取）
        NSString *voicePath = MioProbeVoicePath(msg, msgMgr);
        if (voicePath.length > 0) {
            WPLog(@"Voice", @"[Send] 语音落盘%@: %@", MioWriteVoiceFile(wire, voicePath) ? @"成功" : @"失败", voicePath);
        } else {
            WPLog(@"Voice", @"[Send] 未探测到语音路径方法，仅依赖 buffer");
        }

        MioDumpSendAPIOnce(msgMgr); // 一次性 dump 本版本发送相关 API（诊断用）

        // ★仿小微链路第一步：SaveMesVoice:path MsgWrap:（log16 已确认本版本存在，命名类=1）
        // 小微在 AddLocalMsg 之前调用它——负责语音文件处理/时长补算/发送管线准备，
        // 这是 AddLocalMsg 单独调用时上传管线不拾取（一直"发送中"）的缺失环节
        BOOL inserted = NO;
        SEL saveSel = NSSelectorFromString(@"SaveMesVoice:MsgWrap:");
        if (voicePath.length > 0 && [msgMgr respondsToSelector:saveSel]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, saveSel, voicePath, msg);
                unsigned int lid = MioReadLocalID(msg);
                WPLog(@"Voice", @"[Send] SaveMesVoice 已调用 path=%@ localID=%u", voicePath, lid);
                if (lid != 0) inserted = YES; // SaveMesVoice 已完成入库，跳过 AddLocalMsg 防重复
            } @catch (NSException *e) {
                WPLog(@"Voice", @"[Send] SaveMesVoice 异常: %@ %@", e.name, e.reason);
            }
        } else {
            WPLog(@"Voice", @"[Send] SaveMesVoice 跳过 (path=%@ resp=%d)，直接 AddLocalMsg", voicePath, [msgMgr respondsToSelector:saveSel]);
        }

        // 入库：优先精确 AddLocalMsg（respondsToSelector 沿继承链查找，弥补 class_copyMethodList 查不到继承方法的盲区）
        SEL addLocal6 = NSSelectorFromString(@"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:");
        SEL addLocal5 = NSSelectorFromString(@"AddLocalMsg:MsgWrap:fixTime:");
        SEL addLocal4 = NSSelectorFromString(@"AddLocalMsg:MsgWrap:");
        if (!inserted && [msgMgr respondsToSelector:addLocal6]) {
            ((void (*)(id, SEL, id, id, long long, long long))objc_msgSend)(msgMgr, addLocal6, chatName, msg, 1LL, 0LL);
            inserted = YES;
            WPLog(@"Voice", @"[Send] 入库: AddLocalMsg(6参精确, fixTime=1 notify=0)");
        } else if (!inserted && [msgMgr respondsToSelector:addLocal5]) {
            ((void (*)(id, SEL, id, id, long long))objc_msgSend)(msgMgr, addLocal5, chatName, msg, 1LL);
            inserted = YES;
            WPLog(@"Voice", @"[Send] 入库: AddLocalMsg(5参精确, fixTime=1)");
        } else if (!inserted && [msgMgr respondsToSelector:addLocal4]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addLocal4, chatName, msg);
            inserted = YES;
            WPLog(@"Voice", @"[Send] 入库: AddLocalMsg(4参精确)");
        } else if (!inserted) {
            SEL chainSel = MioFindMethodInChain(object_getClass(msgMgr), @[@"addlocalmsg"], 4, NO);
            if (chainSel) {
                Method m = class_getInstanceMethod(object_getClass(msgMgr), chainSel);
                unsigned int argc = m ? method_getNumberOfArguments(m) : 0;
                WPLog(@"Voice", @"[Send] 链上命中: %@ (%u参)", NSStringFromSelector(chainSel), argc);
                if (argc == 6) ((void (*)(id, SEL, id, id, long long, long long))objc_msgSend)(msgMgr, chainSel, chatName, msg, 1LL, 0LL);
                else if (argc == 5) ((void (*)(id, SEL, id, id, long long))objc_msgSend)(msgMgr, chainSel, chatName, msg, 1LL);
                else ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, chainSel, chatName, msg);
                inserted = YES;
            }
        }
        if (!inserted) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addSel, chatName, msg);
            WPLog(@"Voice", @"[Send] 入库: AddMsg:MsgWrap: (兜底)");
        }

        // 入库后 localID 已分配：再探测一次路径，若文件名变化则补写一份（覆盖两种命名方案）
        NSString *postPath = MioProbeVoicePath(msg, msgMgr);
        if (postPath.length > 0 && ![postPath isEqualToString:voicePath]) {
            WPLog(@"Voice", @"[Send] 入库后路径补写%@: %@", MioWriteVoiceFile(wire, postPath) ? @"成功" : @"失败", postPath);
        }

        WPLog(@"Voice", @"[Send] 已提交语音包条目: %@ -> %@ (%.1fKB)", relPath, chatName, wire.length / 1024.0);

        // 状态跟踪（SSendVoiceMsg 兜底已删：log16 确认本版本不存在该方法）
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            @try {
                WPLog(@"Voice", @"[Send] 2s状态=%@ localID=%@", [msg valueForKey:@"m_uiStatus"], [msg valueForKey:@"m_uiMesLocalID"]);
            } @catch (NSException *e) {}
        });
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(6 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            @try {
                WPLog(@"Voice", @"[Send] 6s后状态=%@ localID=%@", [msg valueForKey:@"m_uiStatus"], [msg valueForKey:@"m_uiMesLocalID"]);
            } @catch (NSException *e) {}
        });
        [self addRecentRelPath:relPath];
        return YES;
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[Send] 发送异常: %@ - %@", e.name, e.reason);
        if (error) *error = [NSError errorWithDomain:@"MioVoice" code:14 userInfo:@{NSLocalizedDescriptionKey: [NSString stringWithFormat:@"发送失败: %@", e.reason ?: e.name]}];
        return NO;
    }
}

#pragma mark - 预览播放

static AVAudioPlayer *_previewPlayer = nil;

+ (BOOL)isPreviewSupportedRelPath:(NSString *)relPath {
    if (relPath.length == 0) return NO;
    NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
    return MioIsSystemPlayableExt(abs.pathExtension);
}

+ (BOOL)previewPlayAtRelPath:(NSString *)relPath {
    @try {
        [self previewStop];
        NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
        if (!MioIsSystemPlayableExt(abs.pathExtension)) return NO; // silk 等格式不支持系统预览
        NSData *data = [NSData dataWithContentsOfFile:abs];
        if (data.length == 0) return NO;
        NSError *err = nil;
        AVAudioPlayer *player = [[AVAudioPlayer alloc] initWithData:data error:&err];
        if (!player) {
            WPLog(@"Voice", @"[Preview] 初始化失败: %@", err.localizedDescription);
            return NO;
        }
        _previewPlayer = player;
        [player prepareToPlay];
        [player play];
        return YES;
    } @catch (NSException *e) {
        return NO;
    }
}

+ (BOOL)previewIsPlayingRelPath:(NSString *)relPath {
    return _previewPlayer.isPlaying;
}

+ (void)previewStop {
    @try {
        [_previewPlayer stop];
        _previewPlayer = nil;
    } @catch (NSException *e) {}
}

@end
