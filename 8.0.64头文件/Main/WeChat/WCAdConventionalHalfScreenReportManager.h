@interface WCAdConventionalHalfScreenReportManager : NSObject
{
    int _scene; // +0x8
    WCStatTimerHelper * _halfScreenTimerHelper; // +0x10
    WCAdConventionalHalfScreenReportModel * _reportModel; // +0x18
    WCAdvertiseInfo * _adData; // +0x20
    NSString * _snsId; // +0x28
    unsigned long long _contentOption; // +0x30
}
- (id)initWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 contentOption:(unsigned long long)arg4;
- (id)halfScreenTimerHelper;
- (id)reportModel;
- (void)doHalfScreenReport;
- (void)reportHalfScreenExposureStart;
- (void)reportHalfScreenExposureEnd;
- (void)reportHalfScreenClickToFullScreen;
- (void)reportHalfScreenDragToFullScreen;
- (void)reportHalfScreenPinToTop;
- (void)reportHalfScreenVideoDuration:(unsigned long long)arg1;
- (void)reportHalfScreenVideoPlayTimeInterval:(unsigned long long)arg1;
- (void)reportHalfScreenVideoIncreasePlayCount;
- (void)reportHalfScreenVideoIncreasePlayCompletedCount;
- (void)reportHalfScreenGridIncreaseExposureCountWithIndex:(long long)arg1;
- (void)setHalfScreenTimerHelper:(id)arg1;
- (void)setReportModel:(id)arg1;
- (id)adData;
- (void)setAdData:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)contentOption;
- (void)setContentOption:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
