@interface TPRichMediaFeatureContent : NSObject
{
    long long _startTimeMs; // +0x8
    long long _endTimeMs; // +0x10
    NSString * _content; // +0x18
}
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
- (long long)endTimeMs;
- (void)setEndTimeMs:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
