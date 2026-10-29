@interface LiveOpenPoiDetailParams : NSObject
{
    NSNumber * _latitude; // +0x8
    NSNumber * _longitude; // +0x10
    NSNumber * _scale; // +0x18
    NSString * _poiName; // +0x20
    NSString * _poiAddress; // +0x28
    NSString * _poiId; // +0x30
}
+ (id)makeWithLatitude:(id)arg1 longitude:(id)arg2 scale:(id)arg3 poiName:(id)arg4 poiAddress:(id)arg5 poiId:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)scale;
- (void)setScale:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (void).cxx_destruct;
@end
