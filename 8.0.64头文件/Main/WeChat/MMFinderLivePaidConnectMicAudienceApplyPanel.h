@interface MMFinderLivePaidConnectMicAudienceApplyPanel : MMPageSheetBaseView <UITextViewDelegate>
{
    BOOL _allowAnonymous; // +0x8
    BOOL _allowConsultInput; // +0x9
    id <MMFinderLivePaidConnectMicAudienceApplyPanelDelegate> _delegate; // +0x10
    MMUIMaskContainerView * _scrollContainerView; // +0x18
    UIScrollView * _contentScrollView; // +0x20
    MMHeadImageView * _headerImageView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUIButton * _ratingButton; // +0x38
    MMUIButton * _settingButton; // +0x40
    MMUILabel * _connectMicDurationDescLabel; // +0x48
    UIView * _consultContentContainerView; // +0x50
    MMTextView * _consultContentTextView; // +0x58
    MMUILabel * _consultWordCountLabel; // +0x60
    MMFinderLivePaidConnectMicServiceInfo * _serviceInfo; // +0x68
    MMFinderLiveTaskId * _taskId; // +0x70
    UIButton * _applyButton; // +0x78
    MMUILabel * _waitingDescLabel; // +0x80
    double _keyboardHeight; // +0x88
    unsigned long long _applyType; // +0x90
    NSArray * _connectMethodViews; // +0x98
    UIView * _connectMethodBGView; // +0xa0
    UIView * _connectMethodTopLine; // +0xa8
    UIView * _connectMethodBottomLine; // +0xb0
}
- (id)initWithLiveTaskId:(id)arg1 serviceInfo:(id)arg2 allowAnonymousApply:(BOOL)arg3 allowConsultInput:(BOOL)arg4;
- (void)dealloc;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWithServiceInfo:(id)arg1;
- (void)updateWithApplyInfo:(id)arg1;
- (id)getCurrentServiceInfo;
- (void)didMoveToWindow;
- (void)initUI;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutConsultWordCountLabel;
- (void)reloadContentScrollViewMask;
- (void)reloadMethodViewSelectState;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)onClose;
- (void)onApply;
- (void)onTapRatingButton;
- (void)onCameraSettingsTapped;
- (BOOL)applyWithAnonymousIdentity;
- (BOOL)applyUsingVideo;
- (void)setApplyType:(unsigned long long)arg1;
- (BOOL)useBgColorStyleForConnectMethodViews;
- (id)buildGenericDescLabel;
- (double)pageSheetContentHeight;
- (double)pageSheetFullHeight;
- (void)fillUIWithServiceInfo;
- (void)pushLiteAppWithJumpInfo:(id)arg1;
- (void)internalSetupAndOpenLiteAppVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)ratingButton;
- (void)setRatingButton:(id)arg1;
- (id)settingButton;
- (void)setSettingButton:(id)arg1;
- (id)connectMicDurationDescLabel;
- (void)setConnectMicDurationDescLabel:(id)arg1;
- (id)consultContentContainerView;
- (void)setConsultContentContainerView:(id)arg1;
- (id)consultContentTextView;
- (void)setConsultContentTextView:(id)arg1;
- (id)consultWordCountLabel;
- (void)setConsultWordCountLabel:(id)arg1;
- (id)serviceInfo;
- (void)setServiceInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)applyButton;
- (void)setApplyButton:(id)arg1;
- (id)waitingDescLabel;
- (void)setWaitingDescLabel:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (unsigned long long)applyType;
- (id)connectMethodViews;
- (void)setConnectMethodViews:(id)arg1;
- (id)connectMethodBGView;
- (void)setConnectMethodBGView:(id)arg1;
- (id)connectMethodTopLine;
- (void)setConnectMethodTopLine:(id)arg1;
- (id)connectMethodBottomLine;
- (void)setConnectMethodBottomLine:(id)arg1;
- (BOOL)allowAnonymous;
- (void)setAllowAnonymous:(BOOL)arg1;
- (BOOL)allowConsultInput;
- (void)setAllowConsultInput:(BOOL)arg1;
- (void).cxx_destruct;
@end
