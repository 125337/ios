@interface TingPoiInfo : NSObject
{
    NSNumber * _latitude; // +0x8
    NSNumber * _longitude; // +0x10
    NSNumber * _precision; // +0x18
    NSNumber * _adCode; // +0x20
}
+ (id)makeWithLatitude:(id)arg1 longitude:(id)arg2 precision:(id)arg3 adCode:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)precision;
- (void)setPrecision:(id)arg1;
- (id)adCode;
- (void)setAdCode:(id)arg1;
- (void).cxx_destruct;
@end

