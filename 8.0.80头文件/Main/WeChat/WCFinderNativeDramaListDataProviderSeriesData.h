@interface WCFinderNativeDramaListDataProviderSeriesData : NSObject
{
    BOOL _downHasMore; // +0x8
    BOOL _upHasMore; // +0x9
    unsigned long long _identifier; // +0x10
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x18
    NSData * _upLastBuffer; // +0x20
    NSData * _downLastBuffer; // +0x28
    NativeDramaStreamRemindInfo * _streamRemindInfo; // +0x30
    NSArray * _tabGuideBubbleInfos; // +0x38
    unsigned long long _nextNativeDramaID; // +0x40
}
+ (id)seriesWithIdentifier:(unsigned long long)arg1;
+ (id)seriesWithJSParams:(id)arg1;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (BOOL)downHasMore;
- (void)setDownHasMore:(BOOL)arg1;
- (BOOL)upHasMore;
- (void)setUpHasMore:(BOOL)arg1;
- (id)upLastBuffer;
- (void)setUpLastBuffer:(id)arg1;
- (id)downLastBuffer;
- (void)setDownLastBuffer:(id)arg1;
- (id)streamRemindInfo;
- (void)setStreamRemindInfo:(id)arg1;
- (id)tabGuideBubbleInfos;
- (void)setTabGuideBubbleInfos:(id)arg1;
- (unsigned long long)nextNativeDramaID;
- (void)setNextNativeDramaID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
