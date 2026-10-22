#import <Foundation/Foundation.h>

// 临时探针：hook AddMsg:MsgWrap:（收发总管道），实证黄白「音乐语音消息」的
// 元数据字段归属（musicInfo/mvSingerName 等微信原生类属性 + content 原文）。
// 实证完成后移除（黄白与 Mio 同进程注入，黄白发歌必经此管道）。
@interface MusicShareProbe : NSObject
@end
