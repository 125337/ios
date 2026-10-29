@interface MMImgFullScreenVideoReporter_Message : MMImgFullScreenVideoReporter
{
    WCC2CVideoPlayerReporter * _reporter; // +0x8
    MMScrollViewZoomReporter * _zoomReporter; // +0x10
    MMScrollViewZoomReporter * _thumbZoomReporter; // +0x18
    MPLandingPageReportLogic * _brandReportLogic; // +0x20
}
- (id)reporter;
- (id)zoomReporter;
- (id)thumbZoomReporter;
- (id)brandReportLogic;
- (unsigned int)getScene;
- (void)setReporter:(id)arg1;
- (void)setZoomReporter:(id)arg1;
- (void)setThumbZoomReporter:(id)arg1;
- (void)setBrandReportLogic:(id)arg1;
- (void).cxx_destruct;
@end
