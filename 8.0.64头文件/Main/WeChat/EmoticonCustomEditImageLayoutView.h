@interface EmoticonCustomEditImageLayoutView : WCEditImageLayoutView
{
    BOOL _hasCroped; // +0x8
    BOOL _hasAddText; // +0x9
    BOOL _hasDeleteAsset; // +0xa
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSelectedCollectionView;
- (void)initTopEditImageBar;
- (void)initSelectBtn;
- (void)OnSelectedButtonClicked:(id)arg1;
- (void)deleteCrtAsset:(unsigned long long)arg1 sender:(id)arg2;
- (void)initNextBtn;
- (void)reloadTopEditImageBar;
- (void)reloadBottomEditImageBar;
- (void)initGifImageView;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2 completion:(id /* block */)arg3;
- (void)onMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)onCropDone;
- (BOOL)currentImageFirstToSquare;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)endEditImageView;
- (BOOL)hasCroped;
- (void)setHasCroped:(BOOL)arg1;
- (BOOL)hasAddText;
- (void)setHasAddText:(BOOL)arg1;
- (BOOL)hasDeleteAsset;
- (void)setHasDeleteAsset:(BOOL)arg1;
@end
