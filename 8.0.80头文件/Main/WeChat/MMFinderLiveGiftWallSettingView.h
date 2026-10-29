@interface MMFinderLiveGiftWallSettingView : UIView <ILinkEventExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUIButton * _helpButton; // +0x18
    UIView * _detailView; // +0x20
    MMUILabel * _switchTitleLabel; // +0x28
    UISwitch * _settingSwitch; // +0x30
    RichTextView * _descLabel; // +0x38
    id <MMFinderLiveGiftWallSettingViewDelegate> _delegate; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveTask;
- (void)onSwitchChanged:(id)arg1;
- (void)setGiftWallEnabled:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onHelpButtonClick;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)helpButton;
- (void)setHelpButton:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (id)switchTitleLabel;
- (void)setSwitchTitleLabel:(id)arg1;
- (id)settingSwitch;
- (void)setSettingSwitch:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
