@interface WCFinderPOIStreamRequestParams : NSObject
{
    BOOL _isPrefetch; // +0x8
    int _tabId; // +0xc
    int _poiFromType; // +0x10
    int _commentScene; // +0x14
    unsigned int _filterType; // +0x18
    NSData * _lastBuffer; // +0x20
    FinderClientStatus * _status; // +0x28
    NSString * _poiClassifyId; // +0x30
    unsigned long long _fromObjectId; // +0x38
    POIInfo * _poiInfo; // +0x40
    NSString * _jumpInfoToPoiStreamBypass; // +0x48
}
- (int)tabId;
- (void)setTabId:(int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (unsigned long long)fromObjectId;
- (void)setFromObjectId:(unsigned long long)arg1;
- (int)poiFromType;
- (void)setPoiFromType:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (unsigned int)filterType;
- (void)setFilterType:(unsigned int)arg1;
- (BOOL)isPrefetch;
- (void)setIsPrefetch:(BOOL)arg1;
- (id)jumpInfoToPoiStreamBypass;
- (void)setJumpInfoToPoiStreamBypass:(id)arg1;
- (void).cxx_destruct;
@end

