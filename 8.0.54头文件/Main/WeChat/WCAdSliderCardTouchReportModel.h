@interface WCAdSliderCardTouchReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _touchCount; // +0x8
    int _hasParticleAnim; // +0xc
    unsigned long long _touchDuraion; // +0x10
}
- (unsigned long long)touchDuraion;
- (void)setTouchDuraion:(unsigned long long)arg1;
- (unsigned int)touchCount;
- (void)setTouchCount:(unsigned int)arg1;
- (int)hasParticleAnim;
- (void)setHasParticleAnim:(int)arg1;
@end

