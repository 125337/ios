@interface LiteAppJsApiOpenLiveReplayView : LiteAppJsApi <MMLiveAutoGenerateReplayGuidePanelDelegate>
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)handleOpenFinderPostGallery:(id)arg1;
- (void)handleOpenReplaySettingSheet:(id)arg1;
- (void)innerOpenReplaySettingSheet:(id)arg1 finderUserName:(id)arg2 getLiveInfoModel:(id)arg3;
- (void)enableReplayWithSettings:(id)arg1 liveInfo:(id)arg2 finderUserName:(id)arg3 getLiveInfoModel:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)handleOpenLiveReplayPage:(id)arg1;
- (void)handleOpenCancelReplayPage:(id)arg1;
- (void)showCancelReplayConfirmPanelWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2;
- (void)tryCancelReplayWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2;
- (void)onLiveAutoGenerateReplayGuidePanelConfirmedWithSettings:(id)arg1;
- (void)onLiveAutoGenerateReplayGuidePanelCancelled;
@end
