@interface WCFinderPremovieAdLiteAppHelper : WCFinderPremovieAdBaseHelper
{
    BOOL _isReadyToShow; // +0x8
    MMLiteAppView * _liteAppView; // +0x10
}
- (void)updateWithMultiMediaCell:(id)arg1;
- (id)genPremovieView:(id)arg1;
- (void)showPremovieAd;
- (void)closePremovieAd;
- (void)clearCache;
- (void)preDownloadLiteApp;
- (void)createPremovieStore;
- (void)preloadVideo;
- (void)notifyLiteAppViewExpose:(BOOL)arg1;
- (void)notifyLiteAppViewToPlay:(id)arg1;
- (CGRect)adLabelFrameInExtraInfo:(id)arg1;
- (BOOL)isReadyToShow;
- (void)setIsReadyToShow:(BOOL)arg1;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (void).cxx_destruct;
@end

