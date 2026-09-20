#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 语音包条目（目录或音频文件）
@interface VoicePackItem : NSObject
@property (nonatomic, copy) NSString *name;               // 文件/目录名
@property (nonatomic, copy) NSString *relPath;            // 相对语音包根目录（无开头 /）
@property (nonatomic, copy) NSString *absPath;
@property (nonatomic, assign) BOOL isDirectory;
@property (nonatomic, assign) unsigned long long fileSize;
@property (nonatomic, strong, nullable) NSDate *modDate;
@end

/// 语音包存储门面：目录管理 / 收藏 / 最近 / 时长缓存 / 发送 / 预览
@interface VoicePackStore : NSObject

#pragma mark - 目录
/// 语音包根目录：Documents/Mio助手/语音包
+ (NSString *)rootDirectory;
/// 聊天纳入目录：Documents/Mio助手/语音包/聊天纳入
+ (NSString *)chatIncludeDirectory;
+ (void)ensureRootDirectoryExists;
+ (nullable NSString *)relPathForAbsPath:(NSString *)absPath;

#pragma mark - 条目操作
/// 列出目录内容（目录在前、收藏在前、按名称排序）
+ (NSArray<VoicePackItem *> *)listItemsInRelPath:(nullable NSString *)relPath;
+ (BOOL)createFolderNamed:(NSString *)name inRelPath:(nullable NSString *)relPath error:(NSError **)error;
+ (BOOL)renameItemAtRelPath:(NSString *)relPath toName:(NSString *)newName error:(NSError **)error;
+ (BOOL)deleteItemAtRelPath:(NSString *)relPath error:(NSError **)error;
/// 从文件 App 导入（拷贝）到目标目录；返回新条目的 relPath
+ (nullable NSString *)importFileFromURL:(NSURL *)url toRelPath:(nullable NSString *)relPath error:(NSError **)error;
/// 按名称排序的条目排序比较
+ (NSComparator)itemComparator;

#pragma mark - 时长缓存（毫秒）
/// 记录时长（自动纳入时从消息 XML 解析；导入时用 AVURLAsset 探测）
+ (void)setDurationMs:(long long)ms forRelPath:(NSString *)relPath;
/// 读取时长；无缓存且是系统可识别音频时自动探测并缓存；无法确定返回 0
+ (long long)durationMsForRelPath:(NSString *)relPath;

#pragma mark - 收藏 / 最近
+ (NSArray<NSString *> *)favoriteRelPaths;
+ (BOOL)isFavoriteRelPath:(NSString *)relPath;
+ (void)toggleFavoriteForRelPath:(NSString *)relPath;
+ (NSArray<NSString *> *)recentRelPaths;
+ (void)addRecentRelPath:(NSString *)relPath;
+ (nullable VoicePackItem *)itemForRelPath:(NSString *)relPath;

#pragma mark - 发送
/// 把语音包条目作为微信语音消息（type=34，byteBuffer=原始 silk 数据）发送到会话
+ (BOOL)sendVoiceAtRelPath:(NSString *)relPath
                    toChat:(NSString *)chatName
                     error:(NSError **)error;
/// 解析 silk 文件真实时长（毫秒），解析失败返回 0
+ (long long)silkDurationMsForFile:(NSString *)path;
/// 从 CMessageWrap 取语音数据 buffer（自动适配 m_nsImgBuf/m_byteBuffer 等版本差异）
+ (nullable NSData *)voiceDataFromWrap:(id)wrap;

#pragma mark - 预览解码（系统格式 + silk：借微信自带 MJSilkCodec 解码，WCRefine 方案）
// WCR 架构：播放器与播放状态（previewPlayer/previewingPath）由页面 VC 自持，Store 只负责解码
/// 取可播放音频数据（系统格式直读；silk 解码并带 temp 缓存）。耗时操作，必须在后台队列调用
+ (nullable NSData *)previewPlayableDataForRelPath:(NSString *)relPath;
+ (BOOL)isPreviewSupportedRelPath:(NSString *)relPath;

@end

NS_ASSUME_NONNULL_END
