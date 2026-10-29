@interface WCAdFullCardDragImageReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _dragCount; // +0x8
    unsigned int _jumpCount; // +0xc
    unsigned long long _dragDuration; // +0x10
    unsigned long long _firstPlaybackTime; // +0x18
}
- (unsigned long long)dragDuration;
- (void)setDragDuration:(unsigned long long)arg1;
- (unsigned int)dragCount;
- (void)setDragCount:(unsigned int)arg1;
- (unsigned int)jumpCount;
- (void)setJumpCount:(unsigned int)arg1;
- (unsigned long long)firstPlaybackTime;
- (void)setFirstPlaybackTime:(unsigned long long)arg1;
@end

