@interface MVPreviewAssetPickerViewController : MMMusicPostVideoViewController
{
    id /* block */ _onFinishPickAssetsHandler; // +0x70
    id /* block */ _onCancelPickAssetsHandler; // +0x78
    UIView * _bottomBar; // +0x80
    MMUIButton * _finishButton; // +0x88
    MMMusicPostAssetPickerHandler * _pickerHandler; // +0x90
    NSMutableArray * _selectedArray; // +0x98
}
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutFinishButton;
- (void)onFinishButtonClicked;
- (void)setupSubviews;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (void)handleSelectedAssetUpdated:(id)arg1;
- (id)bottomBar;
- (id)finishButton;
- (id)selectedArray;
- (id)pickerHandler;
- (id /* block */)onFinishPickAssetsHandler;
- (void)setOnFinishPickAssetsHandler:(id /* block */)arg1;
- (id /* block */)onCancelPickAssetsHandler;
- (void)setOnCancelPickAssetsHandler:(id /* block */)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setFinishButton:(id)arg1;
- (void)setPickerHandler:(id)arg1;
- (void)setSelectedArray:(id)arg1;
- (void).cxx_destruct;
@end
