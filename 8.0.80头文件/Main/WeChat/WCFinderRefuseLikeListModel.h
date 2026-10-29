@interface WCFinderRefuseLikeListModel : NSObject <WCFinderContactExt>
{
    id <WCFinderRefuseLikeListModelDelegate> _delegate; // +0x8
    NSMutableArray * _contactArray; // +0x10
    NSMutableArray * _currentModTypeInfoList; // +0x18
    NSMutableArray * _failModTypeInfoList; // +0x20
    NSMutableDictionary * _retryModTypeInfoDic; // +0x28
}
- (id)init;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (void)friendsLikeOptionWithContact:(id)arg1 objectID:(id)arg2 optionType:(unsigned long long)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)friendsLikeOptionWithObjectID:(id)arg1 addContacts:(id)arg2 deleteContacts:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)editBlockFriendLikeWithObjectID:(id)arg1 addContacts:(id)arg2 removeContacts:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)checkQueueWithObjectID:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)handleModContactResponse:(id)arg1 objectID:(id)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (id)convertWCFinderContactToCContact:(id)arg1;
- (unsigned long long)getSelectedOnceNumber;
- (unsigned long long)getMaxBatchOnceNumber;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contactArray;
- (void)setContactArray:(id)arg1;
- (id)currentModTypeInfoList;
- (void)setCurrentModTypeInfoList:(id)arg1;
- (id)failModTypeInfoList;
- (void)setFailModTypeInfoList:(id)arg1;
- (id)retryModTypeInfoDic;
- (void)setRetryModTypeInfoDic:(id)arg1;
- (void).cxx_destruct;
@end
