@interface WCFinderLightDarkIconName : NSObject
{
    NSString * _lightName; // +0x8
    NSString * _darkName; // +0x10
    long long _imageFetchType; // +0x18
}
+ (id)instanceWithLight:(id)arg1 dark:(id)arg2;
+ (id)instanceWithSameName:(id)arg1;
- (id)darkName;
- (id)lightName;
- (void)setLightName:(id)arg1;
- (void)setDarkName:(id)arg1;
- (long long)imageFetchType;
- (void)setImageFetchType:(long long)arg1;
- (void).cxx_destruct;
@end

