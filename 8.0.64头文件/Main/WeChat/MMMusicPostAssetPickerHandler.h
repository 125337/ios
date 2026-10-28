@interface MMMusicPostAssetPickerHandler : NSObject <MMMusicPostVideoVCDataSource, MMMusicPostVideoDelegate>
{
    id /* block */ _onSelectedAssetChanged; // +0x8
    NSMutableArray * _selectedModels; // +0x10
}
- (id)getSelectedModels;
- (id)getSelectedArr;
- (void)onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(CGRect)arg3;
- (void)onTabFinderSearch:(id)arg1;
- (void)onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(CGRect)arg3;
- (void)onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (BOOL)addOrRemoveSelectedModel:(id)arg1;
- (BOOL)addOrRemoveSelectedModel:(id)arg1 addHandler:(id /* block */)arg2 removeHandler:(id /* block */)arg3;
- (void)postVideoViewController:(id)arg1 onLocalVideoAssetSelectedBtnChecked:(id)arg2;
- (void)postVideoViewController:(id)arg1 onFinderVideoSelectedBtnChecked:(id)arg2;
- (id)selectedModels;
- (id /* block */)onSelectedAssetChanged;
- (void)setOnSelectedAssetChanged:(id /* block */)arg1;
- (void)setSelectedModels:(id)arg1;
- (void).cxx_destruct;
@end
