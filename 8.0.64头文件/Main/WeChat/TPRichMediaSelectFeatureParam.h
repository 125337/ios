@interface TPRichMediaSelectFeatureParam : NSObject
{
    long long _featureIndex; // +0x8
    long long _seq; // +0x10
    long long _startTimeMs; // +0x18
}
- (long long)featureIndex;
- (void)setFeatureIndex:(long long)arg1;
- (long long)seq;
- (void)setSeq:(long long)arg1;
- (long long)startTimeMs;
- (void)setStartTimeMs:(long long)arg1;
@end
