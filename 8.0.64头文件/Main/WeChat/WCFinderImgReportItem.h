@interface WCFinderImgReportItem : NSObject
{
    BOOL _hasZoomIn; // +0x8
    BOOL _hasPause; // +0x9
    BOOL _hasSpeedUp; // +0xa
    unsigned long long _comeWay; // +0x10
    unsigned long long _itemIdx; // +0x18
    unsigned long long _exposeStartTimeMS; // +0x20
    unsigned long long _stayTimeMS; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (void)convertBOOLToIntWithDict:(id)arg1 key:(id)arg2;
+ (void)convertAddOneIntWithDict:(id)arg1 key:(id)arg2;
- (BOOL)modelCustomTransformToDictionary:(id)arg1 forConfigTag:(id)arg2;
- (unsigned long long)comeWay;
- (void)setComeWay:(unsigned long long)arg1;
- (unsigned long long)itemIdx;
- (void)setItemIdx:(unsigned long long)arg1;
- (unsigned long long)exposeStartTimeMS;
- (void)setExposeStartTimeMS:(unsigned long long)arg1;
- (unsigned long long)stayTimeMS;
- (void)setStayTimeMS:(unsigned long long)arg1;
- (BOOL)hasZoomIn;
- (void)setHasZoomIn:(BOOL)arg1;
- (BOOL)hasPause;
- (void)setHasPause:(BOOL)arg1;
- (BOOL)hasSpeedUp;
- (void)setHasSpeedUp:(BOOL)arg1;
@end
