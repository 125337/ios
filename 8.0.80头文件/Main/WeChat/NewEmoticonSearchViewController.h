@interface NewEmoticonSearchViewController : WSHalfScreenWebSearchBaseViewController <EmoticonUploaderDelegate, FTSFloatingVoiceInputViewModelDelegate>
{
    BOOL _includeCustomEmoji; // +0x70
    BOOL _bShowKeyboardTips; // +0x71
    BOOL _moreButtonLongPressShouldCancel; // +0x72
    BOOL _moreButtonLongPressReleased; // +0x73
    BOOL _shouldSuppressMoreButtonTap; // +0x74
    BOOL _isHandlingH5SearchInputSetText; // +0x75
    unsigned int _sourceScene; // +0x78
    id <EmoticonSearchViewControllerDelegate> _delegate; // +0x80
    id /* block */ _openEmotionStoreBlock; // +0x88
    id /* block */ _getRecommendCtxsBlock; // +0x90
    NSString * _chatId; // +0x98
    WCTopicSearchActionLogic * _shareActionLogic; // +0xa0
    CEmoticonWrap * _selectedEmoticon; // +0xa8
    StoreEmotionBatchEmojiDownLoadCgi * _emojiDownloadCgi; // +0xb0
    EmoticonUploader * _emoticonUploader; // +0xb8
    EmoticonSearchInMessagePanelReporter * _reporter; // +0xc0
    EmoticonXiaoweiSearchReporter * _xiaoweiReporter; // +0xc8
    unsigned long long _selectEmoticonTimeStamp; // +0xd0
    NSDictionary * _selectEmoticonParams; // +0xd8
    UIView * _askButtonContainerView; // +0xe0
    UIButton * _askButton; // +0xe8
    UILabel * _askButtonHintLabel; // +0xf0
    UIView * _bottomAskMaskView; // +0xf8
    CAGradientLayer * _bottomAskMaskGradientLayer; // +0x100
    UIView * _moreButtonLongPressOverlayView; // +0x108
    UIView * _moreButtonLongPressSnapshotView; // +0x110
    UIVisualEffectView * _moreButtonLongPressBlurView; // +0x118
    UIView * _moreButtonLongPressWhiteMaskView; // +0x120
    UIView * _moreButtonLongPressVoicePanel; // +0x128
    CAShapeLayer * _moreButtonLongPressVoicePanelMaskLayer; // +0x130
    UIWindow * _moreButtonLongPressOverlayHostWindow; // +0x138
    CBTWaveformView * _moreButtonLongPressFeedbackView; // +0x140
    UIActivityIndicatorView * _moreButtonLongPressIndicatorView; // +0x148
    UILabel * _moreButtonLongPressStatusLabel; // +0x150
    UILabel * _moreButtonLongPressCancelLabel; // +0x158
    FTSFloatingVoiceInputViewModel * _moreButtonVoiceInputViewModel; // +0x160
    NSString * _moreButtonVoiceRecognizedText; // +0x168
    double _moreButtonLongPressBackgroundHeight; // +0x170
    double _moreButtonLongPressCapturedTop; // +0x178
    double _keyboardOffset; // +0x180
    UIButton * _featuredButton; // +0x188
    UIViewController * _presentationSourceViewController; // +0x190
}
+ (BOOL)expIfChangedBackgroundColor;
- (BOOL)isChatIdEmpty:(id)arg1;
- (id)chatIdLogState:(id)arg1;
- (id)initWithCurrentTextAndCid:(id)arg1 chatId:(id)arg2 sourceScene:(unsigned int)arg3 includeCustomEmoji:(BOOL)arg4;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)applyDuoHalfScreenAdjustmentIfNeeded;
- (void)viewDidTransitionToNewSize;
- (double)pageSheetContentWidth;
- (id)textfiledBackgroundColor;
- (id)baseBackgroundColor;
- (id)leftIconBgImageColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)registerXiaoWeiEventSink;
- (void)setFeaturedEmojiEntryVisible:(BOOL)arg1;
- (void)closeEmojiSearchPanel;
- (void)dealloc;
- (void)addKeyboardObservers;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)animateLayoutWithKeyboardNotification:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)isXiaoweiEmoticonEnabled;
- (BOOL)shouldShowAskButton;
- (void)setupAskButton;
- (id)featuredEmojiButton;
- (BOOL)isSearchMode;
- (id)trimmedSearchQuery;
- (double)askButtonContainerHeight;
- (void)layoutAskButtonContainer;
- (double)webSearchViewPosYForAskButton;
- (id)bottomAskMaskBackgroundColor;
- (void)updateBottomAskMaskGradientColors;
- (void)updateMoreButtonLongPressBlurStyle;
- (void)onTapFeaturedButton;
- (void)onTapAskButton;
- (id)collectRecommendEmojiCtx;
- (void)showEmojiAskFromCurrentPageWithMessage:(id)arg1 recomText:(id)arg2 voiceInput:(BOOL)arg3;
- (void)showEmojiAskLanding;
- (void)showEmojiAskLandingWithText:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)reloadWebview;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (void)onTextFieldChanged:(id)arg1;
- (void)onHeaderSearchTextDidChange:(id)arg1;
- (unsigned long long)searchScene;
- (unsigned long long)localJSBizType;
- (id)defaultNavTitle;
- (id)searchBarPlaceholder;
- (id)initedUrlParams;
- (BOOL)shouldSendSearchInputChangedEventDuringMultiStageInput;
- (BOOL)shouldMakeTextFieldAutoBecomFirstResponder;
- (id)makeAdapter;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (void)onEmoticonDownloaded:(id)arg1;
- (BOOL)needCheckUpload;
- (void)checkAndUploadEmoticon;
- (void)startCdnUpload;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)onSelectEmoticonFinished;
- (void)onSelectEmoticonFailed;
- (void)reportSendEmoticonWithSuccess:(BOOL)arg1;
- (void)openDetailViewWithKeyword:(id)arg1 params:(id)arg2;
- (BOOL)shouldUseExpandedMoreButtonLongPressBackground;
- (void)updateMoreButtonLongPressVoicePanelMask;
- (void)layoutMoreButtonLongPressOverlaySubviews;
- (void)updateMoreButtonLongPressCancelPrompt:(BOOL)arg1;
- (void)ensureMoreButtonLongPressOverlayInWindow;
- (void)showMoreButtonLongPressOverlay;
- (void)hideMoreButtonLongPressOverlayAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cancelMoreButtonVoiceInput;
- (void)beginMoreButtonVoiceInput;
- (void)finishMoreButtonVoiceInput;
- (void)reportPanelAndAskExposeIfNeeded;
- (void)reportAskButtonHoldingWithSayContent:(id)arg1 holdingState:(unsigned long long)arg2;
- (void)onAskButtonLongPress:(id)arg1;
- (void)onVoiceInputPreparing;
- (void)onVoiceInputStart;
- (void)onVoiceInputRecognizeWithText:(id)arg1;
- (void)onVoiceInputStop;
- (void)onVocieTransEnd:(id)arg1;
- (void)onUpdatePeakPower:(float)arg1;
- (void)onVoiceInputCancelByMaxTime:(id)arg1;
- (void)onVoiceInputError:(long long)arg1 errMsg:(id)arg2;
- (void)onVoiceTransEndedByServerWithEndFlag:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)openEmotionStoreBlock;
- (void)setOpenEmotionStoreBlock:(id /* block */)arg1;
- (id /* block */)getRecommendCtxsBlock;
- (void)setGetRecommendCtxsBlock:(id /* block */)arg1;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id)shareActionLogic;
- (void)setShareActionLogic:(id)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (BOOL)includeCustomEmoji;
- (void)setIncludeCustomEmoji:(BOOL)arg1;
- (id)selectedEmoticon;
- (void)setSelectedEmoticon:(id)arg1;
- (id)emojiDownloadCgi;
- (void)setEmojiDownloadCgi:(id)arg1;
- (id)emoticonUploader;
- (void)setEmoticonUploader:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)xiaoweiReporter;
- (void)setXiaoweiReporter:(id)arg1;
- (unsigned long long)selectEmoticonTimeStamp;
- (void)setSelectEmoticonTimeStamp:(unsigned long long)arg1;
- (id)selectEmoticonParams;
- (void)setSelectEmoticonParams:(id)arg1;
- (BOOL)bShowKeyboardTips;
- (void)setBShowKeyboardTips:(BOOL)arg1;
- (id)askButtonContainerView;
- (void)setAskButtonContainerView:(id)arg1;
- (id)askButton;
- (void)setAskButton:(id)arg1;
- (id)askButtonHintLabel;
- (void)setAskButtonHintLabel:(id)arg1;
- (id)bottomAskMaskView;
- (void)setBottomAskMaskView:(id)arg1;
- (id)bottomAskMaskGradientLayer;
- (void)setBottomAskMaskGradientLayer:(id)arg1;
- (id)moreButtonLongPressOverlayView;
- (void)setMoreButtonLongPressOverlayView:(id)arg1;
- (id)moreButtonLongPressSnapshotView;
- (void)setMoreButtonLongPressSnapshotView:(id)arg1;
- (id)moreButtonLongPressBlurView;
- (void)setMoreButtonLongPressBlurView:(id)arg1;
- (id)moreButtonLongPressWhiteMaskView;
- (void)setMoreButtonLongPressWhiteMaskView:(id)arg1;
- (id)moreButtonLongPressVoicePanel;
- (void)setMoreButtonLongPressVoicePanel:(id)arg1;
- (id)moreButtonLongPressVoicePanelMaskLayer;
- (void)setMoreButtonLongPressVoicePanelMaskLayer:(id)arg1;
- (id)moreButtonLongPressOverlayHostWindow;
- (void)setMoreButtonLongPressOverlayHostWindow:(id)arg1;
- (id)moreButtonLongPressFeedbackView;
- (void)setMoreButtonLongPressFeedbackView:(id)arg1;
- (id)moreButtonLongPressIndicatorView;
- (void)setMoreButtonLongPressIndicatorView:(id)arg1;
- (id)moreButtonLongPressStatusLabel;
- (void)setMoreButtonLongPressStatusLabel:(id)arg1;
- (id)moreButtonLongPressCancelLabel;
- (void)setMoreButtonLongPressCancelLabel:(id)arg1;
- (id)moreButtonVoiceInputViewModel;
- (void)setMoreButtonVoiceInputViewModel:(id)arg1;
- (id)moreButtonVoiceRecognizedText;
- (void)setMoreButtonVoiceRecognizedText:(id)arg1;
- (BOOL)moreButtonLongPressShouldCancel;
- (void)setMoreButtonLongPressShouldCancel:(BOOL)arg1;
- (double)moreButtonLongPressBackgroundHeight;
- (void)setMoreButtonLongPressBackgroundHeight:(double)arg1;
- (double)moreButtonLongPressCapturedTop;
- (void)setMoreButtonLongPressCapturedTop:(double)arg1;
- (BOOL)moreButtonLongPressReleased;
- (void)setMoreButtonLongPressReleased:(BOOL)arg1;
- (BOOL)shouldSuppressMoreButtonTap;
- (void)setShouldSuppressMoreButtonTap:(BOOL)arg1;
- (double)keyboardOffset;
- (void)setKeyboardOffset:(double)arg1;
- (BOOL)isHandlingH5SearchInputSetText;
- (void)setIsHandlingH5SearchInputSetText:(BOOL)arg1;
- (id)featuredButton;
- (void)setFeaturedButton:(id)arg1;
- (id)presentationSourceViewController;
- (void)setPresentationSourceViewController:(id)arg1;
- (void).cxx_destruct;
@end
