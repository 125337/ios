@interface WCFinderHotWordDataProvider : NSObject <WCFinderSearchDataProvider, WCFinderSearchDataProviderDelegate>
{
    id <WCFinderSearchDataProviderDelegate> _delegate; // +0x8
    NSMutableArray * _contentVMS; // +0x10
    WCFinderHotWordFetchCursor * _hotwordCursor; // +0x18
    WCFinderSearchMetaData * _metaData; // +0x20
    WCFinderSearchKVReporter * _reporter; // +0x28
    WCFinderSearchDataProvider * _feedProvider; // +0x30
    NSData * _objHotwordInfoBuff; // +0x38
}
- (id)init;
- (id)initWithObjHotwordInfoBuff:(id)arg1;
- (id)text;
- (void)requestPageDatas;
- (void)_requestNextFeedData;
- (void)tryInsertSpliteVM:(id)arg1;
- (void)dataProviderFetchFailed:(id)arg1;
- (void)dataProvider:(id)arg1 appendDataToRange:(_NSRange)arg2;
- (void)continueWithRange:(_NSRange)arg1;
- (void)dataProvider:(id)arg1 removeAtIdx:(long long)arg2;
- (BOOL)continueFlag;
- (BOOL)loading;
- (id)feedProviderWithHotWord:(id)arg1;
- (id)hotwordForContentVM:(id)arg1;
- (long long)positionForContentVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVMS;
- (void)setContentVMS:(id)arg1;
- (id)hotwordCursor;
- (void)setHotwordCursor:(id)arg1;
- (id)metaData;
- (void)setMetaData:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)feedProvider;
- (void)setFeedProvider:(id)arg1;
- (id)objHotwordInfoBuff;
- (void)setObjHotwordInfoBuff:(id)arg1;
- (void).cxx_destruct;
@end
