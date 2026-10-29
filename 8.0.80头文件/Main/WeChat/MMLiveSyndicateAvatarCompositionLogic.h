@interface MMLiveSyndicateAvatarCompositionLogic : NSObject
{
    unsigned long long _uploadStatus; // +0x8
    NSString * _compositedAvatarUri; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    id /* block */ _completionBlock; // +0x20
}
- (id)initWithMemberAvatars:(id)arg1;
- (void)attachCompositedAvatarToLiveWithTaskId:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)beginCompositionAndUploadWithMemberAvatars:(id)arg1;
- (void)attachCompositedAvatarToLiveObjectImplWithTaskId:(id)arg1 avatarUri:(id)arg2 completionBlock:(id /* block */)arg3;
- (unsigned long long)uploadStatus;
- (void)setUploadStatus:(unsigned long long)arg1;
- (id)compositedAvatarUri;
- (void)setCompositedAvatarUri:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
