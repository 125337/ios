@interface QMCCard : NSObject <QMCCardViewDelegate>
{
    BOOL _darkMode; // +0x8
    BOOL _embeddedInScrollView; // +0x9
    BOOL _mapGesturesDisabled; // +0xa
    BOOL _didReceiveTerminalEvent; // +0xb
    BOOL _canResumeSSEAfterFailure; // +0xc
    BOOL _darkModeExplicitlySet; // +0xd
    BOOL _fontSizeLevelAwaitingWidth; // +0xe
    BOOL _embeddedInScrollViewExplicitlySet; // +0xf
    BOOL _mapInteractionInsetsExplicitlySet; // +0x10
    BOOL _mapGesturesDisabledExplicitlySet; // +0x11
    BOOL _didReportShow; // +0x12
    NSString * _cardID; // +0x18
    NSString * _apiKey; // +0x20
    NSString * _appID; // +0x28
    NSString * _language; // +0x30
    long long _state; // +0x38
    id <QMCCardDelegate> _delegate; // +0x40
    long long _fontSizeLevel; // +0x48
    double _fontSizeScaleFactor; // +0x50
    QMCCardView * __cardView; // +0x58
    NSString * __requestID; // +0x60
    QMCCardData * __cardData; // +0x68
    long long _retryCount; // +0x70
    QMCSSEClient * __sseClient; // +0x78
    NSMutableArray * _streamingUIBuffer; // +0x80
    NSString * _sseMapDataID; // +0x88
    long long _sseCursorIndex; // +0x90
    long long _sseConnectionGeneration; // +0x98
    QMCReportConfig * _reportConfig; // +0xa0
    UIEdgeInsets _mapInteractionInsets; // +0xa8
}
+ (void)prewarmWeatherH5Runtime;
+ (void)prewarmWeatherH5RuntimeWithLogger:(id /* block */)arg1;
+ (void)loadRemoteIconImageWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)setDebugWeatherZipURLOverride:(id)arg1;
+ (id)debugWeatherZipURLOverride;
+ (void)setDebugTyphoonZipURLOverride:(id)arg1;
+ (id)debugTyphoonZipURLOverride;
- (long long)retryCount;
- (id)initWithCardID:(id)arg1 apiKey:(id)arg2 appID:(id)arg3 language:(id)arg4;
- (id)initWithCardID:(id)arg1 apiKey:(id)arg2 appID:(id)arg3;
- (void)dealloc;
- (id)makeCardView;
- (void)setDarkMode:(BOOL)arg1;
- (void)_applyAppearanceMode;
- (void)setFontSizeScaleFactor:(double)arg1;
- (void)setFontSizeLevel:(long long)arg1;
- (void)_resolveFontSizeLevelIfWidthReady;
- (void)_applyScaleToCardView;
- (void)setEmbeddedInScrollView:(BOOL)arg1;
- (void)_applyEmbeddedInScrollViewToCardView;
- (void)setMapInteractionInsets:(UIEdgeInsets)arg1;
- (void)_applyMapInteractionInsetsToCardView;
- (void)setMapGesturesDisabled:(BOOL)arg1;
- (void)_applyMapGesturesDisabledToCardView;
- (void)load;
- (void)reload;
- (void)loadWithSSE;
- (void)loadWithSSEMapDataID:(id)arg1;
- (void)recycle;
- (id)getCurrentJumpTarget;
- (void)qmcCardView:(id)arg1 didReceiveEvent:(id)arg2 params:(id)arg3;
- (id)userLocationForCardView:(id)arg1;
- (void)qmcCardView:(id)arg1 loadImageFromURL:(id)arg2 completion:(id /* block */)arg3;
- (void)qmcCardView:(id)arg1 didClickUI:(id)arg2 params:(id)arg3;
- (void)_transitionToState:(long long)arg1;
- (void)_startLoading;
- (void)_startSSELoadingWithMapDataID:(id)arg1;
- (void)_openSSEConnection;
- (BOOL)_shouldReconnectForSSEError:(id)arg1;
- (void)_scheduleSSEReconnectAfterGeneration:(long long)arg1 error:(id)arg2;
- (void)_resumeFailedSSELoading;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)_buildSSERequestWithMapDataID:(id)arg1 index:(long long)arg2;
- (void)_handleSSEEvent:(id)arg1;
- (id)_cursorIndexFromSSEEvent:(id)arg1;
- (void)_processRawCraftData:(id)arg1;
- (id)_applyUIInstructions:(id)arg1;
- (void)_applySingleInstruction:(id)arg1 toCardsMap:(id)arg2;
- (id)_extractCommandIdToDayIndexMapFromCraftData:(id)arg1;
- (id)_extractCommandIdToDataMapFromCraftData:(id)arg1;
- (id)_extractCommandIdToRouteNameMapFromCraftData:(id)arg1;
- (id)_tryExtractWeatherBizDataFromUI:(id)arg1;
- (void)_handleWeatherCardWithBizData:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_failWithError:(id)arg1 preserveSSEProgress:(BOOL)arg2;
- (void)_recycleInternal;
- (BOOL)_isValidCardID:(id)arg1;
- (long long)_cardTypeFromString:(id)arg1;
- (id)_baseUserInfo;
- (void)_emitLog:(id)arg1 level:(long long)arg2;
- (id)_errorWithCode:(long long)arg1 message:(id)arg2;
- (id)_effectiveReportConfig;
- (void)_syncReportConfigTo:(id)arg1;
- (void)_reportShowEvent;
- (void)_reportClickEventWithIdentifier:(id)arg1 params:(id)arg2;
- (void)_reportSlideEvent;
- (void)_reportMapInteractEventWithType:(id)arg1;
- (id)cardID;
- (void)setCardID:(id)arg1;
- (id)apiKey;
- (void)setApiKey:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)darkMode;
- (long long)fontSizeLevel;
- (double)fontSizeScaleFactor;
- (BOOL)embeddedInScrollView;
- (UIEdgeInsets)mapInteractionInsets;
- (BOOL)mapGesturesDisabled;
- (id)_cardView;
- (void)set_cardView:(id)arg1;
- (id)_requestID;
- (void)set_requestID:(id)arg1;
- (id)_cardData;
- (void)set_cardData:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (id)_sseClient;
- (void)set_sseClient:(id)arg1;
- (id)streamingUIBuffer;
- (void)setStreamingUIBuffer:(id)arg1;
- (BOOL)didReceiveTerminalEvent;
- (void)setDidReceiveTerminalEvent:(BOOL)arg1;
- (id)sseMapDataID;
- (void)setSseMapDataID:(id)arg1;
- (long long)sseCursorIndex;
- (void)setSseCursorIndex:(long long)arg1;
- (long long)sseConnectionGeneration;
- (void)setSseConnectionGeneration:(long long)arg1;
- (BOOL)canResumeSSEAfterFailure;
- (void)setCanResumeSSEAfterFailure:(BOOL)arg1;
- (BOOL)darkModeExplicitlySet;
- (void)setDarkModeExplicitlySet:(BOOL)arg1;
- (BOOL)fontSizeLevelAwaitingWidth;
- (void)setFontSizeLevelAwaitingWidth:(BOOL)arg1;
- (BOOL)embeddedInScrollViewExplicitlySet;
- (void)setEmbeddedInScrollViewExplicitlySet:(BOOL)arg1;
- (BOOL)mapInteractionInsetsExplicitlySet;
- (void)setMapInteractionInsetsExplicitlySet:(BOOL)arg1;
- (BOOL)mapGesturesDisabledExplicitlySet;
- (void)setMapGesturesDisabledExplicitlySet:(BOOL)arg1;
- (id)reportConfig;
- (void)setReportConfig:(id)arg1;
- (BOOL)didReportShow;
- (void)setDidReportShow:(BOOL)arg1;
- (void).cxx_destruct;
@end
