@interface MMFinderLiveCommentDataAppendLogic : NSObject
{
    MMFinderLiveTaskId * _taskId; // +0x8
    FinderLiveBoxId * _boxIdObj; // +0x10
}
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;
- (id)finderLiveTask;
- (id)commentDataMgr;
- (id)appendCommentContentFromMySelf:(id)arg1 toDataItem:(id)arg2 callback:(id /* block */)arg3 extra:(id)arg4;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 callback:(id /* block */)arg4 extra:(id)arg5;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3 poiAddrSubStr:(id)arg4 callback:(id /* block */)arg5 extra:(id)arg6;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)boxIdObj;
- (void)setBoxIdObj:(id)arg1;
- (void).cxx_destruct;
@end

