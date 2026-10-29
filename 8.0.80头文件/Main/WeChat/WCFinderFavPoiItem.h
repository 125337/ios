@interface WCFinderFavPoiItem : NSObject
{
    FinderJumpInfo_LbsLifeCardStyle * _style; // +0x8
    NSString * _paramsJson; // +0x10
    WCFinderJumperPoiParams * _poiJumpParams; // +0x18
    FinderLocation * _location; // +0x20
}
- (id)initWithFavPOIItem:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)paramsJson;
- (void)setParamsJson:(id)arg1;
- (id)poiJumpParams;
- (void)setPoiJumpParams:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
@end
