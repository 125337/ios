@interface FinderLocation : WXPBGeneratedMessage
+ (void)initialize;
- (BOOL)isPoiInfo;
- (id)convertToPOIInfo;
- (id)poiFavoriteSourceID;
- (BOOL)isValidForShow;
- (BOOL)isLocationValid;
- (BOOL)poiCanClick;
- (id)getDisplayPOIAddress;
- (id)getLocationUrl;
@end
