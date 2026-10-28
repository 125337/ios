@interface TPPlayerSetPlaySpeedEventInfo : TPPlayerEventInfo
{
    double _playSpeedRatio; // +0x20
}
- (id)init;
- (double)playSpeedRatio;
- (void)setPlaySpeedRatio:(double)arg1;
@end
