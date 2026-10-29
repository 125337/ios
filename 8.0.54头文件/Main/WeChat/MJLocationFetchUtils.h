@interface MJLocationFetchUtils : NSObject
+ (id)handler;
+ (void)setHandler:(id)arg1;
+ (void)fetchLocation:(CLLocationCoordinate2D)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
+ (void)fetchUserLocationWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
+ (id)buildLocationItemWithRealtimeLocationCache;
+ (id)buildLocationItemWithCacheItem:(id)arg1;
+ (id)buildLocationItemWithPOIItem:(id)arg1;
+ (id)buildFinderLocationWithLocationItem:(id)arg1;
+ (id)buildLocationItemWithDictionary:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2;
+ (id)convertGeographicInfoFromLocationItem:(id)arg1;
+ (id)placeholderGeographicInfo;
@end

