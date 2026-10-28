@interface MMImagePreviewInfo : NSObject
{
    BOOL _onlyShowSaveItemInProcess; // +0x8
    BOOL _preLoading; // +0x9
    UIImage * _originImage; // +0x10
    NSArray * _supportedItemTypes; // +0x18
    NSString * _originTitle; // +0x20
    NSString * _processTitle; // +0x28
    id /* block */ _processHandler; // +0x30
    id /* block */ _onWillForwardMsg; // +0x38
    id /* block */ _preloadCompleteBlock; // +0x40
    UIImage * _processImage; // +0x48
    NSString * _processErrMsg; // +0x50
}
- (void)dealloc;
- (void)preloadIfNeed;
- (void)getProcessImage:(id /* block */)arg1;
- (void)_safeCallProcessHandler:(id /* block */)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)supportedItemTypes;
- (void)setSupportedItemTypes:(id)arg1;
- (BOOL)onlyShowSaveItemInProcess;
- (void)setOnlyShowSaveItemInProcess:(BOOL)arg1;
- (id)originTitle;
- (void)setOriginTitle:(id)arg1;
- (id)processTitle;
- (void)setProcessTitle:(id)arg1;
- (id /* block */)processHandler;
- (void)setProcessHandler:(id /* block */)arg1;
- (id /* block */)onWillForwardMsg;
- (void)setOnWillForwardMsg:(id /* block */)arg1;
- (BOOL)preLoading;
- (void)setPreLoading:(BOOL)arg1;
- (id /* block */)preloadCompleteBlock;
- (void)setPreloadCompleteBlock:(id /* block */)arg1;
- (id)processImage;
- (void)setProcessImage:(id)arg1;
- (id)processErrMsg;
- (void)setProcessErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
