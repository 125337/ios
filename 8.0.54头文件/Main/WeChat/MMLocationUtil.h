@interface MMLocationUtil : NSObject
+ (void)clearLBSCacheIfNeeded;
+ (void)clearLBSCache;
+ (id)locationMsgWrapFromMsgWrap:(id)arg1;
+ (id)locationMsgWrapFromPoiInfo:(id)arg1;
+ (id)poiInfoFromMsgWrap:(id)arg1;
+ (id)favLocationItemFromPoiInfo:(id)arg1;
+ (id)poiInfoFromFavLocationItem:(id)arg1;
+ (id)poiInfoFromWcLocationInfo:(id)arg1;
+ (id)poiInfoFromCardInfo:(id)arg1;
@end

