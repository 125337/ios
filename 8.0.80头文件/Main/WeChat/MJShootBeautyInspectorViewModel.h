@interface MJShootBeautyInspectorViewModel : MJShootEffectMaterialViewModel
{
    BOOL _didAdjustBeautyParam; // +0x8
    MJShootBeautyMainPanelItem * _selectedBeautyMainPanelItem; // +0x10
    NSArray * _beautyMainPanelItems; // +0x18
    OMJBeautyAdjustmentDesc * _adjustingBeautyDesc; // +0x20
    MJShootBeautyItem * _selectedBeautyItem; // +0x28
    NSArray * _beautyItemsForAdjustingDesc; // +0x30
    NSMutableDictionary * _beautyDescByID; // +0x38
    NSMutableDictionary * _originalBeautyDescByID; // +0x40
}
+ (id)defaultMainPanelItems;
- (id)init;
- (void)fetchBeautyDataIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchBeautyDataWithCompletion:(id /* block */)arg1;
- (id)getBeautyDescWithItem:(id)arg1;
- (id)getOriginalBeautyDescWithItem:(id)arg1;
- (void)didSelectBeautyMainPanelItem:(id)arg1;
- (void)didSelectBeautyItem:(id)arg1;
- (void)clearSelectedBeautyItem;
- (void)refetchAndRestoreBeautyEffectWithCompletion:(id /* block */)arg1;
- (void)loadBeautyMainPanelItem:(id)arg1 shouldUpdateEffect:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)prepareToAdjustingDescWithCompletion:(id /* block */)arg1;
- (void)didFinishAdjustingDesc;
- (void)resetAdjustingDesc;
- (void)resetAllBeautyDescs;
- (void)adjustingDescOnItemValueChanged:(id)arg1;
- (void)updateCamEffectWithBeautyDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearBeautyEffectWithCompletion:(id /* block */)arg1;
- (id)selectedBeautyMainPanelItemIndexPath;
- (id)selectedBeautyItemIndexPath;
- (id)beautyItemsWithAdjustingDesc:(id)arg1 originalDesc:(id)arg2;
- (void)updateUserCachedBeautyDesc:(id)arg1 materialID:(id)arg2;
- (id)getUserCachedBeautyDescWithID:(id)arg1 materialID:(id)arg2;
- (id)calcUserCachedBeautyDescKeyWithID:(id)arg1;
- (id)selectedBeautyMainPanelItem;
- (void)setSelectedBeautyMainPanelItem:(id)arg1;
- (id)beautyMainPanelItems;
- (void)setBeautyMainPanelItems:(id)arg1;
- (id)adjustingBeautyDesc;
- (void)setAdjustingBeautyDesc:(id)arg1;
- (id)selectedBeautyItem;
- (void)setSelectedBeautyItem:(id)arg1;
- (id)beautyItemsForAdjustingDesc;
- (void)setBeautyItemsForAdjustingDesc:(id)arg1;
- (BOOL)didAdjustBeautyParam;
- (void)setDidAdjustBeautyParam:(BOOL)arg1;
- (id)beautyDescByID;
- (void)setBeautyDescByID:(id)arg1;
- (id)originalBeautyDescByID;
- (void)setOriginalBeautyDescByID:(id)arg1;
- (void).cxx_destruct;
@end
