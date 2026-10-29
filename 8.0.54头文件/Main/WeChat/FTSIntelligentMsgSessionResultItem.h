@interface FTSIntelligentMsgSessionResultItem : NSObject
{
    BOOL _hasCheck; // +0x8
    BOOL _isInvalid; // +0x9
    unsigned int _searchResultCount; // +0xc
    NSString * _username; // +0x10
    NSArray * _arrMsgItem; // +0x18
    NSArray * _arrFaceClusterItem; // +0x20
    NSMutableArray * _clusterResults; // +0x28
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)arrMsgItem;
- (void)setArrMsgItem:(id)arg1;
- (id)arrFaceClusterItem;
- (void)setArrFaceClusterItem:(id)arg1;
- (unsigned int)searchResultCount;
- (void)setSearchResultCount:(unsigned int)arg1;
- (BOOL)hasCheck;
- (void)setHasCheck:(BOOL)arg1;
- (BOOL)isInvalid;
- (void)setIsInvalid:(BOOL)arg1;
- (id)clusterResults;
- (void)setClusterResults:(id)arg1;
- (void).cxx_destruct;
@end

