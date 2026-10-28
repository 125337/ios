@interface MMGroupLiveStarterViewController : MMLiveStarterViewController <MMGrowTextViewDelegate>
{
    BOOL _isEditing; // +0x70
    BOOL _isEdited; // +0x71
    BOOL _isFrontCamera; // +0x72
    UIView * _cancelEditMask; // +0x78
    UILabel * _titleLabel; // +0x80
    MMGrowTextView * _textView; // +0x88
    UIView * _bottomLine; // +0x90
    UIButton * _startLiveButton; // +0x98
    UIButton * _cancelLiveButton; // +0xa0
    UILabel * _wordCountTips; // +0xa8
    MMUIButton * _closeButton; // +0xb0
    MMUIButton * _switchCameraButton; // +0xb8
    MMTimer * _coundownTimer; // +0xc0
    UILabel * _coundownTips; // +0xc8
    long long _timerCountdown; // +0xd0
    double _keyboardHeight; // +0xd8
    NSMutableDictionary * _extraInfo; // +0xe0
    NSString * _roomId; // +0xe8
    UILabel * _startTipLabel; // +0xf0
}
- (id)initWithLiveTask:(id)arg1;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)initNotifications;
- (void)viewDidLayoutSubviews;
- (void)addSubWidget:(id)arg1;
- (double)getStartLiveButtonBottomMargin;
- (double)getGrowTextViewLeftRightMargin;
- (void)layoutStartTipLabel;
- (void)layoutUI;
- (void)dealloc;
- (void)stopLiveTimer;
- (void)onCloseButtonClicked;
- (void)onSwitchCameraButtonClick;
- (void)onClickStartLiveAction:(id)arg1;
- (void)onCancelLiveActionClicked:(id)arg1;
- (void)onCancelEditMaskTouched:(id)arg1;
- (void)cancelEdit;
- (void)realStartLive;
- (unsigned long long)systemCapabilityAuthScene;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)updateWordCountTipsLabel:(int)arg1;
- (void)showCountdownView;
- (void)hideCountdownView;
- (void)startCountdownTimer;
- (void)stopCountdownTimer;
- (void)updateCountTimer;
- (id)extraInfo;
- (id)startExtraInfo;
- (id)bottomLine;
- (id)titleLabel;
- (id)textView;
- (id)wordCountTips;
- (id)startLiveButton;
- (id)closeButton;
- (id)switchCameraButton;
- (id)cancelLiveButton;
- (id)coundownTips;
- (id)cancelEditMask;
- (id)getDefaultText;
- (id)updateText:(id)arg1 withMaxLimit:(long long)arg2;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)updateWriteStatusWith:(id)arg1;
- (void)setCancelEditMask:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setBottomLine:(id)arg1;
- (void)setStartLiveButton:(id)arg1;
- (void)setCancelLiveButton:(id)arg1;
- (void)setWordCountTips:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setSwitchCameraButton:(id)arg1;
- (id)coundownTimer;
- (void)setCoundownTimer:(id)arg1;
- (void)setCoundownTips:(id)arg1;
- (long long)timerCountdown;
- (void)setTimerCountdown:(long long)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)isEdited;
- (void)setIsEdited:(BOOL)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (void)setExtraInfo:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (id)startTipLabel;
- (void)setStartTipLabel:(id)arg1;
- (void).cxx_destruct;
@end
