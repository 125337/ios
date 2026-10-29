@interface WCFinderLiveCompleteReplayHelper : NSObject <MMLiveAutoGenerateReplayGuidePanelDelegate>
{
    BOOL _isAudience; // +0x8
    BOOL _openAutoShowAnchorLiveReplayPanel; // +0x9
    BOOL _hasAutoShownReplayPanel; // +0xa
    MMUIViewController * _ownerVC; // +0x10
    MMFinderLiveTask * _liveTask; // +0x18
    WCFinderLiveAudienceLogReporter * _audienceLogReporter; // +0x20
    WCFinderDataItem * _anchorReplayDataItem; // +0x28
    MMFinderLiveCompleteViewReplaySettingsPageSheet * _replaySettingsPageSheet; // +0x30
    NSString * _replayCommentVisibilityOptionWording; // +0x38
    id /* block */ _onReplayStatusChanged; // +0x40
    id /* block */ _onLiveInfoRefreshed; // +0x48
    id /* block */ _onReplayFeedFetched; // +0x50
    id /* block */ _onReplayFeedFetchFailed; // +0x58
}
- (void)openReplaySetting;
- (void)handleUserActionForReplayStatusAuditing;
- (void)fetchAndJumpToReplayFeedForAnchor;
- (void)reportReplaySettingWithType:(unsigned long long)arg1;
- (void)showCancelReplayTipPanel;
- (void)showCancelReplayConfirmPanel;
- (void)tryCancelReplay;
- (void)createReplaySettingWithCurrentStatus;
- (void)createReplaySetting:(unsigned int)arg1 isMemberLive:(BOOL)arg2 isChargableLive:(BOOL)arg3;
- (void)enableReplayWithSettings:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)handelAnchorJumpReplayFeed;
- (void)anchorJumpReplayFeed;
- (void)onAudienceReplayViewClick:(id)arg1;
- (void)fetchProfileReplayInfoWithCompletionBlock:(id /* block */)arg1;
- (void)checkAndShowAutoGenerateReplayGuidePanelWithSettings:(id)arg1;
- (void)onLiveAutoGenerateReplayGuidePanelConfirmedWithSettings:(id)arg1;
- (void)onLiveAutoGenerateReplayGuidePanelCancelled;
- (void)updateReplayStatus:(unsigned int)arg1;
- (void)logReplayStatus;
- (unsigned long long)getCurrentRefReplayObjectId;
- (id)ownerVC;
- (void)setOwnerVC:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)audienceLogReporter;
- (void)setAudienceLogReporter:(id)arg1;
- (id)anchorReplayDataItem;
- (void)setAnchorReplayDataItem:(id)arg1;
- (id)replaySettingsPageSheet;
- (void)setReplaySettingsPageSheet:(id)arg1;
- (id)replayCommentVisibilityOptionWording;
- (void)setReplayCommentVisibilityOptionWording:(id)arg1;
- (BOOL)openAutoShowAnchorLiveReplayPanel;
- (void)setOpenAutoShowAnchorLiveReplayPanel:(BOOL)arg1;
- (BOOL)hasAutoShownReplayPanel;
- (void)setHasAutoShownReplayPanel:(BOOL)arg1;
- (id /* block */)onReplayStatusChanged;
- (void)setOnReplayStatusChanged:(id /* block */)arg1;
- (id /* block */)onLiveInfoRefreshed;
- (void)setOnLiveInfoRefreshed:(id /* block */)arg1;
- (id /* block */)onReplayFeedFetched;
- (void)setOnReplayFeedFetched:(id /* block */)arg1;
- (id /* block */)onReplayFeedFetchFailed;
- (void)setOnReplayFeedFetchFailed:(id /* block */)arg1;
- (void).cxx_destruct;
@end
