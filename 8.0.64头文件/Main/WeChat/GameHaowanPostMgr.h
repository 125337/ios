@interface GameHaowanPostMgr : MMUserService <MMServiceProtocol, GameHaowanUploadTaskDelegate>
{
    NSMutableDictionary * _reportEditProps; // +0x8
    GameHaowanDatabaseHelper * _databaseHelper; // +0x10
    NSMutableDictionary * _uploadTasks; // +0x18
}
- (void)startTransferOldData;
- (void)transferVideoMedias:(id)arg1 postId:(id)arg2;
- (void)transferImageMedias:(id)arg1 postId:(id)arg2;
- (id)readPostInfo;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)stopAllUploadTask;
- (void)removeAllPost;
- (BOOL)removePost:(id)arg1;
- (id)getAllPost;
- (id)getPost:(id)arg1;
- (id)publishHaowanPost:(id)arg1;
- (id)startTextPost:(id)arg1;
- (id)startMediaPost:(id)arg1;
- (id)prepareNewPost:(id)arg1 continueData:(id *)arg2;
- (void)startUploadTask:(id)arg1 postId:(id)arg2;
- (id)createUploadTask:(long long)arg1 fileList:(id)arg2;
- (void)handlePostFailed:(id)arg1 errMsg:(id)arg2 code:(long long)arg3;
- (void)handlePostSucceed:(id)arg1;
- (void)handlePostProgress:(id)arg1 progress:(float)arg2;
- (void)handlePostCanceled:(id)arg1;
- (void)uploadTask:(id)arg1 didSucceedWithResIds:(id)arg2;
- (void)uploadTask:(id)arg1 didProgressChanged:(float)arg2;
- (void)updatePostFailed:(id)arg1 error:(id)arg2;
- (BOOL)uploadTask:(id)arg1 didFailedWithError:(id)arg2 canRetry:(BOOL)arg3;
- (void)uploadTask:(id)arg1 willRetryWithCount:(unsigned long long)arg2;
- (BOOL)reachRetryLimit:(id)arg1;
- (void)sendHaowanPostRequest:(id)arg1 resIds:(id)arg2 fileList:(id)arg3;
- (id)buildPBMediaListForVideoPost:(id)arg1 fileList:(id)arg2 editFlag:(unsigned int)arg3;
- (id)buildPBMediaListForImagePost:(id)arg1 fileList:(id)arg2;
- (void)resumeVideoPost:(id)arg1 mediaItems:(id)arg2;
- (void)resumeImagePost:(id)arg1 mediaItems:(id)arg2;
- (void)trackEventAddNewPost:(id)arg1;
- (void)trackEventPostSucceed:(id)arg1 topicId:(unsigned int)arg2 postType:(long long)arg3 fileList:(id)arg4;
- (void)trackEventPostFailed:(id)arg1 errcode:(long long)arg2;
- (id)reportObjWithAction:(long long)arg1;
- (id)buildTrackEventProps:(id)arg1;
- (int)ssidForTrackEventSource:(long long)arg1;
- (id)reportEditProps;
- (void)setReportEditProps:(id)arg1;
- (id)databaseHelper;
- (void)setDatabaseHelper:(id)arg1;
- (id)uploadTasks;
- (void)setUploadTasks:(id)arg1;
- (void).cxx_destruct;
@end
