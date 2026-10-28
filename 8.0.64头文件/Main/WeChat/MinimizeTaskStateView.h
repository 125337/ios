@interface MinimizeTaskStateView : UIView <MinimizeDetailTaskListViewInterface>
{
    BOOL _hasPositionType; // +0x8
    BOOL _bNewStyle; // +0x9
    BOOL _rejectSetTaskData; // +0xa
    unsigned int _taskState; // +0xc
    id <MinimizeTaskStateViewDelegate> _m_delegate; // +0x10
    MinimizeTaskData * _taskData; // +0x18
    double _originalY; // +0x20
    id /* block */ _actionTaskDataBlock; // +0x28
    UIView * _upperContainerView; // +0x30
    UIView * _bottomContainerView; // +0x38
    UIView * _voiceContainerView; // +0x40
    UILabel * _titleLabel; // +0x48
    unsigned long long _positionType; // +0x50
    UIButton * _closeBtn; // +0x58
    UIButton * _playPauseBtn; // +0x60
    UIButton * _playNextButton; // +0x68
    UIView * _entryBtn; // +0x70
    MinimizeAnimateStateBaseView * _stateView; // +0x78
    PAGView * _leftOptionPAGViewForBMP; // +0x80
    UIView * _touchArea; // +0x88
    MinimizeVoiceControlButton * _voiceControlButton; // +0x90
    MinimizeVoiceControlButton * _bizVoiceControlButton; // +0x98
    UIView * _voiceControlContainer; // +0xa0
    UILabel * _voiceControlLoadingTipsView; // +0xa8
    UILabel * _voiceControlTipsView; // +0xb0
    MMUIActivityIndicatorView * _voiceControlLoadingIcon; // +0xb8
    UIButton * _voiceControlDoneButton; // +0xc0
    WCRecordFBNormalView * _voiceControlPeakView; // +0xc8
    TouchRecordCardView * _touchRecordView; // +0xd0
    BizVoiceRecordView * _bizVoiceRecordView; // +0xd8
    double _fMinContentWidth; // +0xe0
    UIEdgeInsets _edgeInset; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)isEqualToTaskKey:(id)arg1;
- (unsigned long long)getPositionType:(CGRect)arg1;
- (void)updatePositionType:(unsigned long long)arg1;
- (void)updateMask:(BOOL)arg1 Duration:(double)arg2;
- (id)getDefaultClipPath:(CGRect)arg1 positionType:(unsigned long long)arg2;
- (void)initUpperContainer;
- (float)stateViewContentHeight;
- (void)initBottomContainer;
- (void)removevoiceControlContainer;
- (void)createVoiceControlContainer;
- (void)showVoiceControlLoadingView;
- (void)didMoveToSuperview;
- (void)onVoicePeakPowerCallback:(float)arg1;
- (void)showVoiceControlRecordView;
- (void)addvoiceControlContainer;
- (BOOL)isVoiceControlRecording;
- (void)stopVoiceControlPAGAnimation;
- (void)addCloseButton;
- (void)addPlayPauseButton;
- (void)addBizVoiceControlButton;
- (void)addVoiceControlButton;
- (void)setFrame:(CGRect)arg1;
- (void)onVoiceRecordEnd:(BOOL)arg1;
- (void)voiceControlButtonTouchDown;
- (void)voiceControlButtonTouchCancel;
- (void)showBizVoiceView;
- (void)showTouchRecordView;
- (void)removeBizVoiceView;
- (void)removeTouchRecordView;
- (void)addPlayNextButton;
- (void)addTouchArea;
- (void)addTitleLabel;
- (void)addEntryButton;
- (void)setTaskData:(id)arg1;
- (void)setTaskState:(unsigned int)arg1;
- (void)addLeftOptionVoiceBMP;
- (void)resetAllView;
- (BOOL)isAudioStateView;
- (BOOL)isAudioPlaying;
- (void)hideSubviewsWhenMaximizeBegin;
- (void)showSubviewsWhenMaximizeEnd;
- (void)updateTitle:(id)arg1;
- (void)calResetStateViewInitWidth;
- (double)stateViewMinWidth;
- (double)stateViewPreferHeight;
- (void)layoutVoiceControlSubviews;
- (void)layoutSubviews;
- (void)updatePlayPauseStateIfNeeded;
- (id)firstOpButton;
- (double)closeBtnRightMargin;
- (double)stateIconSize;
- (double)stateIconLeftInset;
- (double)taskIconLeftMargin;
- (BOOL)taskCanShowEntryView;
- (void)setCloseBtnVisible:(BOOL)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (void)onPlayPauseBtnClicked:(id)arg1;
- (void)onPlayNextBtnClicked:(id)arg1;
- (void)onEntryBtnClicked:(id)arg1;
- (void)closeAndCanelBizVoiceController;
- (void)onBizVoiceControlRecordStart:(id)arg1;
- (void)onBizVoiceControlRecordEnd:(id)arg1 isCancel:(BOOL)arg2;
- (void)onVoiceControlRecordStart:(id)arg1;
- (void)onVoiceControlRecordEnd:(id)arg1 isCancel:(BOOL)arg2;
- (BOOL)isSupportLongPress;
- (BOOL)shouldHighlightForLongPressWithPoint:(CGPoint)arg1;
- (void)setHighlightForLongPress:(BOOL)arg1 scale:(double)arg2;
- (void)longPressed;
- (BOOL)shouldBeFixedWidth;
- (BOOL)shouldShowCloseButton;
- (BOOL)shouldShowPlayPauseButton;
- (BOOL)shouldShowPlayNextButton;
- (BOOL)shouldShowVoiceControlArea;
- (BOOL)shouldShowVoiceControlAreaV2;
- (BOOL)shouldShowBizVoiceControlArea;
- (BOOL)isVoiceControlLoading;
- (BOOL)showVoiceControlPeak;
- (BOOL)voiceControlButtonSelected;
- (BOOL)showTakingState;
- (void)setRejectSetTaskData:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)taskData;
- (unsigned int)taskState;
- (UIEdgeInsets)edgeInset;
- (void)setEdgeInset:(UIEdgeInsets)arg1;
- (double)originalY;
- (void)setOriginalY:(double)arg1;
- (id /* block */)actionTaskDataBlock;
- (void)setActionTaskDataBlock:(id /* block */)arg1;
- (id)upperContainerView;
- (void)setUpperContainerView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)voiceContainerView;
- (void)setVoiceContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (unsigned long long)positionType;
- (void)setPositionType:(unsigned long long)arg1;
- (BOOL)hasPositionType;
- (void)setHasPositionType:(BOOL)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)playPauseBtn;
- (void)setPlayPauseBtn:(id)arg1;
- (id)playNextButton;
- (void)setPlayNextButton:(id)arg1;
- (id)entryBtn;
- (void)setEntryBtn:(id)arg1;
- (id)stateView;
- (void)setStateView:(id)arg1;
- (id)leftOptionPAGViewForBMP;
- (void)setLeftOptionPAGViewForBMP:(id)arg1;
- (id)touchArea;
- (void)setTouchArea:(id)arg1;
- (id)voiceControlButton;
- (void)setVoiceControlButton:(id)arg1;
- (id)bizVoiceControlButton;
- (void)setBizVoiceControlButton:(id)arg1;
- (id)voiceControlContainer;
- (void)setVoiceControlContainer:(id)arg1;
- (id)voiceControlLoadingTipsView;
- (void)setVoiceControlLoadingTipsView:(id)arg1;
- (id)voiceControlTipsView;
- (void)setVoiceControlTipsView:(id)arg1;
- (id)voiceControlLoadingIcon;
- (void)setVoiceControlLoadingIcon:(id)arg1;
- (id)voiceControlDoneButton;
- (void)setVoiceControlDoneButton:(id)arg1;
- (id)voiceControlPeakView;
- (void)setVoiceControlPeakView:(id)arg1;
- (id)touchRecordView;
- (void)setTouchRecordView:(id)arg1;
- (id)bizVoiceRecordView;
- (void)setBizVoiceRecordView:(id)arg1;
- (BOOL)bNewStyle;
- (void)setBNewStyle:(BOOL)arg1;
- (double)fMinContentWidth;
- (void)setFMinContentWidth:(double)arg1;
- (BOOL)rejectSetTaskData;
- (void).cxx_destruct;
@end
