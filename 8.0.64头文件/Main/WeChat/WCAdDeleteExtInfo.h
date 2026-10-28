@interface WCAdDeleteExtInfo : NSObject
{
    int _reportType; // +0x8
    long long _delAdType; // +0x10
}
- (id)initWithDelAdType:(long long)arg1 reportType:(int)arg2;
- (long long)delAdType;
- (void)setDelAdType:(long long)arg1;
- (int)reportType;
- (void)setReportType:(int)arg1;
@end
