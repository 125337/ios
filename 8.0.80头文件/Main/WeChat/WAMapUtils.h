@interface WAMapUtils : NSObject
+ (id)SafeNumber:(double)arg1;
+ (id)SafeNumber:(double)arg1 To:(double)arg2;
+ (id)DictionaryFromLocation:(id)arg1;
+ (id)DictionaryFromLocationCoordinate:(CLLocationCoordinate2D)arg1;
+ (CLLocationCoordinate2D)ParseCoord:(id)arg1;
+ (id)SmallKey:(id)arg1 AppId:(id)arg2;
@end
