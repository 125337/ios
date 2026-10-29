@interface WCFinderLikeListFlowViewModel : NSObject <WCFinderDataItemExt, WCFinderMegaVideoDataExt>
{
    BOOL _isFetchingData; // +0x8
    BOOL _continueFlag; // +0x9
    id <WCFinderLikeListFlowViewModelDelegate> _delegate; // +0x10
    unsigned long long _refreshTime; // +0x18
    unsigned long long _finderTotalCount; // +0x20
    unsigned long long _megavideoTotalCount; // +0x28
    NSMutableArray * _contentVMArray; // +0x30
    WCFinderMegalikeViewModel * _megaVideoViewModel; // +0x38
    unsigned long long _state; // +0x40
    NSData * _lastBuf; // +0x48
    unsigned long long _totalCount; // +0x50
}
- (id)init;
- (unsigned long long)likeTotalCount;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (BOOL)hasMoreData;
- (void)fetchServerDataWithLastBuffer:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)getLocalFirstPageData;
- (id)generateLikeListViewModel;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (void)onFinderMegaVideoLikeStatusChangedRet:(BOOL)arg1 videoId:(id)arg2 isLike:(BOOL)arg3;
- (void)onFinderMegaVideoDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (unsigned long long)finderTotalCount;
- (void)setFinderTotalCount:(unsigned long long)arg1;
- (unsigned long long)megavideoTotalCount;
- (void)setMegavideoTotalCount:(unsigned long long)arg1;
- (id)contentVMArray;
- (void)setContentVMArray:(id)arg1;
- (id)megaVideoViewModel;
- (void)setMegaVideoViewModel:(id)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

