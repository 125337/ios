@interface WAMainFrameChatBotEntryMgr : NSObject <WAMainFrameChatBotReportDataSource>
{
    BOOL _lastPressIsLongPress; // +0x8
    BOOL _sugCapsuleHidden; // +0x9
    BOOL _sugSectionEligibleNotified; // +0xa
    BOOL _chatBotEntryHidden; // +0xb
    BOOL _secondaryPageEntryHidden; // +0xc
    BOOL _sugRoundMiniAppOpened; // +0xd
    BOOL _voiceRoundAwaitingLaunchResult; // +0xe
    BOOL _sugRoundAwaitingLaunchResult; // +0xf
    BOOL _aiButtonGestureSwallowed; // +0x10
    BOOL _sugDirectLoading; // +0x11
    id <WAMainFrameChatBotEntryHost> _host; // +0x18
    unsigned long long _locationRefreshGPSTag; // +0x20
    unsigned long long _locationRefreshAddressTag; // +0x28
    WAMainFrameTaskBarAIUseWeAppButton * _aiUseWeAppButton; // +0x30
    WAMainFrameAIUseWeAppASRBoard * _aiUseWeAppASRBoard; // +0x38
    unsigned long long _asrBoardShowGeneration; // +0x40
    double _pressBeganMediaTime; // +0x48
    WAMainFrameChatBotSugButton * _sugCapsuleButton; // +0x50
    WAMainFrameChatBotSugSectionView * _sugSectionView; // +0x58
    NSString * _sugText; // +0x60
    NSData * _sugBypass; // +0x68
    double _lastProgress; // +0x70
    WAMainFrameChatBotReporter * _reporter; // +0x78
    NSString * _sugClickId; // +0x80
    NSString * _sugRoundVoipSessionID; // +0x88
    NSString * _voiceRoundVoipSessionID; // +0x90
    NSDictionary * _voiceRoundLatchedLaunchResult; // +0x98
    NSDictionary * _sugRoundLatchedLaunchResult; // +0xa0
    ChatBotTaskBarReportContext * _sugClickReportContext; // +0xa8
    MMTimer * _sugDirectLoadingTimer; // +0xb0
}
+ (id)sugClickDestinationForResult:(long long)arg1 errorMsg:(id)arg2;
- (id)initWithHost:(id)arg1;
- (void)dealloc;
- (void)setup;
- (void)layout;
- (void)applyProgress:(double)arg1;
- (void)applyCollapsedState;
- (void)notifySecondaryPagePresenting:(BOOL)arg1;
- (void)notifyWillOpenOtherMiniProgram;
- (void)notifyWillLeaveCurrentPage;
- (void)onPanelExpanded;
- (void)onOpenSessionReady;
- (BOOL)shouldShowSugSection;
- (void)bindSugSectionView:(id)arg1;
- (void)unbindSugSectionView;
- (id)chatBotReportSessionId;
- (BOOL)chatBotReportEntryHidden;
- (BOOL)chatBotReportSugVisible;
- (id)chatBotReportSugText;
- (id)chatBotReportSugBypass;
- (id)chatBotReportEntryText;
- (id)chatBotReportSugPositionName;
- (void)chatBotReportMarkClosingPageType:(unsigned long long)arg1;
- (void)fillXiaoWeiReportFields:(id)arg1;
- (void)prefetchCommonSug;
- (void)initAIUseWeAppButton;
- (void)initSugCapsuleButton;
- (void)layoutEntryViews;
- (void)refreshSugDisplay;
- (void)onCommonSugCacheUpdated:(id)arg1;
- (BOOL)isSugDirectTaskInFlight;
- (void)beginSugDirectLoading;
- (void)endSugDirectLoading;
- (void)interruptSugDirectLoadingIfNeeded;
- (void)onSugDirectLoadingTimeout;
- (void)handleSugDirectRoundFinishedWithResult:(long long)arg1 stage:(long long)arg2 errorMsg:(id)arg3;
- (void)showSugBusyToast;
- (void)showSugDirectOpenFailToast;
- (void)invalidateSugDirectLoadingTimer;
- (void)presentXiaoWeiHalfScreenWithSug:(id)arg1 bypass:(id)arg2;
- (void)beginAwaitVoiceMiniAppLaunchResult;
- (void)beginAwaitSugMiniAppLaunchResult;
- (void)handleMiniAppLaunchResult:(id)arg1;
- (void)finishVoiceMiniAppLaunchWaitWithSuccess:(BOOL)arg1 errorMsg:(id)arg2;
- (void)finishSugMiniAppLaunchWaitWithSuccess:(BOOL)arg1 errorMsg:(id)arg2;
- (id)aiUseWeAppASRBoard;
- (id)host;
- (void)setHost:(id)arg1;
- (unsigned long long)locationRefreshGPSTag;
- (void)setLocationRefreshGPSTag:(unsigned long long)arg1;
- (unsigned long long)locationRefreshAddressTag;
- (void)setLocationRefreshAddressTag:(unsigned long long)arg1;
- (id)aiUseWeAppButton;
- (void)setAiUseWeAppButton:(id)arg1;
- (void)setAiUseWeAppASRBoard:(id)arg1;
- (unsigned long long)asrBoardShowGeneration;
- (void)setAsrBoardShowGeneration:(unsigned long long)arg1;
- (double)pressBeganMediaTime;
- (void)setPressBeganMediaTime:(double)arg1;
- (BOOL)lastPressIsLongPress;
- (void)setLastPressIsLongPress:(BOOL)arg1;
- (id)sugCapsuleButton;
- (void)setSugCapsuleButton:(id)arg1;
- (id)sugSectionView;
- (void)setSugSectionView:(id)arg1;
- (id)sugText;
- (void)setSugText:(id)arg1;
- (id)sugBypass;
- (void)setSugBypass:(id)arg1;
- (BOOL)sugCapsuleHidden;
- (void)setSugCapsuleHidden:(BOOL)arg1;
- (BOOL)sugSectionEligibleNotified;
- (void)setSugSectionEligibleNotified:(BOOL)arg1;
- (BOOL)chatBotEntryHidden;
- (void)setChatBotEntryHidden:(BOOL)arg1;
- (BOOL)secondaryPageEntryHidden;
- (void)setSecondaryPageEntryHidden:(BOOL)arg1;
- (double)lastProgress;
- (void)setLastProgress:(double)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)sugClickId;
- (void)setSugClickId:(id)arg1;
- (BOOL)sugRoundMiniAppOpened;
- (void)setSugRoundMiniAppOpened:(BOOL)arg1;
- (id)sugRoundVoipSessionID;
- (void)setSugRoundVoipSessionID:(id)arg1;
- (id)voiceRoundVoipSessionID;
- (void)setVoiceRoundVoipSessionID:(id)arg1;
- (BOOL)voiceRoundAwaitingLaunchResult;
- (void)setVoiceRoundAwaitingLaunchResult:(BOOL)arg1;
- (id)voiceRoundLatchedLaunchResult;
- (void)setVoiceRoundLatchedLaunchResult:(id)arg1;
- (BOOL)sugRoundAwaitingLaunchResult;
- (void)setSugRoundAwaitingLaunchResult:(BOOL)arg1;
- (id)sugRoundLatchedLaunchResult;
- (void)setSugRoundLatchedLaunchResult:(id)arg1;
- (id)sugClickReportContext;
- (void)setSugClickReportContext:(id)arg1;
- (BOOL)aiButtonGestureSwallowed;
- (void)setAiButtonGestureSwallowed:(BOOL)arg1;
- (BOOL)sugDirectLoading;
- (void)setSugDirectLoading:(BOOL)arg1;
- (id)sugDirectLoadingTimer;
- (void)setSugDirectLoadingTimer:(id)arg1;
- (void).cxx_destruct;
@end
