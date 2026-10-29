@interface WCFinderLongVideoListViewModel : NSObject <WCFinderSeeLaterExt>
{
    BOOL _continueFlag; // +0x8
    BOOL _isFetchingData; // +0x9
    BOOL _seeLaterContinueFlag; // +0xa
    WCFinderFeedArray * _dataSource; // +0x10
    NSData * _lastBuffer; // +0x18
    NSMutableDictionary * _cellSizeDictionary; // +0x20
    id <WCFinderLongVideoListViewModelDelegate> _delegate; // +0x28
    unsigned long long _prefetchLastFeedCount; // +0x30
    AnyPromise * _seeLaterPromise; // +0x38
    WCFinderFeedArray * _seeLaterFeedArray; // +0x40
    NSData * _seeLaterLastBuffer; // +0x48
    NSString * _seeLaterSessionID; // +0x50
    unsigned long long _refreshNum; // +0x58
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)requestSeeLaterData:(unsigned long long)arg1 finderCtrlInfo:(id)arg2;
- (void)requestSeeLaterData:(unsigned long long)arg1 finderCtrlInfo:(id)arg2 needCallDelegate:(BOOL)arg3;
- (void)requestLongVideoData:(unsigned long long)arg1 finderCtrlInfo:(id)arg2;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)requestDataWithPullType:(unsigned long long)arg1 finderCtrlInfo:(id)arg2;
- (id)snapShot;
- (id)seeLaterContentVM;
- (BOOL)shouldShowMoreSeeLater;
- (id)genSeeLaterListVM;
- (int)commentScene;
- (void)onSeeLaterStateChanged:(BOOL)arg1 withDataItem:(id)arg2;
- (void)deleteContentVM:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMAtDataIndex:(unsigned long long)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)cellSizeDictionary;
- (void)setCellSizeDictionary:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)prefetchLastFeedCount;
- (void)setPrefetchLastFeedCount:(unsigned long long)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)seeLaterPromise;
- (void)setSeeLaterPromise:(id)arg1;
- (id)seeLaterFeedArray;
- (void)setSeeLaterFeedArray:(id)arg1;
- (BOOL)seeLaterContinueFlag;
- (void)setSeeLaterContinueFlag:(BOOL)arg1;
- (id)seeLaterLastBuffer;
- (void)setSeeLaterLastBuffer:(id)arg1;
- (id)seeLaterSessionID;
- (void)setSeeLaterSessionID:(id)arg1;
- (unsigned long long)refreshNum;
- (void)setRefreshNum:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

