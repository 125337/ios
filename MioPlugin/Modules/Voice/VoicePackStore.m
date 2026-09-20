#import "VoicePackStore.h"
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"

/// VoiceHook 捕获的活 UploadVoiceCDNMgr 实例（TimerCheckUpload 钩子保存）
extern id MioGetUploadVoiceCDNMgr(void);

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

NSString * const MioVoicePreviewDidFinishNotification = @"MioVoicePreviewDidFinish";

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
// silk 试听解码（对齐 WCR反编译 FUN_008f437c：借微信自带 MJSilkCodec）
// ═══════════════════════════════════════════════════════

/// 微信 silk 编解码类可用性（守卫 selector，防版本差异）
static BOOL MioSilkCodecAvailable(void) {
    static dispatch_once_t once;
    static BOOL ok = NO;
    dispatch_once(&once, ^{
        Class c = objc_getClass("MJSilkCodec");
        ok = c != nil && ([c respondsToSelector:NSSelectorFromString(@"decodeToAudioDataFromSilkData:")]
                       || [c respondsToSelector:NSSelectorFromString(@"decodeToPCMFromSilkData:")]);
        WPLog(@"Voice", @"[Preview] MJSilkCodec 可用=%d (audioSel=%d pcmSel=%d)", (int)ok,
              (int)(c && [c respondsToSelector:NSSelectorFromString(@"decodeToAudioDataFromSilkData:")]),
              (int)(c && [c respondsToSelector:NSSelectorFromString(@"decodeToPCMFromSilkData:")]));
    });
    return ok;
}

/// silk 家族扩展名（微信 wire 格式；amr/spx 本插件不做转码）
static BOOL MioIsSilkFamilyExt(NSString *ext) {
    ext = [ext lowercaseString];
    return [ext isEqualToString:@"aud"] || [ext isEqualToString:@"silk"] || [ext isEqualToString:@"slk"];
}

/// 裸 PCM → WAV 容器（MJSilkCodec 输出：16kHz 单声道 16bit；RIFF 44 字节头）
static NSData *MioWrapWavFromPCM(NSData *pcm, UInt32 sampleRate) {
    if (pcm.length == 0 || pcm.length % 2 != 0 || pcm.length > 0x10000000) return nil;
    UInt32 dataLen = (UInt32)pcm.length;
    UInt16 channels = 1, bitsPerSample = 16;
    UInt32 byteRate = sampleRate * channels * bitsPerSample / 8;
    UInt16 blockAlign = channels * bitsPerSample / 8;
    uint8_t hdr[44];
    memcpy(hdr, "RIFF", 4);
    UInt32 riffSize = 36 + dataLen;  memcpy(hdr + 4,  &riffSize, 4);
    memcpy(hdr + 8, "WAVE", 4);
    memcpy(hdr + 12, "fmt ", 4);
    UInt32 fmtSize = 16;             memcpy(hdr + 16, &fmtSize, 4);
    UInt16 audioFmt = 1;             memcpy(hdr + 20, &audioFmt, 2); // PCM
    memcpy(hdr + 22, &channels, 2);
    memcpy(hdr + 24, &sampleRate, 4);
    memcpy(hdr + 28, &byteRate, 4);
    memcpy(hdr + 32, &blockAlign, 2);      // 32-33（曾误写 +30 覆盖 byteRate 高位 → 'fmt?' 错误）
    memcpy(hdr + 34, &bitsPerSample, 2);   // 34-35
    memcpy(hdr + 36, "data", 4);
    memcpy(hdr + 40, &dataLen, 4);
    NSMutableData *wav = [NSMutableData dataWithCapacity:44 + dataLen];
    [wav appendBytes:hdr length:44];
    [wav appendData:pcm];
    return wav;
}

/// silk wire 数据 → 系统可播音频数据（对齐 WCR：候选=剥0x02前缀+原始；双 selector 依次尝试）
static NSData *MioDecodeSilkToPlayable(NSData *wire) {
    if (wire.length == 0) return nil;
    Class codec = objc_getClass("MJSilkCodec");
    if (!codec || !MioSilkCodecAvailable()) {
        WPLog(@"Voice", @"[Preview] MJSilkCodec 不可用");
        return nil;
    }
    SEL audioSel = NSSelectorFromString(@"decodeToAudioDataFromSilkData:");
    SEL pcmSel = NSSelectorFromString(@"decodeToPCMFromSilkData:");
    BOOL hasAudio = [codec respondsToSelector:audioSel];
    BOOL hasPCM = [codec respondsToSelector:pcmSel];

    NSMutableArray<NSData *> *candidates = [NSMutableArray array];
    if (wire.length > 1) {
        NSData *stripped = [wire subdataWithRange:NSMakeRange(1, wire.length - 1)]; // 剥 0x02 wire 前缀
        if (![stripped isEqualToData:wire]) [candidates addObject:stripped];
    }
    [candidates addObject:wire];

    for (NSData *cand in candidates) {
        if (hasAudio) {
            @try {
                NSData *out = ((NSData *(*)(id, SEL, id))objc_msgSend)(codec, audioSel, cand);
                if ([out isKindOfClass:[NSData class]] && out.length > 0) {
                    // 输出可能是 wav/mp3/m4a 容器——用 AVAudioPlayer 试初始化验证可直接播
                    AVAudioPlayer *t = [[AVAudioPlayer alloc] initWithData:out error:nil];
                    if (t) {
                        WPLog(@"Voice", @"[Preview] decodeToAudioData 成功 (%lu bytes)", (unsigned long)out.length);
                        return out;
                    }
                }
            } @catch (NSException *e) {
                WPLog(@"Voice", @"[Preview] decodeToAudioData 异常: %@", e.reason);
            }
        }
        if (hasPCM) {
            @try {
                NSData *pcm = ((NSData *(*)(id, SEL, id))objc_msgSend)(codec, pcmSel, cand);
                if ([pcm isKindOfClass:[NSData class]] && pcm.length > 0) {
                    NSData *wav = MioWrapWavFromPCM(pcm, 16000); // MJSilkCodec 实测输出 16kHz（24kHz 会 1.5 倍速）
                    if (wav) {
                        WPLog(@"Voice", @"[Preview] decodeToPCM→WAV 成功 (%lu bytes, 16kHz)", (unsigned long)pcm.length);
                        return wav;
                    }
                }
            } @catch (NSException *e) {
                WPLog(@"Voice", @"[Preview] decodeToPCM 异常: %@", e.reason);
            }
        }
    }
    return nil;
}

/// 试听自然播完回调 → 复位播放器 + 发通知刷新 UI
@interface MioVoicePreviewFinishDelegate : NSObject <AVAudioPlayerDelegate>
@end
@implementation MioVoicePreviewFinishDelegate
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)player successfully:(BOOL)flag {
    [VoicePackStore previewStop];
    [[NSNotificationCenter defaultCenter] postNotificationName:MioVoicePreviewDidFinishNotification object:nil];
}
@end

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

/// 读取 m_uiMesLocalID（日志用）
static unsigned int MioWrapLocalIDOf(id wrap) {
    if (!wrap) return 0;
    Ivar iv = class_getInstanceVariable(object_getClass(wrap), "m_uiMesLocalID");
    if (!iv) return 0;
    return *(unsigned int *)((__bridge void *)wrap + ivar_getOffset(iv));
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
                                       @"AddLocalMsg:MsgWrap:",
                                       @"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:",
                                       @"SaveMesVoice:MsgWrap:",
                                       @"ResendMsg:MsgWrap:",
                                       @"addMessageToDB:",
                                       @"ResendVoiceMsg:MsgWrap:",
                                       @"SSendVoiceMsg:toContactUsrName:"];
        for (NSString *n in known) {
            SEL s = NSSelectorFromString(n);
            WPLog(@"Voice", @"[API] %@ → 命名类=%d 实例响应=%d", n,
                  namedCls ? (class_getInstanceMethod(namedCls, s) != NULL) : NO,
                  [msgMgr respondsToSelector:s]);
        }
        // 方法名清单（一次性）：voice/resend/upload/send 相关选择器，为发送队列触发方式留证据
        unsigned int mcount = 0;
        Method *mlist = namedCls ? class_copyMethodList(namedCls, &mcount) : NULL;
        if (mlist) {
            NSMutableArray<NSString *> *hits = [NSMutableArray array];
            for (unsigned int i = 0; i < mcount; i++) {
                NSString *n = NSStringFromSelector(method_getName(mlist[i]));
                NSString *l = n.lowercaseString;
                if ([l containsString:@"voice"] || [l containsString:@"resend"] ||
                    [l containsString:@"upload"] || [l containsString:@"send"]) [hits addObject:n];
            }
            free(mlist);
            WPLog(@"Voice", @"[API] CMessageMgr 语音/发送相关方法(%lu): %@", (unsigned long)hits.count, hits);
        }
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[API] 轻量确认异常: %@ %@", e.name, e.reason);
    }
}

/// 构造并挂载语音类型扩展对象（本版本 wrap 挂 m_extendInfoWithMsgType=<CExtendInfoOfVoiceMsg>。
/// ★WCRefine 转发管线模板（log29 实测，能发出）：
///   暂存消息: Format=4 / VoiceTime=ms / EndFlag=1 / ForwardFlag=1 / dtVoice=wire / refMessageWrap 回引
///   正式消息: 同上但 EndFlag=0 / ForwardFlag=0（log29 第3次调用 localID=2616 的扩展实测）
///   log20 的 SEGV 是错塞 NSDate 所致（ivar 编码 @"NSData"），塞 NSData 类型匹配无风险）
static BOOL MioAttachVoiceExtension(id msg, NSData *wire, NSString *path, long long ms, long long endFlag, long long fwdFlag) {
    Class extCls = objc_getClass("CExtendInfoOfVoiceMsg");
    if (!extCls) { WPLog(@"Voice", @"[Send] CExtendInfoOfVoiceMsg 不存在"); return NO; }
    static BOOL listed = NO;
    if (!listed) {
        listed = YES;
        unsigned int cnt = 0;
        Ivar *lv = class_copyIvarList(extCls, &cnt);
        NSMutableString *names = [NSMutableString string];
        for (unsigned int i = 0; i < cnt; i++) {
            [names appendFormat:@"\n  %@ [%s]", @(ivar_getName(lv[i]) ?: "?"), ivar_getTypeEncoding(lv[i]) ?: "?"];
        }
        if (lv) free(lv);
        WPLog(@"Voice", @"[Send] CExtendInfoOfVoiceMsg ivars(%u):%@", cnt, names);
    }
    id ext = [[extCls alloc] init];
    if (!ext) { WPLog(@"Voice", @"[Send] 扩展对象创建失败"); return NO; }
    unsigned int cnt = 0;
    Ivar *lv = class_copyIvarList(extCls, &cnt);
    void *base = (__bridge void *)ext;
    for (unsigned int i = 0; i < cnt; i++) {
        const char *nm = ivar_getName(lv[i]);
        const char *enc = ivar_getTypeEncoding(lv[i]);
        if (!nm || !enc) continue;
        NSString *lower = [@(nm) lowercaseString];
        ptrdiff_t off = ivar_getOffset(lv[i]);
        if (enc[0] == '@') {
            // ★dtVoice=语音数据主体（WCRefine 转发管线核心：SaveMesVoice 拿它写盘+登记上传）
            //   buffer/imgbuf/path 类字段 WCRefine 模板无值，不填
            if ([lower containsString:@"dtvoice"] || [lower containsString:@"voicedata"]) {
                object_setIvar(ext, lv[i], wire);
            } else if ([lower containsString:@"refmessagewrap"]) {
                // 回引 wrap 仅限 dtVoice 有数据的转发场景；真实录音模板 refMessageWrap=nil
                if (wire) object_setIvar(ext, lv[i], msg);
            }
        } else if (strchr("cBsSiIlLqQ", enc[0])) {
            // WCRefine 转发模板（log29）：format=4 / VoiceTime=真实ms / EndFlag、ForwardFlag 由调用方指定
            long long val = -1;
            if ([lower containsString:@"format"]) val = 4;
            else if ([lower containsString:@"voicetime"]) val = ms;
            else if ([lower containsString:@"endflag"]) val = endFlag;
            else if ([lower containsString:@"forwardflag"]) val = fwdFlag;
            if (val < 0) continue;
            switch (enc[0]) {
                case 'c': case 'B': *(signed char *)(base + off) = (signed char)val; break;
                case 's': *(short *)(base + off) = (short)val; break;
                case 'S': *(unsigned short *)(base + off) = (unsigned short)val; break;
                case 'i': *(int *)(base + off) = (int)val; break;
                case 'I': *(unsigned int *)(base + off) = (unsigned int)val; break;
                case 'l': case 'q': *(long long *)(base + off) = val; break;
                case 'L': case 'Q': *(unsigned long long *)(base + off) = (unsigned long long)val; break;
            }
        }
    }
    if (lv) free(lv);
    BOOL attached = NO;
    Ivar hostIvar = class_getInstanceVariable(object_getClass(msg), "m_extendInfoWithMsgType");
    if (hostIvar) { object_setIvar(msg, hostIvar, ext); attached = YES; }
    WPLog(@"Voice", @"[Send] 语音扩展挂载%@: wire=%lu字节 path=%@ ms=%lld",
          attached ? @"成功" : @"失败(wrap无扩展字段)", (unsigned long)wire.length, path, ms);
    return attached;
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
        if (!wrapClass || !msgMgr) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:12 userInfo:@{NSLocalizedDescriptionKey: @"微信消息接口不可用"}];
            return NO;
        }
        // (旧 msg 构造段已删除，新构造见下方 run 2036 段)
        long long ms = [self durationMsForRelPath:relPath];
        if (ms <= 0) {
            ms = [self silkDurationMsForFile:abs]; // silk 逐帧解析真实时长
            if (ms > 0) [self setDurationMs:ms forRelPath:relPath]; // 缓存，列表也显示真实秒数
        }
        if (ms <= 0) ms = 1000; // 最终兜底 1 秒
        // ═══★WCRefine 反编译逐行复刻（run 2036，源：WCR反编译/FUN_008dee38.c）═══
        // 单消息: dl=9 fw=1 VoiceEndFlag=1/ForwardFlag=1 VoiceTime=毫秒 dtVoice=数据
        // → CMessageMgr AddLocalMsg(2参) → CUtility 路径(3级fallback) → 写文件
        // → setM_nsVoicePath → SaveMesVoice×1 → [AudioSender ResendVoiceMsg:MsgWrap:] 触发上传
        // ★wrap 用官方语音 setter（setM_dtVoice: 等内部自动处理扩展），不手动挂扩展对象
        // ★无 UpdateVoiceMessage、无暂存消息、无 AddNewPart
        NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        if (selfUsr.length == 0) selfUsr = @"";

        id msg = nil;
        SEL init2Sel = NSSelectorFromString(@"initWithMsgType:nsFromUsr:");
        if ([wrapClass instancesRespondToSelector:init2Sel]) {
            msg = ((id (*)(id, SEL, long long, id))objc_msgSend)([wrapClass alloc], init2Sel, 34LL, selfUsr);
        }
        if (!msg && [wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
            msg = ((id (*)(id, SEL, long long))objc_msgSend)([wrapClass alloc], @selector(initWithMsgType:), 34LL);
        }
        if (!msg) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:13 userInfo:@{NSLocalizedDescriptionKey: @"消息对象创建失败"}];
            return NO;
        }
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiMessageType:), 34U);
        ((void (*)(id, SEL, id))objc_msgSend)(msg, @selector(setM_nsFromUsr:), selfUsr);
        ((void (*)(id, SEL, id))objc_msgSend)(msg, @selector(setM_nsToUsr:), chatName);
        // createTime：MMNewSessionMgr GenSendMsgTimeWithChatName（守卫，fallback time）
        unsigned int createTime = (unsigned int)[[NSDate date] timeIntervalSince1970];
        Class smCls = objc_getClass("MMNewSessionMgr");
        if (smCls) {
            id sm = WXGetService(smCls);
            SEL gswc = NSSelectorFromString(@"GenSendMsgTimeWithChatName:");
            if (sm && [sm respondsToSelector:gswc]) {
                createTime = ((unsigned int (*)(id, SEL, id))objc_msgSend)(sm, gswc, chatName);
            }
        }
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiCreateTime:), createTime);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiStatus:), 1U);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiDownloadStatus:), 9U);
        ((void (*)(id, SEL, BOOL))objc_msgSend)(msg, @selector(setM_bForward:), YES);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceTime:), (unsigned int)ms);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceFormat:), 4U);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceEndFlag:), 1U);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceForwardFlag:), 1U);
        SEL dtSel = NSSelectorFromString(@"setM_dtVoice:");
        if ([msg respondsToSelector:dtSel]) {
            ((void (*)(id, SEL, id))objc_msgSend)(msg, dtSel, wire);
            WPLog(@"Voice", @"[Send] setM_dtVoice: 官方setter已用 (%lu字节)", (unsigned long)wire.length);
        } else {
            BOOL extOK = MioAttachVoiceExtension(msg, wire, @"", ms, 1, 1);
            WPLog(@"Voice", @"[Send] wrap无setM_dtVoice: → 手动扩展挂载=%d", extOK);
        }
        [msg setValue:[NSString stringWithFormat:@"<msg><voicemsg voicelength=\"%llu\" voiceformat=\"4\" forwardflag=\"0\" /></msg>", (unsigned long long)ms]
               forKey:@"m_nsContent"];
        SEL cancelSel = NSSelectorFromString(@"setM_uiVoiceCancelFlag:");
        if ([msg respondsToSelector:cancelSel]) {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, cancelSel, 0U);
        }
        MioDumpSendAPIOnce(msgMgr);

        // service 实例：CMessageMgr + AudioSender（★上传触发在 AudioSender 类上，同为 service）
        Class audioSenderCls = objc_getClass("AudioSender");
        id audioSender = audioSenderCls ? WXGetService(audioSenderCls) : nil;
        SEL addLocal2Sel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:");
        SEL saveSel2 = NSSelectorFromString(@"SaveMesVoice:MsgWrap:");
        SEL rvmSel2 = NSSelectorFromString(@"ResendVoiceMsg:MsgWrap:");
        if (![msgMgr respondsToSelector:addLocal2Sel]) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:12 userInfo:@{NSLocalizedDescriptionKey: @"AddLocalMsg(2参) 不可用"}];
            return NO;
        }
        if (!audioSender || ![audioSender respondsToSelector:rvmSel2]) {
            WPLog(@"Voice", @"[Send] AudioSender 不可用 (cls=%@ inst=%@)——仍尝试发送",
                  audioSenderCls ? @"存在" : @"缺失", audioSender);
        }

        ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addLocal2Sel, chatName, msg);
        unsigned int lid = MioWrapLocalIDOf(msg);
        WPLog(@"Voice", @"[Send] AddLocalMsg(2参) 入库 localID=%u", lid);

        // 路径三级 fallback（照抄反编译：CUtility → getAudioFileName → getVoicePath）
        NSString *apath = nil;
        Class cuCls = objc_getClass("CUtility");
        SEL gpSel = NSSelectorFromString(@"GetPathOfMesAudio:LocalID:DocPath:");
        SEL gdSel = NSSelectorFromString(@"GetDocPath");
        if (cuCls && [cuCls respondsToSelector:gpSel] && [cuCls respondsToSelector:gdSel]) {
            id docPath = ((id (*)(id, SEL))objc_msgSend)(cuCls, gdSel);
            apath = ((id (*)(id, SEL, id, unsigned long, id))objc_msgSend)(cuCls, gpSel, chatName, (unsigned long)lid, docPath);
            WPLog(@"Voice", @"[Send] CUtility路径: %@", apath);
        }
        if (apath.length == 0 && [msgMgr respondsToSelector:@selector(getAudioFileName:LocalID:)]) {
            apath = ((id (*)(id, SEL, id, unsigned long))objc_msgSend)(msgMgr, @selector(getAudioFileName:LocalID:), chatName, (unsigned long)lid);
            WPLog(@"Voice", @"[Send] getAudioFileName路径: %@", apath);
        }
        if (apath.length == 0 && [msg respondsToSelector:@selector(getVoicePath)]) {
            apath = ((id (*)(id, SEL))objc_msgSend)(msg, @selector(getVoicePath));
            WPLog(@"Voice", @"[Send] getVoicePath路径: %@", apath);
        }
        if (apath.length == 0) {
            WPLog(@"Voice", @"[Send] 路径计算全部失败");
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:15 userInfo:@{NSLocalizedDescriptionKey: @"语音路径计算失败"}];
            return NO;
        }
        // 目录 + 写文件（照抄反编译：writeToFile → 文件存在检查，失败则整体失败）
        [[NSFileManager defaultManager] createDirectoryAtPath:[apath stringByDeletingLastPathComponent]
                                  withIntermediateDirectories:YES attributes:nil error:nil];
        BOOL wok = [wire writeToFile:apath atomically:YES];
        BOOL fexist = [[NSFileManager defaultManager] fileExistsAtPath:apath];
        WPLog(@"Voice", @"[Send] 写文件%@ 存在=%d: %@", wok ? @"成功" : @"失败", fexist, apath);
        if (!wok || !fexist) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:15 userInfo:@{NSLocalizedDescriptionKey: @"音频文件写入失败"}];
            return NO;
        }
        SEL vnSel = NSSelectorFromString(@"setM_nsVoicePath:");
        if ([msg respondsToSelector:vnSel]) {
            ((void (*)(id, SEL, id))objc_msgSend)(msg, vnSel, apath);
            WPLog(@"Voice", @"[Send] setM_nsVoicePath 已调");
        }
        if ([msgMgr respondsToSelector:saveSel2]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, saveSel2, chatName, msg);
            WPLog(@"Voice", @"[Send] SaveMesVoice 已调 (单次)");
        }
        if (audioSender && [audioSender respondsToSelector:rvmSel2]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(audioSender, rvmSel2, chatName, msg);
            WPLog(@"Voice", @"[Send] AudioSender ResendVoiceMsg 已调 (上传触发)");
        } else {
            WPLog(@"Voice", @"[Send] AudioSender ResendVoiceMsg 不可用——消息已入库待轮询");
        }
        WPLog(@"Voice", @"[Send] 已提交语音包条目: %@ -> %@ (%.1fKB)", relPath, chatName, wire.length / 1024.0);
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
static MioVoicePreviewFinishDelegate *_previewFinishDelegate = nil;

+ (BOOL)isPreviewSupportedRelPath:(NSString *)relPath {
    if (relPath.length == 0) return NO;
    NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
    if (MioIsSystemPlayableExt(abs.pathExtension)) return YES;
    // silk 家族（微信 wire 格式）：按扩展名或文件头识别，前提是 MJSilkCodec 可用
    if (!MioSilkCodecAvailable()) return NO;
    NSString *ext = abs.pathExtension.lowercaseString;
    if (ext.length > 0 && MioIsSilkFamilyExt(ext)) return YES;
    // 未知扩展名：嗅探文件头（0x02 wire 前缀 或 #!SILK 魔数）
    @try {
        NSData *head = [NSData dataWithContentsOfFile:abs options:NSDataReadingUncached error:nil];
        if (!head) return NO;
        const UInt8 *b = head.bytes;
        if (head.length >= 7 && memcmp(b, "#!SILK", 6) == 0) return YES;
        if (head.length >= 8 && b[0] == 0x02 && memcmp(b + 1, "#!SILK", 6) == 0) return YES;
    } @catch (NSException *e) {}
    return NO;
}

+ (BOOL)previewPlayAtRelPath:(NSString *)relPath {
    @try {
        [self previewStop];
        NSString *abs = [[self rootDirectory] stringByAppendingPathComponent:relPath];
        NSData *data = [NSData dataWithContentsOfFile:abs];
        if (data.length == 0) return NO;
        if (!MioIsSystemPlayableExt(abs.pathExtension)) {
            data = MioDecodeSilkToPlayable(data); // silk：借微信 MJSilkCodec 解码（WCRefine 方案）
            if (!data) {
                WPLog(@"Voice", @"[Preview] silk 解码失败: %@", relPath);
                return NO;
            }
        }
        // 固定扬声器外放（聊天页会话可能配置为听筒路由）
        [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryPlayback error:nil];
        [[AVAudioSession sharedInstance] setActive:YES error:nil];
        NSError *err = nil;
        AVAudioPlayer *player = [[AVAudioPlayer alloc] initWithData:data error:&err];
        if (!player) {
            WPLog(@"Voice", @"[Preview] 初始化失败: %@", err.localizedDescription);
            return NO;
        }
        if (!_previewFinishDelegate) _previewFinishDelegate = [[MioVoicePreviewFinishDelegate alloc] init];
        player.delegate = _previewFinishDelegate;
        _previewPlayer = player;
        [player prepareToPlay];
        [player play];
        WPLog(@"Voice", @"[Preview] 播放: %@ (%.1fKB, %.1fs)", relPath, data.length / 1024.0, player.duration);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[Preview] 播放异常: %@", e.reason);
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
