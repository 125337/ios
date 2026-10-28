@interface WCFinderFriendsAlsoFollowViewModel : NSObject
{
    BOOL _hasMoreData; // +0x8
    int _scene; // +0xc
    int _commentScene; // +0x10
    id <WCFinderFriendsAlsoFollowViewModelDelegate> _delegate; // +0x18
    long long _firstPageCount; // +0x20
    NSString * _username; // +0x28
    NSString * _fromUsername; // +0x30
    NSMutableArray * _dataInfos; // +0x38
    NSData * _lastBuf; // +0x40
    NSMutableDictionary * _pendingFollowStateMap; // +0x48
}
- (id)initWithUsername:(id)arg1 scene:(int)arg2 fromUsername:(id)arg3 commentScene:(int)arg4;
- (void)fetchDataWithCompletion:(id /* block */)arg1;
- (void)refretchDataWithCompletion:(id /* block */)arg1;
- (void)fetchDataWithCompletion:(id /* block */)arg1 isFirstPage:(BOOL)arg2;
- (void)followContactAtIndex:(unsigned long long)arg1 followAction:(unsigned long long)arg2;
- (void)cleanPendingFollowState:(unsigned long long)arg1 username:(id)arg2;
- (id)dataAtIndex:(unsigned long long)arg1;
- (long long)indexOfContact:(id)arg1;
- (unsigned long long)dataCount;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)changeContactState:(id)arg1;
- (int)feedViewControllerScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (long long)firstPageCount;
- (void)setFirstPageCount:(long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)dataInfos;
- (void)setDataInfos:(id)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (id)pendingFollowStateMap;
- (void)setPendingFollowStateMap:(id)arg1;
- (void).cxx_destruct;
@end
