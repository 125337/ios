@interface WCFinderLandScapeVideoViewModel : NSObject <ILVMinimizeContextModel>
{
    BOOL _hasGetFirstPlayableItem; // +0x8
    BOOL _continueflag; // +0x9
    BOOL _listLoading; // +0xa
    BOOL _itemLoading; // +0xb
    BOOL _isFetchingContinuePlay; // +0xc
    id <WCFinderLandScapeVideoVMDelegate> _delegate; // +0x10
    NSString * _tid; // +0x18
    WCFinderFeedContentVM * _enterContentVM; // +0x20
    WCFinderFeedContentVM * _currentPlayContentVM; // +0x28
    WCFinderLandScapeVCParams * _params; // +0x30
    NSString * _encrtptTid; // +0x38
    NSString * _nonceId; // +0x40
    NSMutableArray * _contentVMs; // +0x48
    NSMutableSet * _tidSet; // +0x50
    NSData * _lastBuf; // +0x58
    NSData * _continuePlayLastBuf; // +0x60
    NSMutableArray * _continuePlayContentVMs; // +0x68
    WCFinderDataItem * _enterFinderDataItem; // +0x70
}
+ (int)getCommentScene;
- (id)playingContentVM;
- (id)nextContentVM;
- (void)updatePlayingContentVM:(id)arg1 isFromContinuePlay:(BOOL)arg2;
- (void)fetchContinuePlayFeed;
- (id)openParam;
- (int)listType;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (id)initWithEncryptTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (id)initWithFinderDataItem:(id)arg1 params:(id)arg2;
- (void)_baseInit;
- (BOOL)getLocalData;
- (void)fetchDataItem;
- (void)fetchDataItemAndReleatedList;
- (void)_fetchDataItemAndGetReleatedList:(BOOL)arg1;
- (void)fetchReleatedDataItem;
- (void)fetchReleatedDataItemWithLongVideoContext:(id)arg1;
- (id)genLocationInfo;
- (void)preFetchContinuePlayFeed;
- (BOOL)isLoading;
- (id)genContentVMWithDataItem:(id)arg1;
- (void)appendDataItem:(id)arg1;
- (unsigned long long)dataCount;
- (id)contentVmAtIndex:(unsigned long long)arg1;
- (id)nextContinuePlayContentVM:(unsigned long long)arg1;
- (long long)indexAtContentVM:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (long long)nextContinuePlayableFeedIndexOfTid:(id)arg1;
- (void)updateCurrentPlayContentVM:(id)arg1;
- (void)removeAllDatas;
- (void)cleanContinuePlayData;
- (void)refreshAfterSelectContentVM:(id)arg1;
- (id)genLongVideoContextWithAddTopFeeds:(id)arg1;
- (void)handleFetchDataCgiFailErrCode:(int)arg1 baseErrMsg:(id)arg2;
- (id)tidSet;
- (id)contentVMs;
- (id)continuePlayContentVMs;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)enterContentVM;
- (void)setEnterContentVM:(id)arg1;
- (id)currentPlayContentVM;
- (void)setCurrentPlayContentVM:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)hasGetFirstPlayableItem;
- (void)setHasGetFirstPlayableItem:(BOOL)arg1;
- (id)encrtptTid;
- (void)setEncrtptTid:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (void)setContentVMs:(id)arg1;
- (void)setTidSet:(id)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (BOOL)continueflag;
- (void)setContinueflag:(BOOL)arg1;
- (BOOL)listLoading;
- (void)setListLoading:(BOOL)arg1;
- (BOOL)itemLoading;
- (void)setItemLoading:(BOOL)arg1;
- (BOOL)isFetchingContinuePlay;
- (void)setIsFetchingContinuePlay:(BOOL)arg1;
- (id)continuePlayLastBuf;
- (void)setContinuePlayLastBuf:(id)arg1;
- (void)setContinuePlayContentVMs:(id)arg1;
- (id)enterFinderDataItem;
- (void)setEnterFinderDataItem:(id)arg1;
- (void).cxx_destruct;
@end
