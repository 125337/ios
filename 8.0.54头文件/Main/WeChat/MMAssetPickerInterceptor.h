@interface MMAssetPickerInterceptor : NSObject
{
    BOOL _shouldInterrupt; // +0x8
    BOOL _shouldKeepLoading; // +0x9
    BOOL _shouldReactivePreviewController; // +0xa
    MMAssetPickerControllerState * _updateState; // +0x10
    NSMutableDictionary * _assetInjectorMap; // +0x18
}
+ (id)_safeKeyForAsset:(id)arg1;
- (id)createAndBindAssetInjectorForAsset:(id)arg1;
- (void)bindInjector:(id)arg1 withAsset:(id)arg2;
- (id)unbindInjectorByAsset:(id)arg1;
- (id)findInjectorByAsset:(id)arg1;
- (id)_findInjectorByAsset:(id)arg1 andRemove:(BOOL)arg2;
- (id)updateState;
- (void)setUpdateState:(id)arg1;
- (BOOL)shouldInterrupt;
- (void)setShouldInterrupt:(BOOL)arg1;
- (BOOL)shouldKeepLoading;
- (void)setShouldKeepLoading:(BOOL)arg1;
- (BOOL)shouldReactivePreviewController;
- (void)setShouldReactivePreviewController:(BOOL)arg1;
- (id)assetInjectorMap;
- (void)setAssetInjectorMap:(id)arg1;
- (void).cxx_destruct;
@end

