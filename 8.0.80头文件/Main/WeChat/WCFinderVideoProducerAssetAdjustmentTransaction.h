@interface WCFinderVideoProducerAssetAdjustmentTransaction : NSObject
{
    NSString * _transactionID; // +0x8
    NSString * _sourceSessionGenerationID; // +0x10
    long long _route; // +0x18
    NSString * _templateID; // +0x20
    NSString * _musicID; // +0x28
    long long _state; // +0x30
    NSArray * _frozenCandidateAssetInfoList; // +0x38
    NSMutableArray * _mutableSlots; // +0x40
    NSArray * _originalSlotTokenOrder; // +0x48
    NSString * _commitGenerationID; // +0x50
}
- (id)initWithRoute:(long long)arg1 sourceSessionGenerationID:(id)arg2 templateID:(id)arg3 musicID:(id)arg4 slots:(id)arg5;
- (id)slots;
- (BOOL)isReplacementDirty;
- (BOOL)isOrderDirty;
- (BOOL)isCurrentSourceSessionGenerationID:(id)arg1;
- (BOOL)rebindSourceSessionGenerationID:(id)arg1;
- (id)slotForToken:(id)arg1;
- (BOOL)stageReplacementAssetInfo:(id)arg1 slotToken:(id)arg2;
- (BOOL)moveSlotFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)candidateAssetInfoList;
- (id)currentSlotTokenOrder;
- (id)currentOriginalOccurrenceIndexList;
- (id)beginReplacementSubmission;
- (BOOL)isCurrentReplacementSubmissionWithCommitGenerationID:(id)arg1;
- (BOOL)finishReplacementSubmissionWithCommitGenerationID:(id)arg1 success:(BOOL)arg2;
- (BOOL)finishEditing;
- (BOOL)canMutate;
- (id)findSlotForToken:(id)arg1 inSlots:(id)arg2;
- (id)description;
- (id)transactionID;
- (void)setTransactionID:(id)arg1;
- (id)sourceSessionGenerationID;
- (void)setSourceSessionGenerationID:(id)arg1;
- (long long)route;
- (void)setRoute:(long long)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)frozenCandidateAssetInfoList;
- (void)setFrozenCandidateAssetInfoList:(id)arg1;
- (id)mutableSlots;
- (void)setMutableSlots:(id)arg1;
- (id)originalSlotTokenOrder;
- (void)setOriginalSlotTokenOrder:(id)arg1;
- (id)commitGenerationID;
- (void)setCommitGenerationID:(id)arg1;
- (void).cxx_destruct;
@end
