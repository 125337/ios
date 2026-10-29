@interface BizUserLocationInfo : NSObject
{
    NSNumber * _longitude; // +0x8
    NSNumber * _latitude; // +0x10
    NSString * _adcode; // +0x18
    NSNumber * _openK1kLocation; // +0x20
    NSNumber * _openSystemLocation; // +0x28
}
+ (id)makeWithLongitude:(id)arg1 latitude:(id)arg2 adcode:(id)arg3 openK1kLocation:(id)arg4 openSystemLocation:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)adcode;
- (void)setAdcode:(id)arg1;
- (id)openK1kLocation;
- (void)setOpenK1kLocation:(id)arg1;
- (id)openSystemLocation;
- (void)setOpenSystemLocation:(id)arg1;
- (void).cxx_destruct;
@end
