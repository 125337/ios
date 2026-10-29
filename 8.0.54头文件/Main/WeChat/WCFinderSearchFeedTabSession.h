@interface WCFinderSearchFeedTabSession : NSObject
{
    BOOL _active; // +0x8
    BOOL _continueFlag; // +0x9
    BOOL _isLoading; // +0xa
    BOOL _isError; // +0xb
    int _inlineSearchScene; // +0xc
    NSString * _tabName; // +0x10
    NSData * _lastBuff; // +0x18
    long long _reportTabId; // +0x20
    NSString * _reqId; // +0x28
    NSMutableArray * _mutFeedItems; // +0x30
}
- (id)feedItems;
- (id)mutFeedItems;
- (void)setFeedItems:(id)arg1;
- (_NSRange)appendDatas:(id)arg1;
- (id)description;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (long long)reportTabId;
- (void)setReportTabId:(long long)arg1;
- (int)inlineSearchScene;
- (void)setInlineSearchScene:(int)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isError;
- (void)setIsError:(BOOL)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (void)setMutFeedItems:(id)arg1;
- (void).cxx_destruct;
@end

