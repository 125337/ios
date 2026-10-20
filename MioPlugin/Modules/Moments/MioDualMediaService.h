#import <Foundation/Foundation.h>

// 双列朋友圈媒体层（零破图架构）：
// 本地媒体路径 ↔ 稳定 key 注册表 + 帖子 itemID 反查。
//   - key = 路径 MD5：跨启动同路径同 key，永不撞车
//   - 双层存储：内存 dict（会话内快）+ NSUserDefaults 持久 dict（跨启动）——
//     快照里的 mioimg://local/<key> 冷启动可解析
//   - 条目 {p: 本地路径, iid: 帖子 itemID}：文件被清/未下载时按 iid 从数据源
//     找回 WCDataItem，交 WCMediaDownloader（微信原生管线：CDN+解密+落盘）拉图
//   - 自建 CDN 下载已删除：SNS 缩略图是加密存储，直连下载只能拿到密文
// 线程模型：注册/解析可能来自 scheme handler 后台队列，统一 @synchronized(self)。
@interface MioDualMediaService : NSObject
+ (instancetype)shared;
// 注册本地媒体路径（就绪门槛 + 异步补图，对齐 WCM 模型）：
//   稳定副本已在 → cb(key,YES) 同步返回（本轮就带图）
//   源文件 <1KB（占位/下载中）→ 只登记（CDN-only），cb(key,NO)——卡片先出文本
//   源文件有效 → 后台队列拷贝进自己的稳定目录（主线程零 IO），完成 cb(key,YES)
//   + 唤醒 notifyDataChanged → diff upsert 带图版本无缝补图
// 返回稳定 key（mioimg://local/<key>）
- (NSString *)registerLocalPath:(NSString *)path itemID:(NSString *)itemID
                       cdnURL:(NSString *)cdn
                     completion:(void (^)(NSString *key, BOOL ready))cb;
// key → 自己目录的稳定副本路径（免疫微信缓存清理；resolveKey 稳定副本优先）
- (NSString *)stablePathForKey:(NSString *)key;
// 解析 key → 可用本地路径（内存→持久→文件校验→nil）
- (NSString *)resolveKey:(NSString *)key;
// key 对应的帖子 itemID（数据项找回用）
- (NSString *)itemIDForKey:(NSString *)key;
// key 对应的注册路径（WCMediaDownloader 目标路径匹配用）
- (NSString *)registeredPathForKey:(NSString *)key;
// 下载去重：YES=首次（调用方应触发 WCMediaDownloader），NO=已有进行中的下载
- (BOOL)beginDownloadForKey:(NSString *)key;
- (void)endDownloadForKey:(NSString *)key;
// 渲染层备图（WCMFeedController exportImage 同构）：key 对应文件缺失时主线程
// 触发 WCMediaDownloader（微信管线 CDN+解密+落盘），完成后经 Bridge mediaReadyForKey
// 精准刷新对应 <img>。含下载去重 + 会话内重试上限 3 次 + 60s 挂起超时重置
- (void)ensureMediaForKey:(NSString *)key;
// 数据项 → 目标路径所属的 WCMediaItem（按四路路径 selector 匹配）
- (id)mediaItemForDataItem:(id)di path:(NSString *)targetPath;
// 只保留 liveKeys（快照引用的 key），修剪持久表
- (void)pruneExcept:(NSSet<NSString *> *)liveKeys;
@end
