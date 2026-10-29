@interface MMFinderLiveGiftStarBasePanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate>
{
    BOOL _sendingInFlight; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveGiftStarTheme * _theme; // +0x18
    id <MMFinderLiveGiftStarActionDelegate> _actionDelegate; // +0x20
    UIView * _contentView; // +0x28
    UIView * _navBar; // +0x30
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x38
    MMUIButton * _ruleButton; // +0x40
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)onNeedRefreshNotification:(id)arg1;
- (void)reloadData;
- (void)reportAction:(unsigned long long)arg1 extras:(id)arg2;
- (long long)navLeftStyle;
- (BOOL)showRuleButton;
- (id)panelBackgroundColor;
- (void)setupContent;
- (void)layoutContentWithBounds:(CGRect)arg1;
- (void)setupPageSheetConfig;
- (void)setupViews;
- (void)setNavTitle:(id)arg1 subTitle:(id)arg2;
- (void)relayout;
- (void)layoutNavBar;
- (double)panelWidth;
- (double)panelHeight;
- (double)safeAreaBottom;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onClickRuleButton;
- (void)pushChildPanel:(id)arg1;
- (void)panelDidPush;
- (id)liveTask;
- (BOOL)isAnchor;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (BOOL)sendingInFlight;
- (void)setSendingInFlight:(BOOL)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)ruleButton;
- (void)setRuleButton:(id)arg1;
- (void).cxx_destruct;
@end
