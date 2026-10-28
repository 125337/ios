@interface WADebugMenuSheet : WAPageSheet
{
    WAWebViewController * _webVC; // +0x8
    UIButton * _cancelButton; // +0x10
    UICollectionView * _collectionView; // +0x18
    ZZFLEXAngel * _angel; // +0x20
    NSArray * _menuData; // +0x28
}
- (id)initWithWebVC:(id)arg1;
- (id)init;
- (void)setWebVC:(id)arg1;
- (void)showSwitchRenderMenu;
- (void)showAuditsMenu;
- (void)setupUI;
- (void)reloadData;
- (double)contentHeight;
- (void)resetContentViewCornerRadius;
- (void)pageSheetWillAppear:(id)arg1;
- (id)webVC;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (id)menuData;
- (void)setMenuData:(id)arg1;
- (void).cxx_destruct;
@end
