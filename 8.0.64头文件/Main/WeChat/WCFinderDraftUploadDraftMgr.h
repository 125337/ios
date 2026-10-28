@interface WCFinderDraftUploadDraftMgr : NSObject <WCFinderDraftUploadProgressDelegate, WCFinderPostDataItemExt, WCFinderUploadCdnMgrExt>
{
    id <WCFinderDraftUploadDraftMgrDelegate> _delegate; // +0x8
    WCFinderUploadCdnMgr * _uploadMgr; // +0x10
    NSMutableDictionary * _progressMap; // +0x18
    NSMutableArray * _pendingTasks; // +0x20
}
- (id)init;
- (void)bindProgress:(id)arg1 progress:(id)arg2;
- (id)progressForDraftId:(id)arg1;
- (void)uploadDraft:(id)arg1;
- (void)deleteDraft:(id)arg1;
- (void)deleteTaskWithDraft:(id)arg1;
- (void)uploadFeedDraft:(id)arg1 subTask:(id)arg2;
- (void)doUploadFeedDraft:(id)arg1;
- (void)finishUploadFeedDraft:(id)arg1 infos:(id)arg2;
- (void)failedPostDraft:(id)arg1 infos:(id)arg2;
- (void)uploadBackgroundLongVideoDraft:(id)arg1;
- (void)checkLongVideoCompress:(id)arg1;
- (void)uploadMusicDraft:(id)arg1;
- (id)prepareMVTrackItemsForDraft:(id)arg1;
- (void)doPostMusicDraft:(id)arg1;
- (void)finishUploadMVDraft:(id)arg1 infos:(id)arg2;
- (void)doPostMusicTrackItem:(id)arg1;
- (void)doPostMusicTrackPicItem:(id)arg1;
- (void)doPostMusicTrackVideoItem:(id)arg1;
- (void)finishUploadMusicTrackItem:(id)arg1 infos:(id)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderDraftPostSessionSuccess:(id)arg1 draftId:(id)arg2;
- (void)onFinderDraftPostSessionFailedWithErrorType:(long long)arg1 draftId:(id)arg2;
- (void)onTaskDoneWithId:(id)arg1 info:(id)arg2;
- (void)onTaskDone:(id)arg1 info:(id)arg2;
- (void)onTaskFailedWithId:(id)arg1 info:(id)arg2;
- (void)onTaskFailed:(id)arg1 info:(id)arg2;
- (id)currentDraftTask;
- (void)tryUploadDraftTask;
- (void)onFinderUploadMgrIdle:(id)arg1;
- (void)onProgressValueDidUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)uploadMgr;
- (void)setUploadMgr:(id)arg1;
- (id)progressMap;
- (void)setProgressMap:(id)arg1;
- (id)pendingTasks;
- (void)setPendingTasks:(id)arg1;
- (void).cxx_destruct;
@end
