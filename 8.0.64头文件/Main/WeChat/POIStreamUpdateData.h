@interface POIStreamUpdateData : NSObject
{
    BOOL _containsNearby; // +0x8
    BOOL _isReload; // +0x9
    NSArray * _finderObjectPBDataArray; // +0x10
    FlutterStandardTypedData * _nearbyInfoPBData; // +0x18
    long long _prefetchCount; // +0x20
}
+ (id)makeWithFinderObjectPBDataArray:(id)arg1 nearbyInfoPBData:(id)arg2 containsNearby:(BOOL)arg3 isReload:(BOOL)arg4 prefetchCount:(long long)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderObjectPBDataArray;
- (void)setFinderObjectPBDataArray:(id)arg1;
- (id)nearbyInfoPBData;
- (void)setNearbyInfoPBData:(id)arg1;
- (BOOL)containsNearby;
- (void)setContainsNearby:(BOOL)arg1;
- (BOOL)isReload;
- (void)setIsReload:(BOOL)arg1;
- (long long)prefetchCount;
- (void)setPrefetchCount:(long long)arg1;
- (void).cxx_destruct;
@end
