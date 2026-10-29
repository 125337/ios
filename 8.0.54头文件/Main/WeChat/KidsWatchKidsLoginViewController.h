@interface KidsWatchKidsLoginViewController : KidsWatchBaseViewController
{
    NSArray * _kidsAccountInfoList; // +0x68
    UIButton * _switchAccountButton; // +0x70
    KidsWatchFlexibleImageView * _bottomRightBackgroundView; // +0x78
}
- (void)viewDidLoad;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setupWithData:(id)arg1;
- (void)setKidsAccountInfoList:(id)arg1;
- (void)refreshView;
- (void)onTapItemView:(id)arg1;
- (void)onTapSwitchAccountButton;
- (void)onTapKidsLoginCloseBarButtonItem;
- (BOOL)shouldInteractivePop;
- (id)kidsAccountInfoList;
- (id)switchAccountButton;
- (void)setSwitchAccountButton:(id)arg1;
- (id)bottomRightBackgroundView;
- (void)setBottomRightBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

