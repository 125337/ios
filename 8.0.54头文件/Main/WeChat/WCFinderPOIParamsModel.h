@interface WCFinderPOIParamsModel : NSObject <NSCopying>
{
    BOOL _hideExactLocation; // +0x8
    BOOL _isPrefetch; // +0x9
    int _poiFromType; // +0xc
    int _tabID; // +0x10
    unsigned int _filterType; // +0x14
    int _fromScene; // +0x18
    POIInfo * _poiInfo; // +0x20
    NSString * _poiClassifyId; // +0x28
    NSString * _chatname; // +0x30
    NSString * _reportID; // +0x38
    unsigned long long _entryScene; // +0x40
    unsigned long long _fromObjectId; // +0x48
    NSString * _jumpInfoToPoiStreamBypass; // +0x50
}
- (id)initWithSnsPOIRelatedStreamWithPOIInfo:(id)arg1 poiClassifyId:(id)arg2 chatname:(id)arg3 reportID:(id)arg4 entryScene:(unsigned long long)arg5;
- (id)initWithFinderPOIRelatedWithPOIInfo:(id)arg1 poiClassifyId:(id)arg2 fromObjectId:(unsigned long long)arg3 reportID:(id)arg4 entryScene:(unsigned long long)arg5 jumpInfoToPoiStreamBypass:(id)arg6;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (id)chatname;
- (void)setChatname:(id)arg1;
- (id)reportID;
- (void)setReportID:(id)arg1;
- (int)poiFromType;
- (void)setPoiFromType:(int)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (unsigned long long)fromObjectId;
- (void)setFromObjectId:(unsigned long long)arg1;
- (BOOL)hideExactLocation;
- (void)setHideExactLocation:(BOOL)arg1;
- (int)tabID;
- (void)setTabID:(int)arg1;
- (unsigned int)filterType;
- (void)setFilterType:(unsigned int)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (BOOL)isPrefetch;
- (void)setIsPrefetch:(BOOL)arg1;
- (id)jumpInfoToPoiStreamBypass;
- (void)setJumpInfoToPoiStreamBypass:(id)arg1;
- (void).cxx_destruct;
@end

