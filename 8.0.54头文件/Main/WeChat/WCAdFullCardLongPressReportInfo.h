@interface WCAdFullCardLongPressReportInfo : NSObject
{
    unsigned long long _pressStartTime; // +0x8
    unsigned long long _pressEndTime; // +0x10
    unsigned long long _result; // +0x18
}
- (void)resetReportInfo;
- (unsigned long long)pressStartTime;
- (void)setPressStartTime:(unsigned long long)arg1;
- (unsigned long long)pressEndTime;
- (void)setPressEndTime:(unsigned long long)arg1;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
@end

