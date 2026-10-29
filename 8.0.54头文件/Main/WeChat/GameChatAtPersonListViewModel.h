@interface GameChatAtPersonListViewModel : NSObject
{
    BOOL _isPreloadDB; // +0x8
    BOOL _isFirstShow; // +0x9
    id <GCAtPersonListViewModelDelegate> _delegate; // +0x10
    id <GCAtPersonListViewModelViewDelegate> _viewDelegate; // +0x18
    NSArray * _allAndRobotModelArr; // +0x20
    NSMutableArray * _recentAtArray; // +0x28
    NSMutableArray * _managerArray; // +0x30
    NSMutableArray * _otherMemberArray; // +0x38
    NSString * _chatRoomName; // +0x40
    NSString * _myUserName; // +0x48
    NSArray * _adminNameList; // +0x50
    NSMutableSet * _otherMemberNameSet; // +0x58
    NSString * _ownerUserName; // +0x60
    NSObject<OS_dispatch_queue> * _requestQueue; // +0x68
    double _startTime; // +0x70
    double _fullUpdateStartTime; // +0x78
    double _fullUpdateCostTime; // +0x80
}
- (id)initWithChatRoomName:(id)arg1;
- (void)setOwnerUserName:(id)arg1 andAdminNameList:(id)arg2;
- (BOOL)isOwner;
- (void)delayPreloadAtListData:(long long)arg1;
- (void)loadLocalAtListData:(BOOL)arg1;
- (BOOL)checkFallInto24Hour;
- (void)requestAtListData;
- (void)handleAllMemeberNameListResponse:(id)arg1 lastVersion:(id)arg2;
- (id)searchList:(id)arg1;
- (void)requestRecentlyAtList;
- (void)reloadOtherMemberArray;
- (id)getAtModelFromContact:(id)arg1;
- (id)getAtModelFromSimpleData:(id)arg1;
- (BOOL)isAllMemberShow;
- (void)recordAtAll;
- (double)canAtAllLeftTime;
- (id)getPullVersionKey;
- (id)get24HourCheckKey;
- (id)getAtAllLastTimeKey;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)allAndRobotModelArr;
- (void)setAllAndRobotModelArr:(id)arg1;
- (id)recentAtArray;
- (void)setRecentAtArray:(id)arg1;
- (id)managerArray;
- (void)setManagerArray:(id)arg1;
- (id)otherMemberArray;
- (void)setOtherMemberArray:(id)arg1;
- (id)chatRoomName;
- (id)myUserName;
- (void)setMyUserName:(id)arg1;
- (id)adminNameList;
- (void)setAdminNameList:(id)arg1;
- (id)otherMemberNameSet;
- (void)setOtherMemberNameSet:(id)arg1;
- (BOOL)isPreloadDB;
- (void)setIsPreloadDB:(BOOL)arg1;
- (id)ownerUserName;
- (void)setOwnerUserName:(id)arg1;
- (id)requestQueue;
- (void)setRequestQueue:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (BOOL)isFirstShow;
- (void)setIsFirstShow:(BOOL)arg1;
- (double)fullUpdateStartTime;
- (void)setFullUpdateStartTime:(double)arg1;
- (double)fullUpdateCostTime;
- (void)setFullUpdateCostTime:(double)arg1;
- (void).cxx_destruct;
@end

