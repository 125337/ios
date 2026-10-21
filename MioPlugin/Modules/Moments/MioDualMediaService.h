#import <Foundation/Foundation.h>

// 双列朋友圈媒体层（对齐 WCM 导出管线，反编译实证同构）：
//   - key = SHA256(mediaKey) 64 位 hex（WCM _Digest 同款；mediaKey 优先 CDN URL——
//     跨微信缓存目录稳定，回落本地路径）。稳定副本 = Caches/mio_dual_media/<key>.<ext>，
//     扩展名由导出块魔数嗅探决定（jpg/png 原字节直存，异格式 JPEG 0.999）
//   - 双队列双集合：thumbnail（previewQueue 位）/ original（mediaQueue 位）独立去重
//     （WCM @0x32700 同款：pendingExports / pendingOriginalExports）
//   - 每 key 就绪代际（renderKeys 语义）：未就绪=0，每次就绪迁移 +1——Store 行缓存
//     据此检测补图行重映射（导出完成 → notifyDataChanged → rebuild 强制重映射）
//   - 条目 {p, iid, cdn}：文件被清/未下载时按 iid 从数据项找回锚点驱动重导
//     （微信后补下载落地 → resolveKey 补导）；副本与源都缺 → 显示层 JS imgCdn
//     兜底（行 cdn 字段直连 CDN URL，WCM 同构，不自建 CDN 直连下载）
//   - mioimg://<token>/<key>：token = SHA256(账号标识)（WCM accountToken host
//     校验同款，防跨账号串图），handler 三层校验 = host + 字符白名单 + 禁 _ 前缀
// 线程模型：注册/解析可能来自 scheme handler 后台队列，统一 @synchronized(self)。
@interface MioDualMediaService : NSObject
+ (instancetype)shared;
// mioimg URL 的 token 段（host 校验用，启动算一次）
+ (NSString *)mediaToken;
// 就绪代际（bare digest 或完整文件名 key 均可，内部归一）：0=未就绪
- (NSUInteger)readyGenerationForKey:(NSString *)key;
// 注册本地媒体路径（缩略图通道，对齐 WCM exportImage quality==1 / previewQueue）：
//   稳定副本已在 → cb(url, YES) 同步返回（本轮就带图）
//   源文件 <1KB（占位/下载中）→ 只登记，cb(nil, NO)——卡片先出文本
//   源文件有效 → 缩略图队列导出（魔数嗅探→直存/转码，主线程零 IO），完成 cb(url, YES)
//   + notifyDataChanged → diff upsert 带图版本无缝补图
// 返回 bare digest（稳定标识，未就绪也有值；URL 要等扩展名嗅探后才有）
- (NSString *)registerLocalPath:(NSString *)path itemID:(NSString *)itemID
                         cdnURL:(NSString *)cdn
                     completion:(void (^)(NSString *url, BOOL ready))cb;
// 原图通道（WCM galleryRawPath:quality: 同构）：独立 key = SHA256(mediaKey@qN)，
// original 队列导出，size+mtime 签名去重（签名变了才重导）
- (void)exportOriginalPath:(NSString *)path itemID:(NSString *)itemID
                  cdnURL:(NSString *)cdn quality:(NSInteger)quality;
// 原图路径解析（WCM galleryRawPath:quality: 同构 duck-typing）：quality 2/3/4 →
// pathForData/pathForHdData/pathForUhdData，视频帖 → pathForSightData；
// 解析出路径后交 exportOriginalPath: 导出（大图浏览器/查看原图入口用）
- (NSString *)originalPathForDataItem:(id)di quality:(NSInteger)quality;
// key（完整文件名）→ 自己目录的稳定副本路径（免疫微信缓存清理）
- (NSString *)stablePathForKey:(NSString *)key;
// 解析 key（完整文件名）→ 可用本地路径（稳定副本→原路径回落→nil）
- (NSString *)resolveKey:(NSString *)key;
// key（完整文件名）对应的帖子 itemID（数据项找回用）
- (NSString *)itemIDForKey:(NSString *)key;
// key（完整文件名）对应的注册路径
- (NSString *)registeredPathForKey:(NSString *)key;
// 渲染层备图：副本就绪→内存代际快路径直返；副本缺失而源文件已落地(>1KB)→补导；
// 源也没有→CDN 兜底下载（WCM YB 等价物：拉行 cdn 字段(dataUrl.url)落副本再导）
- (void)ensureMediaForKey:(NSString *)key;
- (void)ensureMediaForKey:(NSString *)key cdn:(NSString *)cdn;
// 副本文件被系统清理（Caches 回收）后的自愈钩子：gen 归零 + 扩展名清除，
// 下一轮注册重新导出（副本缺失走 didFail，onerror→imgCdn 兜底 + assetMiss 驱动重导）
- (void)noteExportLost:(NSString *)key;
// 行重建回填 iid 锚点（老行自愈）
- (void)rebindItemID:(NSString *)iid forKey:(NSString *)key;
// 只保留 liveKeys（快照引用的完整文件名 key + 待图行 mediaKey），修剪持久表
- (void)pruneExcept:(NSSet<NSString *> *)liveKeys;
@end
