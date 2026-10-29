@interface MMImagePreviewInfo : NSObject
{
    BOOL _onlyShowSaveItemInProcess; // +0x8
    BOOL _replaceEditWithCropItemInProcess; // +0x9
    BOOL _preLoading; // +0xa
    unsigned int _scene; // +0xc
    UIImage * _originImage; // +0x10
    NSArray * _supportedItemTypes; // +0x18
    NSString * _originTitle; // +0x20
    NSString * _processTitle; // +0x28
    NSString * _gameAppId; // +0x30
    NSDictionary * _gameCenterExtraData; // +0x38
    id /* block */ _processHandler; // +0x40
    id /* block */ _onWillForwardMsg; // +0x48
    id /* block */ _onDidForwardMsg; // +0x50
    id /* block */ _onWillSearch; // +0x58
    id /* block */ _preloadCompleteBlock; // +0x60
    UIImage * _processImage; // +0x68
    NSString * _processErrMsg; // +0x70
}
- (void)dealloc;
- (void)preloadIfNeed;
- (void)getProcessImage:(id /* block */)arg1;
- (void)_safeCallProcessHandler:(id /* block */)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)supportedItemTypes;
- (void)setSupportedItemTypes:(id)arg1;
- (BOOL)onlyShowSaveItemInProcess;
- (void)setOnlyShowSaveItemInProcess:(BOOL)arg1;
- (BOOL)replaceEditWithCropItemInProcess;
- (void)setReplaceEditWithCropItemInProcess:(BOOL)arg1;
- (id)originTitle;
- (void)setOriginTitle:(id)arg1;
- (id)processTitle;
- (void)setProcessTitle:(id)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (id)gameCenterExtraData;
- (void)setGameCenterExtraData:(id)arg1;
- (id /* block */)processHandler;
- (void)setProcessHandler:(id /* block */)arg1;
- (id /* block */)onWillForwardMsg;
- (void)setOnWillForwardMsg:(id /* block */)arg1;
- (id /* block */)onDidForwardMsg;
- (void)setOnDidForwardMsg:(id /* block */)arg1;
- (id /* block */)onWillSearch;
- (void)setOnWillSearch:(id /* block */)arg1;
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
