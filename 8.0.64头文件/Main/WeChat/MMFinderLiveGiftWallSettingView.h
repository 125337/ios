@interface MMFinderLiveGiftWallSettingView : UIView <ILinkEventExt>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIView * _topSeparatorLine; // +0x18
    MMUILabel * _switchTitleLabel; // +0x20
    UISwitch * _settingSwitch; // +0x28
    UIView * _footerSeparatorLine; // +0x30
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
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)switchTitleLabel;
- (void)setSwitchTitleLabel:(id)arg1;
- (id)settingSwitch;
- (void)setSettingSwitch:(id)arg1;
- (id)footerSeparatorLine;
- (void)setFooterSeparatorLine:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
