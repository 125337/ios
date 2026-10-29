@interface LiveKTVScorerInitParam : NSObject
{
    int _channelCnt; // +0x8
    int _sampleRate; // +0xc
}
+ (id)defaultParam;
- (BOOL)isEqual:(id)arg1;
- (int)channelCnt;
- (void)setChannelCnt:(int)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
@end

