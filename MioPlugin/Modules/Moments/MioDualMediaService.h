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
// 注册本地媒体路径（附带所属帖子 itemID 供找回数据项），返回稳定 key
- (NSString *)registerLocalPath:(NSString *)path itemID:(NSString *)itemID;
// 解析 key → 可用本地路径（内存→持久→文件校验→nil）
- (NSString *)resolveKey:(NSString *)key;
// key 对应的帖子 itemID（数据项找回用）
- (NSString *)itemIDForKey:(NSString *)key;
// key 对应的注册路径（WCMediaDownloader 目标路径匹配用）
- (NSString *)registeredPathForKey:(NSString *)key;
// 下载去重：YES=首次（调用方应触发 WCMediaDownloader），NO=已有进行中的下载
- (BOOL)beginDownloadForKey:(NSString *)key;
- (void)endDownloadForKey:(NSString *)key;
// 只保留 liveKeys（快照引用的 key），修剪持久表
- (void)pruneExcept:(NSSet<NSString *> *)liveKeys;
@end
