@interface MMFinderLiveFeedFriendsLikeListViewModel : MMObject <WCFinderFeedFriendsLikeListExt>
{
    int _finderObjectType; // +0x8
    int _reportScene; // +0xc
    unsigned long long _friendsLikeTotalCount; // +0x10
    NSMutableArray * _friendsLikeInfoArray; // +0x18
    id <MMFinderLiveFeedFriendsLikeListViewModelDelegate> _delegate; // +0x20
    NSString * _objectID; // +0x28
    NSString * _nonceID; // +0x30
    NSData * _lastBuffer; // +0x38
    NSArray * _likeList; // +0x40
    WCFinderDataItem * _dataItem; // +0x48
}
- (id)initWithDataItem:(id)arg1 likeList:(id)arg2 reportScene:(int)arg3;
- (id)friendsLikeInfoArray;
- (void)getLocalFriendsLikeInfo;
- (id)convertFinderLikeInfoToFinderComment:(id)arg1;
- (id)titleFormatString;
- (id)deafultTitleFormatString;
- (unsigned long long)likeInfoIndexWithWXUsername:(id)arg1;
- (void)onFinderFeedLocalFriendsLikeListDataUpdateByKeyExtension:(id)arg1;
- (unsigned long long)friendsLikeTotalCount;
- (void)setFriendsLikeTotalCount:(unsigned long long)arg1;
- (void)setFriendsLikeInfoArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)finderObjectType;
- (void)setFinderObjectType:(int)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)likeList;
- (void)setLikeList:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
