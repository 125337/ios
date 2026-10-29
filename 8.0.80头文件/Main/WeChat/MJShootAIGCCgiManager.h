@interface MJShootAIGCCgiManager : MMUserService <MMServiceProtocol>
{
    unsigned int _postEnterScene; // +0x8
}
+ (id)defaultNetworkingMetaData;
+ (id)userMediaFileAssetWithAIGCSubmitRequest:(id)arg1;
+ (id)buildQueryResponseWithTaskInfo:(id)arg1 queryInterval:(unsigned int)arg2 queryMaxTimes:(unsigned int)arg3 isFinished:(BOOL)arg4 contextBuff:(id)arg5 assetList:(id)arg6;
+ (BOOL)canMapAIGCResultCodeWithErrorCode:(int)arg1;
+ (unsigned long long)mapAIGCResultCodeWithErrorCode:(int)arg1;
+ (unsigned long long)mapMJAIMediaType:(int)arg1;
+ (unsigned long long)mapMJContentSpliceType:(int)arg1;
- (void)submitAIGCRequest:(id)arg1 faceIDUsed:(BOOL)arg2 feedID:(unsigned long long)arg3;
- (void)queryAIGCWithTaskInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)queryAIGCWithTaskInfo:(id)arg1;
- (void)cancelAIGCWithTaskInfo:(id)arg1 reasonType:(int)arg2;
- (void)modAIGCTaskRequesWithTaskID:(id)arg1 mjDraftID:(id)arg2 coverImgURL:(id)arg3 successfulBlock:(id /* block */)arg4 failedBlock:(id /* block */)arg5;
- (unsigned int)postEnterScene;
- (void)setPostEnterScene:(unsigned int)arg1;
@end
