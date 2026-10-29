@interface MultitalkSecondOperateView : UIView
{
    BOOL _lockScreenEnabled; // +0x8
    BOOL _m_isUsingNewNavigationButtonStyle; // +0x9
    id <MultitalkSecondOperateViewDelegate> _m_delegate; // +0x10
    UIButton * _m_shareScreenButton; // +0x18
    MMUIButton * _m_addMemberButton; // +0x20
    MMBadgeView * _m_shareScreenBadgeView; // +0x28
    MMUIButton * _m_minimizeButton; // +0x30
    MMTimerLabel * _m_timerView; // +0x38
    UILabel * _m_statusLabel; // +0x40
    VoIPLockScreenButton * _m_attachedLockButton; // +0x48
}
- (void)hideOperateView;
- (void)showOperateView;
- (void)updateAddMemberButtonHidden:(BOOL)arg1;
- (void)updateShareScreenButtonHidden:(BOOL)arg1;
- (void)updateShareScreenBadgeHidden:(BOOL)arg1;
- (void)updateMinimizeButtonHidden:(BOOL)arg1;
- (BOOL)getIsMinimizeButtonHidden;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 lockScreenEnabled:(BOOL)arg2;
- (void)didMoveToWindow;
- (BOOL)shouldUseNewScreenProjectNavigationButtonStyle;
- (void)layoutSubviews;
- (void)applyNewNavigationButtonStyle;
- (void)restoreOldNavigationButtonStyleIfNeeded;
- (void)updateMinimizeButtonToNewStyle;
- (void)updateAddMemberButtonToNewStyle;
- (void)updateShareScreenButtonToNewStyle;
- (void)restoreMinimizeButtonOldStyle;
- (void)restoreAddMemberButtonOldStyle;
- (void)restoreShareScreenButtonOldStyle;
- (void)updateShareScreenBadgePosition:(BOOL)arg1;
- (void)initMinimizeButton;
- (void)initAddMemberButton;
- (void)initShareScreenButton;
- (void)initTimerView;
- (void)initStatusLabel;
- (void)onAddMemberButtonClick;
- (void)onShareScreenButtonClicked:(id)arg1;
- (void)onMinimizeButtonClick;
- (void)updateStatusWording:(id)arg1;
- (void)restartTimer;
- (long long)currentDuration;
- (void)updateTimerForIlinkToMultiTalk:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)attachLockButton:(id)arg1;
- (void)positionLockButton;
- (void)hideChildControlsWithAnimated:(BOOL)arg1;
- (void)showChildControlsWithAnimated:(BOOL)arg1;
- (void)updateLockScreen:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_shareScreenButton;
- (void)setM_shareScreenButton:(id)arg1;
- (BOOL)lockScreenEnabled;
- (void)setLockScreenEnabled:(BOOL)arg1;
- (id)m_addMemberButton;
- (void)setM_addMemberButton:(id)arg1;
- (id)m_shareScreenBadgeView;
- (void)setM_shareScreenBadgeView:(id)arg1;
- (id)m_minimizeButton;
- (void)setM_minimizeButton:(id)arg1;
- (id)m_timerView;
- (void)setM_timerView:(id)arg1;
- (id)m_statusLabel;
- (void)setM_statusLabel:(id)arg1;
- (id)m_attachedLockButton;
- (void)setM_attachedLockButton:(id)arg1;
- (BOOL)m_isUsingNewNavigationButtonStyle;
- (void)setM_isUsingNewNavigationButtonStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
