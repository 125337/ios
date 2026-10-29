@interface FetchingRecommendTask : NSObject
{
    unsigned long long _scene; // +0x8
    unsigned long long _status; // +0x10
    NSString * _tid; // +0x18
    WCFinderBaseCgi * _fetchRelatedListCgi; // +0x20
    NSArray * _fetchRelatedList; // +0x28
}
- (id)description;
- (void)clean;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)fetchRelatedListCgi;
- (void)setFetchRelatedListCgi:(id)arg1;
- (id)fetchRelatedList;
- (void)setFetchRelatedList:(id)arg1;
- (void).cxx_destruct;
@end

