@interface BizUserLocationHelper : NSObject
+ (BOOL)isSystemLocationAuthorized;
+ (BOOL)isK1KLocationAuthorized;
+ (void)fillLocationAuthFlags:(void *)arg1;
+ (BOOL)fillCachedUserLocation:(void *)arg1;
@end
