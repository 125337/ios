@interface WCFinderFeedFriendsLikeListViewModel : MMObject <WCFinderFeedFriendsLikeListExt, WCFinderDataItemExt>
{
    BOOL _continueFlag; // +0x8
    int _finderObjectType; // +0xc
    int _reportScene; // +0x10
    unsigned long long _friendsLikeTotalCount; // +0x18
    NSMutableArray * _friendsLikeInfoArray; // +0x20
    id <WCFinderFeedFriendsLikeListViewModelDelegate> _delegate; // +0x28
    WCFinderDataItem * _dataItem; // +0x30
    NSString * _objectID; // +0x38
    NSString * _nonceID; // +0x40
    unsigned long long _fetchScene; // +0x48
    NSMutableSet * _likeIdSet; // +0x50
    NSData * _lastBuffer; // +0x58
}
- (id)initWithDataItem:(id)arg1 feedLikedListScene:(unsigned long long)arg2 reportScene:(int)arg3;
- (id)likeIdSet;
- (id)friendsLikeInfoArray;
- (void)getLocalFriendsLikeInfo;
- (void)fetchFirstFriendsLikeInfo;
- (void)fetchNextFriendsLikeInfo;
- (void)friendsLikeOptionWithObjectID:(id)arg1 index:(unsigned long long)arg2 optionType:(unsigned long long)arg3;
- (void)friendsLikeDoLikeWithIndex:(unsigned long long)arg1 doLike:(BOOL)arg2;
- (void)fetchFriendsLikeInfoIsFirstPage:(BOOL)arg1;
- (id)convertFinderLikeInfoToFinderComment:(id)arg1;
- (void)notifyAddedRefuseFriends;
- (id)titleFormatString;
- (id)deafultTitleFormatString;
- (unsigned long long)likeInfoIndexWithWXUsername:(id)arg1;
- (void)onFinderFeedFriendsLikeStatusChangedWithObjectID:(id)arg1 index:(unsigned long long)arg2 likeStatus:(BOOL)arg3;
- (void)onFinderFeedLocalFriendsLikeListDataUpdateByKeyExtension:(id)arg1;
- (void)onFinderFeedFriendsLikeUserBlockedWithWXUsername:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (unsigned long long)friendsLikeTotalCount;
- (void)setFriendsLikeTotalCount:(unsigned long long)arg1;
- (void)setFriendsLikeInfoArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)finderObjectType;
- (void)setFinderObjectType:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (unsigned long long)fetchScene;
- (void)setFetchScene:(unsigned long long)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (void)setLikeIdSet:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
