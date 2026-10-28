@interface WSRecommendCache : NSObject <PBCoding>
{
    unsigned int _cacheTime; // +0x8
    unsigned int _directShowInterval; // +0xc
    unsigned int _refreshInterval; // +0x10
    unsigned int _category; // +0x14
    unsigned int _redDotTimeStamp; // +0x18
    NSString * _nsJson; // +0x20
    NSArray * _docIdList; // +0x28
    NSMutableSet * _filterDocIdSet; // +0x30
}
+ (void)PBArrayAdd_nsJson;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_directShowInterval;
+ (void)PBArrayAdd_refreshInterval;
+ (void)PBArrayAdd_category;
+ (void)PBArrayAdd_docIdList;
+ (void)PBArrayAdd_filterDocIdSet;
+ (void)PBArrayAdd_redDotTimeStamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithWebRecommendResponse:(id)arg1;
- (id)description;
- (BOOL)isValid;
- (void)reset;
- (BOOL)shouldDirectShow;
- (BOOL)isCacheValid;
- (id)nsJson;
- (void)setNsJson:(id)arg1;
- (unsigned int)cacheTime;
- (void)setCacheTime:(unsigned int)arg1;
- (unsigned int)directShowInterval;
- (void)setDirectShowInterval:(unsigned int)arg1;
- (unsigned int)refreshInterval;
- (void)setRefreshInterval:(unsigned int)arg1;
- (unsigned int)category;
- (void)setCategory:(unsigned int)arg1;
- (id)docIdList;
- (void)setDocIdList:(id)arg1;
- (id)filterDocIdSet;
- (void)setFilterDocIdSet:(id)arg1;
- (unsigned int)redDotTimeStamp;
- (void)setRedDotTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
