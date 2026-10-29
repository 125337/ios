//
//  MioEarnStats.h
//  MioPlugin
//
//  收益持久统计中心（自动抢红包 + 自动收款共用）。
//  只存两个累计总金额（单位：分），NSUserDefaults 直存；
//  不走 ConfigModule——这是统计数据不是配置，避免混入配置备份/恢复。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MioEarnStats : NSObject

/// 累计抢红包金额（分）
+ (long long)redPacketFen;

/// 累计自动收款金额（分）
+ (long long)transferFen;

/// 记一笔抢红包金额（分，非正数忽略）
+ (void)addRedPacketFen:(long long)fen;

/// 记一笔自动收款金额（分，非正数忽略）
+ (void)addTransferFen:(long long)fen;

/// 清零全部统计
+ (void)resetAll;

@end

NS_ASSUME_NONNULL_END
