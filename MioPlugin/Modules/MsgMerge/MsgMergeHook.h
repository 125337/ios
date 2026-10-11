//
//  MsgMergeHook.h — 消息合并本体
//  连续同一发送者的消息合并成组：组内非首条隐藏头像与群昵称
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MsgMergeHook : NSObject
+ (void)install;
@end

NS_ASSUME_NONNULL_END
