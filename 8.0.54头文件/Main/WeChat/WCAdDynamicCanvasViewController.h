@interface WCAdDynamicCanvasViewController : MMLiteAppViewController <WCCanvasDynamicDataLoaderDelegate, IAdDynamicCanvasExt>
{
    BOOL _halfScreenReachedTopFlag; // +0x68
    id <WCAdDynamicCanvasViewControllerDelegate> _delegate; // +0x70
    WCAdDynamicCanvasPageInfo * _pageInfo; // +0x78
    WCCanvasDynamicDataLoader * _dynamicLoader; // +0x80
    WCStatTimerHelper * _exposureTimeHelper; // +0x88
    unsigned long long _totalExposureTime; // +0x90
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)jumpToH5InHalfScreen:(id)arg1 extraInfo:(id)arg2;
- (void)jumpToWeAppInHalfScreen:(id)arg1 sceneNote:(id)arg2;
- (void)jumpToCanvasInHalfScreen:(id)arg1 uxInfo:(id)arg2 canvasDynamicInfo:(id)arg3 noStore:(BOOL)arg4;
- (void)dealloc;
- (void)tryToUpdateUxInfo;
- (void)tryToUpdateCanvasAuth;
- (BOOL)checkNeedUpdateUxInfo:(long long)arg1;
- (id)dynamicLoader;
- (id)exposureTimeHelper;
- (BOOL)isCanvasInHalfScreenMode;
- (void)onUpdateSharedUxinfo:(id)arg1;
- (void)onUpdateCanvasStateResult:(BOOL)arg1 cleanLocalCache:(unsigned int)arg2;
- (void)setPageInfo:(id)arg1;
- (void)setHalfScreenReachedTopFlag:(BOOL)arg1;
- (void)publishEventToPage:(id)arg1 event:(id)arg2 params:(id)arg3;
- (void)publishEvent:(id)arg1 params:(id)arg2;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardDidChangeFrame:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageInfo;
- (BOOL)halfScreenReachedTopFlag;
- (void)setDynamicLoader:(id)arg1;
- (void)setExposureTimeHelper:(id)arg1;
- (unsigned long long)totalExposureTime;
- (void)setTotalExposureTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

