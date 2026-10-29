@interface MPOriginalImageCapability : NSObject
+ (id)capabilityInfo;
+ (BOOL)isHDROutputCapable;
+ (long long)maxConcurrentImages;
@end
