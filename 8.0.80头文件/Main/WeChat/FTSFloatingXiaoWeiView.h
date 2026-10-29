@interface FTSFloatingXiaoWeiView : FTSFloatingVoiceInputView <FTSFloatingXiaoWeiModelDelegate>
{
    BOOL _hasReceivedRealPeak; // +0x8
    float _fakePeakCurrent; // +0xc
    FTSFloatingXiaoWeiModel * _xiaoWeiModel; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subtitleLabel; // +0x28
    NSTimer * _waitAcceptedTimer; // +0x30
    NSTimer * _fakePeakTimer; // +0x38
    double _iconSize; // +0x40
    double _iconGap; // +0x48
    double _firstLineLeftShift; // +0x50
    CGSize _titleNaturalSize; // +0x58
    CGSize _subtitleNaturalSize; // +0x68
}
- (id)initWithViewModel:(id)arg1 config:(id)arg2 ftsContext:(id)arg3;
- (void)dealloc;
- (BOOL)newStyleEnabled;
- (void)setupFloatingButton;
- (BOOL)isXiaoWeiVoiceInputStyle;
- (void)applyXiaoWeiButtonStyle;
- (double)xiaoWeiFloatingButtonWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFloatingButtonColorStyle:(BOOL)arg1;
- (void)updateFloatingButtonTitle:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)onGestureStart:(BOOL)arg1;
- (void)onGestureEnd:(BOOL)arg1 isFromTap:(BOOL)arg2 isFromGesture:(BOOL)arg3;
- (void)onWillResignActive:(id)arg1;
- (void)stopRecordForSure;
- (void)enterWaitingXiaoWeiAppearance;
- (void)onWaitAcceptedTimeout;
- (void)onXiaoWeiVoiceInputReady:(id)arg1;
- (void)onXiaoWeiVoiceInputAccepted:(id)arg1;
- (void)onXiaoWeiVoiceInputError:(long long)arg1 errMsg:(id)arg2 sessionId:(id)arg3;
- (void)onXiaoWeiVoiceInputPeakPower:(float)arg1 sessionId:(id)arg2;
- (void)startFakePeakTimerIfNeeded;
- (void)cleanupRecordingUI;
- (void)invalidateWaitAcceptedTimer;
- (void)invalidateFakePeakTimer;
- (void)reportOnGestureStart:(BOOL)arg1;
- (void)reportOnGestureCancel:(BOOL)arg1;
- (void)reportOnJumpXiaoWei;
- (id)xiaoWeiModel;
- (void)setXiaoWeiModel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)waitAcceptedTimer;
- (void)setWaitAcceptedTimer:(id)arg1;
- (id)fakePeakTimer;
- (void)setFakePeakTimer:(id)arg1;
- (float)fakePeakCurrent;
- (void)setFakePeakCurrent:(float)arg1;
- (BOOL)hasReceivedRealPeak;
- (void)setHasReceivedRealPeak:(BOOL)arg1;
- (CGSize)titleNaturalSize;
- (void)setTitleNaturalSize:(CGSize)arg1;
- (CGSize)subtitleNaturalSize;
- (void)setSubtitleNaturalSize:(CGSize)arg1;
- (double)iconSize;
- (void)setIconSize:(double)arg1;
- (double)iconGap;
- (void)setIconGap:(double)arg1;
- (double)firstLineLeftShift;
- (void)setFirstLineLeftShift:(double)arg1;
- (void).cxx_destruct;
@end
