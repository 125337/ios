#import <Foundation/Foundation.h>

// 双列朋友圈媒体层（B1-B5 根治，重构方案 3.2）：
// 本地媒体路径 ↔ 稳定 key 注册表。
//   - key = 路径 MD5：跨启动同路径同 key，永不撞车（旧 f1/f2 计数器重启即重数）
//   - 双层存储：内存 dict（会话内快）+ NSUserDefaults 持久 dict（跨启动）——
//     快照里的 mioimg://local/<key> 冷启动可解析，根治快照破图
//   - resolve 每次文件校验：微信清缓存后返回 nil，上层回落 CDN
//   - pruneExcept：快照保存时修剪持久表，NSUserDefaults 不膨胀
// 线程模型：注册/解析可能来自 scheme handler 后台队列，统一 @synchronized(self)。
@interface MioDualMediaService : NSObject
+ (instancetype)shared;
// 注册本地媒体路径（附带 CDN 缩略图 URL 作为文件失效后的回落源），返回稳定 key
- (NSString *)registerLocalPath:(NSString *)path cdnURL:(NSString *)cdnURL;
// 解析 key → 可用本地路径（内存→持久→文件校验→nil）
- (NSString *)resolveKey:(NSString *)key;
// key 对应的 CDN 回落 URL（无则 nil）
- (NSString *)cdnFallbackForKey:(NSString *)key;
// 只保留 liveKeys（快照引用的 key），修剪持久表
- (void)pruneExcept:(NSSet<NSString *> *)liveKeys;
@end
