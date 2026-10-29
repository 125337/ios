@interface FavAIAskButtonController : NSObject <FTSFloatingVoiceInputViewModelDelegate>
{
    BOOL _longPressReleased; // +0x8
    BOOL _shouldSuppressTap; // +0x9
    BOOL _hasReportedExposure; // +0xa
    id <FavAIAskButtonControllerDataSource> _dataSource; // +0x10
    UIViewController * _hostViewController; // +0x18
    long long _displayPolicy; // +0x20
    UIControl * _askButton; // +0x28
    UIImageView * _askIconView; // +0x30
    UILabel * _askTitleLabel; // +0x38
    UILabel * _askSubtitleLabel; // +0x40
    UIView * _askButtonContainerView; // +0x48
    UIView * _bottomAskMaskView; // +0x50
    CAGradientLayer * _bottomAskMaskGradientLayer; // +0x58
    UILabel * _askHintLabel; // +0x60
    double _keyboardOffset; // +0x68
    double _keyboardTotalHeight; // +0x70
    CBTASRBoard * _asrBoard; // +0x78
    FTSFloatingVoiceInputViewModel * _voiceInputViewModel; // +0x80
    NSString * _voiceRecognizedText; // +0x88
    id /* block */ _pendingExposureBlock; // +0x90
}
+ (BOOL)isEntryEnabled;
- (id)initWithHostViewController:(id)arg1 displayPolicy:(long long)arg2;
- (void)dealloc;
- (BOOL)isActive;
- (id)hostView;
- (void)setup;
- (void)addKeyboardObservers;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)animateLayoutWithKeyboardNotification:(id)arg1;
- (void)refresh;
- (void)hideAskViews;
- (BOOL)queryIsOnSearch;
- (BOOL)querySearchBarIsFirstResponder;
- (void)updateVisibility;
- (void)scheduleExposureCheckIfNeeded;
- (void)cancelPendingExposureCheck;
- (void)reportExposureIfVisible;
- (BOOL)canReportExposure;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (CGSize)calculateButtonSize;
- (double)availableButtonWidth;
- (void)layoutButton;
- (void)layoutButtonContentWithSize:(CGSize)arg1;
- (void)onAskButtonTouchDown;
- (void)onAskButtonTouchUp;
- (void)updateColorsForTraitCollection:(id)arg1;
- (void)updateMaskGradientColorsForTraitCollection:(id)arg1;
- (void)reportAskButtonEvent:(id)arg1 enterScene:(int)arg2;
- (void)reportExposure;
- (void)onTapAskButton;
- (void)showAskLandingWithText:(id)arg1;
- (id)asrBoard;
- (void)onASRSessionStartRequested;
- (void)onASRVoiceSubmitRequested;
- (void)onASRSessionCancelRequested;
- (void)resetTapSuppressionAsync;
- (void)cancelVoiceInput;
- (void)beginVoiceInput;
- (void)finishVoiceInput;
- (void)onAskButtonLongPress:(id)arg1;
- (void)syncASRBoardPositionWithKeyboard;
- (void)onVoiceInputPreparing;
- (void)onVoiceInputStart;
- (void)onVoiceInputRecognizeWithText:(id)arg1;
- (void)onVoiceInputStop;
- (void)onVocieTransEnd:(id)arg1;
- (void)onUpdatePeakPower:(float)arg1;
- (void)onVoiceInputCancelByMaxTime:(id)arg1;
- (void)onVoiceInputError:(long long)arg1 errMsg:(id)arg2;
- (void)onVoiceTransEndedByServerWithEndFlag:(unsigned int)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (long long)displayPolicy;
- (void)setDisplayPolicy:(long long)arg1;
- (id)askButton;
- (void)setAskButton:(id)arg1;
- (id)askIconView;
- (void)setAskIconView:(id)arg1;
- (id)askTitleLabel;
- (void)setAskTitleLabel:(id)arg1;
- (id)askSubtitleLabel;
- (void)setAskSubtitleLabel:(id)arg1;
- (id)askButtonContainerView;
- (void)setAskButtonContainerView:(id)arg1;
- (id)bottomAskMaskView;
- (void)setBottomAskMaskView:(id)arg1;
- (id)bottomAskMaskGradientLayer;
- (void)setBottomAskMaskGradientLayer:(id)arg1;
- (id)askHintLabel;
- (void)setAskHintLabel:(id)arg1;
- (double)keyboardOffset;
- (void)setKeyboardOffset:(double)arg1;
- (double)keyboardTotalHeight;
- (void)setKeyboardTotalHeight:(double)arg1;
- (void)setAsrBoard:(id)arg1;
- (id)voiceInputViewModel;
- (void)setVoiceInputViewModel:(id)arg1;
- (id)voiceRecognizedText;
- (void)setVoiceRecognizedText:(id)arg1;
- (BOOL)longPressReleased;
- (void)setLongPressReleased:(BOOL)arg1;
- (BOOL)shouldSuppressTap;
- (void)setShouldSuppressTap:(BOOL)arg1;
- (BOOL)hasReportedExposure;
- (void)setHasReportedExposure:(BOOL)arg1;
- (id /* block */)pendingExposureBlock;
- (void)setPendingExposureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
