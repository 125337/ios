@interface AggregationHomePageTabInfoDataModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _hasFetchData; // +0x9
    BOOL _isFetchingData; // +0xa
    BOOL _isFirstPageRequestFinished; // +0xb
    unsigned long long _type; // +0x10
    WCFinderLiveTabInfo * _tabInfo; // +0x18
    NSData * _lastBuffer; // +0x20
    NSMutableArray * _feedVMs; // +0x28
    WCFinderNavLiveStreamCGI * _requestCgi; // +0x30
    unsigned long long _refreshInterval; // +0x38
}
- (id)initWithTabInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)resetModelState;
- (id)removeSkeletonDatas;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)feedVMs;
- (void)setFeedVMs:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (id)requestCgi;
- (void)setRequestCgi:(id)arg1;
- (unsigned long long)refreshInterval;
- (void)setRefreshInterval:(unsigned long long)arg1;
- (BOOL)isFirstPageRequestFinished;
- (void)setIsFirstPageRequestFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
