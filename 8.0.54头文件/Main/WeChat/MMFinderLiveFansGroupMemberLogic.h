@interface MMFinderLiveFansGroupMemberLogic : NSObject
{
    BOOL _isFetching; // +0x8
    unsigned int _continueFlag; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveFansGroupMemberSectionInfo * _memberSectionInfo; // +0x18
    NSData * _lastBuffer; // +0x20
    id /* block */ _completion; // +0x28
    unsigned long long _lastReqFilterType; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)fetchFansGroupMemberList:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)fetchFansGroupMemberList:(BOOL)arg1 filterType:(unsigned long long)arg2 sortType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)memberSectionInfo;
- (id)liveTask;
- (BOOL)isSelfAnchor;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setMemberSectionInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)continueFlag;
- (void)setContinueFlag:(unsigned int)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (unsigned long long)lastReqFilterType;
- (void)setLastReqFilterType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

