@interface CBTCoopV2TingMusicViewModel : CBTCoopV2AsstBoardViewModel <ICBTGlobalExt>
{
    BOOL _shouldPlayMusicAutomatically; // +0x8
    BOOL _autoPlayDispatched; // +0x9
    BOOL _hostInfoDispatched; // +0xa
    BOOL _aiAutoPlayWaitingTTS; // +0xb
    BOOL _hasAudioState; // +0xc
    BOOL _lastMicrophoneOpen; // +0xd
    BOOL _lastTTSPlaying; // +0xe
    BOOL _lastPageInForeground; // +0xf
    id <CBTCoopV2TingMusicViewModelDelegate> _customDelegate; // +0x10
    TingItem * _tingItem; // +0x18
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)didFillHostInfo:(id)arg1;
- (BOOL)_canPlayImmediatelyAfterTTSFinished;
- (id)_autoPlayReportContext;
- (void)reportAIAutoPlayShownIfNeeded;
- (void)reportAIAutoPlayPlayed;
- (id)_autoPlayPolicyKey;
- (void)_reportAIAutoPlayTerminalExpired;
- (void)_reportAIAutoPlayTerminalAlreadyPlayed;
- (void)reportAIAutoPlayTerminalOnDeallocIfNeeded;
- (void)dispatchHostInfoForStandaloneCardIfNeeded;
- (void)dealloc;
- (void)onAudioStateChanged:(BOOL)arg1 isMicrophoneOpen:(BOOL)arg2 isPageInForeground:(BOOL)arg3;
- (BOOL)isMusic;
- (BOOL)isMpAudio;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (CGSize)musicCardSizeForCellWidth:(double)arg1;
- (double)musicCardHeight;
- (double)coverSize;
- (id)getCellReuseId;
- (void)populateTingListenItemIfNeeded;
- (id)parseTingListenItemFromXML:(id)arg1;
- (id)customDelegate;
- (void)setCustomDelegate:(id)arg1;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (BOOL)shouldPlayMusicAutomatically;
- (void)setShouldPlayMusicAutomatically:(BOOL)arg1;
- (BOOL)autoPlayDispatched;
- (void)setAutoPlayDispatched:(BOOL)arg1;
- (BOOL)hostInfoDispatched;
- (void)setHostInfoDispatched:(BOOL)arg1;
- (BOOL)aiAutoPlayWaitingTTS;
- (void)setAiAutoPlayWaitingTTS:(BOOL)arg1;
- (BOOL)hasAudioState;
- (void)setHasAudioState:(BOOL)arg1;
- (BOOL)lastMicrophoneOpen;
- (void)setLastMicrophoneOpen:(BOOL)arg1;
- (BOOL)lastTTSPlaying;
- (void)setLastTTSPlaying:(BOOL)arg1;
- (BOOL)lastPageInForeground;
- (void)setLastPageInForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
