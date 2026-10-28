@interface TXCDashboardInfo : NSObject <NSCopying>
{
    NSString * _status; // +0x8
    NSString * _log; // +0x10
}
- (void)setLog:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)log;
- (void).cxx_destruct;
@end
