@interface WCFinderProfileNewLifePageDataProvider : NSObject <WCFinderDataItemExt, WCFinderPostDataItemExt>
{
    BOOL _author; // +0x8
    BOOL _selfUser; // +0x9
    BOOL _skipFirstPage; // +0xa
    BOOL _hasMore; // +0xb
    int _scene; // +0xc
    int _fetchUserPageScene; // +0x10
    id /* block */ _reloadHandler; // +0x18
    id /* block */ _appendHandler; // +0x20
    id /* block */ _deleteHandler; // +0x28
    id /* block */ _moveHandler; // +0x30
    id /* block */ _postHandler; // +0x38
    NSString * _finderUsername; // +0x40
    NSMutableArray * _innerCardViewModelList; // +0x48
    NSData * _lastBuffer; // +0x50
    long long _likeCount; // +0x58
    long long _globalFavoriteCount; // +0x60
    long long _shareCount; // +0x68
    long long _heartLikeCount; // +0x70
    long long _totalFeedCount; // +0x78
}
+ (long long)indexForLocalInsertion:(id)arg1;
+ (BOOL)mergeData:(id)arg1 fromLocalData:(id)arg2;
+ (long long)indexForPostSuccessInsertion:(id)arg1;
+ (BOOL)checkSelfFinderUsername:(id)arg1;
+ (id)cardViewModelFromDataItem:(id)arg1 scene:(int)arg2 isAuthor:(BOOL)arg3 isSelfUser:(BOOL)arg4;
- (id)initWithFinderUsername:(id)arg1 isAuthor:(BOOL)arg2;
- (id)cardViewModelList;
- (void)prepare;
- (void)loadFromPrefetchedResponse:(id)arg1;
- (BOOL)attemptLoadFromCache;
- (void)updateCache;
- (id)getLocalCardViewModelList;
- (id)createUserPageParams;
- (void)requestDataWithFirstPage:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)cardViewModelFromDataItem:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onNewLifePostSessionStartCompress:(id)arg1;
- (void)onNewLifePostSessionStartUpload:(id)arg1;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)fetchUserPageScene;
- (void)setFetchUserPageScene:(int)arg1;
- (id /* block */)reloadHandler;
- (void)setReloadHandler:(id /* block */)arg1;
- (id /* block */)appendHandler;
- (void)setAppendHandler:(id /* block */)arg1;
- (id /* block */)deleteHandler;
- (void)setDeleteHandler:(id /* block */)arg1;
- (id /* block */)moveHandler;
- (void)setMoveHandler:(id /* block */)arg1;
- (id /* block */)postHandler;
- (void)setPostHandler:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (BOOL)isAuthor;
- (void)setAuthor:(BOOL)arg1;
- (BOOL)isSelfUser;
- (void)setSelfUser:(BOOL)arg1;
- (id)innerCardViewModelList;
- (void)setInnerCardViewModelList:(id)arg1;
- (BOOL)skipFirstPage;
- (void)setSkipFirstPage:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (long long)globalFavoriteCount;
- (void)setGlobalFavoriteCount:(long long)arg1;
- (long long)shareCount;
- (void)setShareCount:(long long)arg1;
- (long long)heartLikeCount;
- (void)setHeartLikeCount:(long long)arg1;
- (long long)totalFeedCount;
- (void)setTotalFeedCount:(long long)arg1;
- (void).cxx_destruct;
@end

