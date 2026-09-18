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
        object_setIvar(msg, dataIvar, data);
        [msg setValue:chatName forKey:@"m_nsToUsr"];
        NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        if (selfUsr.length > 0) [msg setValue:selfUsr forKey:@"m_nsFromUsr"];
        [msg setValue:@(4) forKey:@"m_uiStatus"];
        [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];

        long long ms = [self durationMsForRelPath:relPath];
        if (ms <= 0) ms = 1000; // 兜底 1 秒，避免显示 0"
        MioSetIntIvarIfExist(msg, "m_iVoiceTime", ms / 1000);
        [msg setValue:[NSString stringWithFormat:@"<msg><voicemsg voicelength=\"%lld\" fromusername=\"%@\" tousername=\"%@\" downcount=\"0\"/></msg>", ms, selfUsr ?: @"", chatName]
               forKey:@"m_nsContent"];

        ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addSel, chatName, msg);
        WPLog(@"Voice", @"[Send] 已发送语音包条目: %@ -> %@ (%.1fKB)", relPath, chatName, data.length / 1024.0);
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
