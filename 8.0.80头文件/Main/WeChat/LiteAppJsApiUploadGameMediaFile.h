@interface LiteAppJsApiUploadGameMediaFile : LiteAppJsApi <GameHaowanUploadTaskDelegate>
{
    GameHaowanUploadTask * _uploadTask; // +0x20
    long long _postType; // +0x28
    NSString * _identifier; // +0x30
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)createUploadTask:(long long)arg1 fileList:(id)arg2;
- (id)buildTrackEventProps:(id)arg1 info:(id)arg2;
- (int)ssidForTrackEventSource:(long long)arg1;
- (id)generatePostId;
- (id)buildMediaList:(id)arg1 postType:(long long)arg2 errmsg:(id *)arg3;
- (void)uploadTask:(id)arg1 didSucceedWithResIds:(id)arg2;
- (void)uploadTask:(id)arg1 didProgressChanged:(float)arg2;
- (void)updateUploadFailed:(id)arg1 error:(id)arg2;
- (BOOL)uploadTask:(id)arg1 didFailedWithError:(id)arg2 canRetry:(BOOL)arg3;
- (id)uploadTask;
- (void)setUploadTask:(id)arg1;
- (long long)postType;
- (void)setPostType:(long long)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
