@interface CBTCoopV2TingCategoryViewModel : CBTCoopV2AsstBoardViewModel <ICBTGlobalExt>
{
    BOOL _shouldShowPresetItems; // +0x8
    BOOL _shouldPlayAutomatically; // +0x9
    BOOL _autoPlayDispatched; // +0xa
    BOOL _hostInfoDispatched; // +0xb
    BOOL _aiAutoPlayWaitingTTS; // +0xc
    BOOL _hasAudioState; // +0xd
    BOOL _lastMicrophoneOpen; // +0xe
    BOOL _lastTTSPlaying; // +0xf
    BOOL _lastPageInForeground; // +0x10
    id <CBTCoopV2TingCategoryViewModelDelegate> _customDelegate; // +0x18
    NSArray * _presetItems; // +0x20
    double _titleLabelHeightInternal; // +0x28
    double _subtitleLabelHeightInternal; // +0x30
    CGSize _layoutSizeInternal; // +0x38
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
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
- (void)onAudioStateChanged:(BOOL)arg1 isMicrophoneOpen:(BOOL)arg2 isPageInForeground:(BOOL)arg3;
- (id)shareCategoryItem;
- (id)categoryItem;
- (id)displayTitle;
- (id)displaySubtitle;
- (BOOL)usesPresetItemsStyle;
- (double)presetHeaderFooterLineHeight;
- (double)presetRowHeightForItem:(id)arg1;
- (double)presetCardHeight;
- (CGSize)layoutSize;
- (CGSize)coverSize;
- (double)titleLineHeight;
- (double)subtitleLineHeight;
- (double)contentTextHeight;
- (double)titleLabelHeight;
- (double)subtitleLabelHeight;
- (BOOL)isForwardable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (void)populateTingCategoryItemIfNeeded;
- (void)populatePresetItems;
- (id)parseTingCategoryItemFromXML:(id)arg1;
- (void)ensureLayoutMetrics;
- (double)layoutWidthForCellWidth:(double)arg1;
- (id)customDelegate;
- (void)setCustomDelegate:(id)arg1;
- (BOOL)shouldShowPresetItems;
- (void)setShouldShowPresetItems:(BOOL)arg1;
- (id)presetItems;
- (void)setPresetItems:(id)arg1;
- (BOOL)shouldPlayAutomatically;
- (void)setShouldPlayAutomatically:(BOOL)arg1;
- (CGSize)layoutSizeInternal;
- (void)setLayoutSizeInternal:(CGSize)arg1;
- (double)titleLabelHeightInternal;
- (void)setTitleLabelHeightInternal:(double)arg1;
- (double)subtitleLabelHeightInternal;
- (void)setSubtitleLabelHeightInternal:(double)arg1;
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
