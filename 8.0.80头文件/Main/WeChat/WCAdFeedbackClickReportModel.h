@interface WCAdFeedbackClickReportModel : WCAdChannelReportExtendInfoModel
{
    int _buttonType; // +0x8
    double _adOffSetTop; // +0x10
    double _clickPosX; // +0x18
    double _clickPosY; // +0x20
    unsigned long long _videoPlayTime; // +0x28
}
- (double)adOffSetTop;
- (void)setAdOffSetTop:(double)arg1;
- (double)clickPosX;
- (void)setClickPosX:(double)arg1;
- (double)clickPosY;
- (void)setClickPosY:(double)arg1;
- (unsigned long long)videoPlayTime;
- (void)setVideoPlayTime:(unsigned long long)arg1;
- (int)buttonType;
- (void)setButtonType:(int)arg1;
@end
