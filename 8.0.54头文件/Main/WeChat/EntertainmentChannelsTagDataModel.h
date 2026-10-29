@interface EntertainmentChannelsTagDataModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _hasFetchData; // +0x9
    BOOL _isFetchingData; // +0xa
    BOOL _isFirstPageRequestFinished; // +0xb
    NSString * _themeTag; // +0x10
    NSData * _lastBuffer; // +0x18
    NSMutableArray * _feedVMs; // +0x20
    WCFinderBaseCgi * _requestCgi; // +0x28
    unsigned long long _refreshInterval; // +0x30
}
- (id)initWithTag:(id)arg1;
- (void)resetModelState;
- (id)themeTag;
- (void)setThemeTag:(id)arg1;
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

