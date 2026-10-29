@interface WCAdConventionalHalfScreenReportModel : WCAdChannelReportExtendInfoModel
{
    int _pinToTop; // +0x8
    unsigned long long _stayTime; // +0x10
    unsigned long long _clickToFullScreenCount; // +0x18
    unsigned long long _dragToFullScreenCount; // +0x20
    WCAdConventionalHalfScreenReportVideoInfo * _videoInfo; // +0x28
    NSMutableArray * _gridItems; // +0x30
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)videoInfo;
- (id)gridItems;
- (void)increaseGridExposureCountWithIndex:(long long)arg1;
- (unsigned long long)stayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (unsigned long long)clickToFullScreenCount;
- (void)setClickToFullScreenCount:(unsigned long long)arg1;
- (unsigned long long)dragToFullScreenCount;
- (void)setDragToFullScreenCount:(unsigned long long)arg1;
- (int)pinToTop;
- (void)setPinToTop:(int)arg1;
- (void)setVideoInfo:(id)arg1;
- (void)setGridItems:(id)arg1;
- (void).cxx_destruct;
@end

