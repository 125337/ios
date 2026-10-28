@interface WCFinderMJSetTabDataFetcher : NSObject
{
    int _tabType; // +0x8
    NSString * _templateId; // +0x10
    NSMutableArray * _dataItems; // +0x18
    unsigned long long _dataLoadedState; // +0x20
    NSData * _lastBuff; // +0x28
    WCFinderBaseCgi * _fetchCgi; // +0x30
}
- (id)init;
- (void)requestFirstPage:(id /* block */)arg1 commentScene:(int)arg2;
- (void)requestNextPageWithCommentScene:(int)arg1;
- (void)requestPageData:(BOOL)arg1 commentScene:(int)arg2 completion:(id /* block */)arg3;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (unsigned long long)dataLoadedState;
- (void)setDataLoadedState:(unsigned long long)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)fetchCgi;
- (void)setFetchCgi:(id)arg1;
- (void).cxx_destruct;
@end
