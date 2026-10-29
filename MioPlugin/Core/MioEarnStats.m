//
//  MioEarnStats.m
//  MioPlugin
//

#import "MioEarnStats.h"
#import "LogManager.h"

static NSString * const kRedPacketKey = @"MioEarnStats_RedPacketFen";
static NSString * const kTransferKey  = @"MioEarnStats_TransferFen";

@implementation MioEarnStats

+ (long long)readFenForKey:(NSString *)key {
    NSNumber *n = [[NSUserDefaults standardUserDefaults] objectForKey:key];
    return n ? [n longLongValue] : 0;
}

+ (void)writeFen:(long long)fen forKey:(NSString *)key label:(NSString *)label {
    [[NSUserDefaults standardUserDefaults] setObject:@(fen) forKey:key];
    [[NSUserDefaults standardUserDefaults] synchronize];
    WPLog(@"EarnStats", @"[%@] 累计: %.2f元", label, fen / 100.0);
}

+ (long long)redPacketFen {
    return [self readFenForKey:kRedPacketKey];
}

+ (long long)transferFen {
    return [self readFenForKey:kTransferKey];
}

+ (void)addRedPacketFen:(long long)fen {
    if (fen <= 0) return;
    [self writeFen:[self redPacketFen] + fen forKey:kRedPacketKey label:@"抢红包"];
}

+ (void)addTransferFen:(long long)fen {
    if (fen <= 0) return;
    [self writeFen:[self transferFen] + fen forKey:kTransferKey label:@"自动收款"];
}

+ (void)resetAll {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    [d removeObjectForKey:kRedPacketKey];
    [d removeObjectForKey:kTransferKey];
    [d synchronize];
    WPLog(@"EarnStats", @"[RESET] 统计已清零");
}

@end
