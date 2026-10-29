@interface MMImgFullScreenLogic_OpenWeApp : MMImgFullScreenLogic <WAWxMaterialRefreshExt>
{
    BOOL _haveMaterialButton; // +0x8
    NSString * _materialFileExt; // +0x10
}
- (id)init;
- (void)updateWeAppForMaterial;
- (void)tryAddToActionSheet:(id)arg1;
- (void)tryAddToActionSheet:(id)arg1 whenPopMenu:(BOOL)arg2;
- (BOOL)addWAOpenWxMaterialButton:(id)arg1 openType:(unsigned int)arg2 scrollActionSheet:(id)arg3;
- (void)weAppOpenMaterial:(id)arg1;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (BOOL)haveMaterialButton;
- (void)setHaveMaterialButton:(BOOL)arg1;
- (id)materialFileExt;
- (void)setMaterialFileExt:(id)arg1;
- (void).cxx_destruct;
@end
