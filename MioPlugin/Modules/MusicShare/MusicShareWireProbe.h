#import <Foundation/Foundation.h>

// 临时 wire 字段探针（定位接收端 type=76 降级纯文本根因后删除）：
// 并排抓 AddMsg/AddLocalMsg 入口上 wrap 的发送字段，与黄白实机发送对比
@interface MusicShareWireProbe : NSObject
+ (void)install;
@end
