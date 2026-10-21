#import <Foundation/Foundation.h>

// 媒体链路追踪（诊断悬浮窗数据源）：管线各埋点写入环形缓冲，
// HUD 长按切换显示。每事件 = {时间, 阶段, key, 详情}，线程安全。
//
// 阶段（对齐 WCM 全链路 ①-⑤ 的观测点）：
//   register   注册（gate=ready/place/gate/pending——四态见 MioDualMediaService）
//   export     导出完成（direct=原字节直存 / trans=转码 / FAILED）
//   gen+       就绪代际迁移（renderKeys 语义：文本卡→带图卡的信号）
//   serve      scheme 响应（hit=displayCache / decode=全管线 / PLACE=占位 / LOST=副本丢失）
//   dl         WCMediaDownloader 下载（start/finish/exhausted/noitem）
//   orig       原图通道（签名去重/导出）
//   remap      补图重映射（Store 检测 gen 变化强制重建该行）
// 预期流（零破图）：register(gate) → export(direct/trans) → gen+ → serve(hit/decode)
//   异常流：register(gate) → … → dl(start/finish) → export → gen+ → remap → serve
@interface MioDualMediaTrace : NSObject
// 写一条（任意线程；key 传完整文件名或 bare digest 均可，显示时截短）
+ (void)log:(NSString *)stage key:(NSString *)key detail:(NSString *)detail;
// 最近 limit 条的文本（HUD 渲染用，最新的在最后）
+ (NSString *)recentText:(NSUInteger)limit;
// 汇总头部：会话计数（register/export/serve/命中/占位/下载）
+ (NSString *)summaryText;
+ (void)clear;
@end
