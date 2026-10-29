@interface MMMusicMVPostDataService : MMUserService <MMMusicMVClipUploaderDelegate, IMMMusicMVCGIService, WCFinderCreateCoordinatorDelegate, MMServiceProtocol>
{
    BOOL _saveAsDraft; // +0x8
    BOOL _isDraftEditingMode; // +0x9
    MMMusicPostingMVContext * _currentContext; // +0x10
    UIImage * _customCoverImage; // +0x18
    NSMutableArray * _pendingContext; // +0x20
    NSMutableArray * _localDraftModels; // +0x28
    MMMusicMVClipUploader * _clipUploader; // +0x30
    MMMusicLiveCGIMgr * _cgiMgr; // +0x38
    UIViewController * _currentVC; // +0x40
    WCFinderCreateCoordinator * _userCreator; // +0x48
}
- (void)cancelPublishingInViewController:(id)arg1;
- (void)cancelPublishingInViewController:(id)arg1 keepDraftCompletion:(id /* block */)arg2 notKeepDraftCompletion:(id /* block */)arg3;
- (id)commitCreationInViewController:(id)arg1 customCover:(id)arg2;
- (id)commitCreationAsDraft:(BOOL)arg1;
- (id)realCommitCreation:(BOOL)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)reportFinderPostWithPostState:(unsigned long long)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)createPostingContextWithBaseMVModel:(id)arg1;
- (id)commitPostingContext:(BOOL)arg1 customCover:(id)arg2;
- (void)discardPostingContext;
- (void)addVideoForTrackAt:(unsigned long long)arg1 withFinderVideo:(id)arg2 clipOffsetMs:(unsigned long long)arg3;
- (void)addVideoForTrackAt:(unsigned long long)arg1 localVideoPath:(id)arg2 clipOffsetMs:(unsigned long long)arg3;
- (id)getLocalMVModelWithLocalId:(id)arg1;
- (id)getLocalMVFinderItemList;
- (id)getLocalMVFinderItem:(id)arg1;
- (BOOL)tryPostLocalMVModelWithLocalId:(id)arg1;
- (BOOL)deleteLocalMVModelWithLocalId:(id)arg1;
- (id)getDraftMVFinderItemList;
- (void)deleteAllDraft;
- (BOOL)deleteDraftWithLocalId:(id)arg1 needNotify:(BOOL)arg2;
- (void)handleClipFailWithVideoLocalId:(id)arg1;
- (void)postPendingContext;
- (void)postMVIfReady:(id)arg1;
- (void)postLocalVideo:(id)arg1;
- (void)postLocalPic:(id)arg1;
- (id)localDraftModels;
- (void)deletePostingContext:(id)arg1;
- (void)syncLocalModelToMMKV;
- (void)syncDraftToMMKV;
- (id)findContextContaisUploadingClipWithId:(id)arg1;
- (void)updateFeatureListForMVModel:(id)arg1 completion:(id /* block */)arg2;
- (void)fillFeatureListWithFinderDataItem:(id)arg1 trackItem:(id)arg2;
- (void)onClipUploadSuccessWithClipId:(id)arg1 finderDataItem:(id)arg2;
- (void)onClipUploadFailWithClipId:(id)arg1;
- (void)onMusicMVCGISerivcePostMVSuccess:(id)arg1;
- (void)onMusicMVCGISerivcePostMVFailed:(id)arg1;
- (id)currentContext;
- (void)setCurrentContext:(id)arg1;
- (id)customCoverImage;
- (void)setCustomCoverImage:(id)arg1;
- (id)pendingContext;
- (void)setPendingContext:(id)arg1;
- (void)setLocalDraftModels:(id)arg1;
- (id)clipUploader;
- (void)setClipUploader:(id)arg1;
- (id)cgiMgr;
- (void)setCgiMgr:(id)arg1;
- (BOOL)saveAsDraft;
- (void)setSaveAsDraft:(BOOL)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (BOOL)isDraftEditingMode;
- (void)setIsDraftEditingMode:(BOOL)arg1;
- (id)userCreator;
- (void)setUserCreator:(id)arg1;
- (void).cxx_destruct;
@end

