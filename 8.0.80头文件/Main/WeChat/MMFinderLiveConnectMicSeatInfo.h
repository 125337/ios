@interface MMFinderLiveConnectMicSeatInfo : MMFinderLiveConnectMicSeatBaseInfo
{
    CGRect _normalizedSeatFrame; // +0x20
}
- (id)initWithMicIndex:(unsigned long long)arg1;
- (CGRect)normalizedSeatFrame;
- (void)setNormalizedSeatFrame:(CGRect)arg1;
@end
