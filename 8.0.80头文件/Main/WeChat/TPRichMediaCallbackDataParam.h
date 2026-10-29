@interface TPRichMediaCallbackDataParam : NSObject
{
    long long _seq; // +0x8
    long long _startTimeMs; // +0x10
}
- (long long)seq;
- (void)setSeq:(long long)arg1;
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
@end
