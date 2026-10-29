@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanel : UIView
{
    MMFinderLiveAnchorCustomizeRewardStyleSelectLogic * _logic; // +0x8
    WCActionSheet * _chooseImageActionSheet; // +0x10
    MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab * _styleSelectTab; // +0x18
    MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView * _optionsView; // +0x20
}
- (id)initWithStyleSelectLogic:(id)arg1;
- (void)initOptionsView;
- (void)initStyleSelectTab;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)refreshViewData;
- (void)checkIsNeedSelectImage;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)chooseImageActionSheet;
- (void)setChooseImageActionSheet:(id)arg1;
- (id)styleSelectTab;
- (void)setStyleSelectTab:(id)arg1;
- (id)optionsView;
- (void)setOptionsView:(id)arg1;
- (void).cxx_destruct;
@end

