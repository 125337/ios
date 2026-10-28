@interface MMMusicPostingMVContext : NSObject <MMImageLoaderObserver>
{
    BOOL _hasEditedInFixMode; // +0x8
    BOOL _hasEditedInFlexMode; // +0x9
    MMMusicMVModel * _mvModel; // +0x10
    MVStat22259 * _editInfo; // +0x18
    NSMutableDictionary * _localVideoToUploadDic; // +0x20
    id /* block */ _commitCompletion; // +0x28
    NSMutableArray * _localVideoToUploadArray; // +0x30
    NSMutableArray * _localPicToUploadArray; // +0x38
    NSString * _baseDraftLocalId; // +0x40
}
- (id)init;
- (BOOL)isReadyToPost;
- (BOOL)isDirty;
- (unsigned long long)dirtyCount;
- (BOOL)hasEdited;
- (void)setHasEdited:(BOOL)arg1;
- (void)discardPostingAtIndex:(unsigned long long)arg1;
- (void)addLocalVideoToUploadIfNeeded:(id)arg1;
- (id)firstEditedTrackItem;
- (void)commitAsDraft:(BOOL)arg1 customCover:(id)arg2 completion:(id /* block */)arg3;
- (void)calculateOriginalInfoAndCompletionInfo;
- (void)realFinishCommitmentIfCan;
- (void)finishCommitmentWithCalculatedOriginality:(float)arg1 andCompletion:(float)arg2;
- (void)finishCommitmentWithSavedLocalThumbFilename:(id)arg1;
- (void)removeUploadedLocalVideoWithId:(id)arg1;
- (void)handleUploadingFailureWithLocalVideoId:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)mvModel;
- (void)setMvModel:(id)arg1;
- (id)editInfo;
- (void)setEditInfo:(id)arg1;
- (id)localVideoToUploadDic;
- (void)setLocalVideoToUploadDic:(id)arg1;
- (id /* block */)commitCompletion;
- (void)setCommitCompletion:(id /* block */)arg1;
- (id)localVideoToUploadArray;
- (void)setLocalVideoToUploadArray:(id)arg1;
- (id)localPicToUploadArray;
- (void)setLocalPicToUploadArray:(id)arg1;
- (id)baseDraftLocalId;
- (void)setBaseDraftLocalId:(id)arg1;
- (BOOL)hasEditedInFixMode;
- (void)setHasEditedInFixMode:(BOOL)arg1;
- (BOOL)hasEditedInFlexMode;
- (void)setHasEditedInFlexMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
