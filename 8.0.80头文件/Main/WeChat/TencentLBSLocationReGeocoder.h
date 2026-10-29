@interface TencentLBSLocationReGeocoder : NSObject
{
    NSThread * _runThread; // +0x8
}
+ (id)getPoiWithJSONObject:(id)arg1;
+ (void)getLevelThreeSubWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelZeroWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelOneWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelThreeWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (void)getLevelFourWithJSONObject:(id)arg1 tencentLocation:(id)arg2;
+ (id)dataToDictionary:(id)arg1 random:(int)arg2;
+ (void)getTheBestLocationData:(id)arg1 tencentLocation:(id)arg2;
+ (id)getPostDictionaryWithCLLocation:(id)arg1 requestLevel:(unsigned long long)arg2 appName:(id)arg3 type:(int)arg4 smallAppKey:(id)arg5;
+ (id)getPostDictionaryWithCLLocation:(id)arg1 requestLevel:(unsigned long long)arg2 appName:(id)arg3 smallAppKey:(id)arg4;
+ (id)getPostDictionaryWithCLLocation:(id)arg1 requestLevel:(unsigned long long)arg2 appName:(id)arg3 beacons:(id)arg4 smallAppKey:(id)arg5;
- (id)initWithRunThread:(id)arg1;
- (void)syncPerformOnThread:(id)arg1 withBlock:(id /* block */)arg2;
- (void)asyncPerformOnThread:(id)arg1 withBlock:(id /* block */)arg2;
- (void)runBlock:(id /* block */)arg1;
- (id /* block */)initCompletionBlockWithCoordinateType:(unsigned long long)arg1 requestLevel:(unsigned long long)arg2 random:(int)arg3 compeltionBlock:(id /* block */)arg4;
- (int)getWlanfixWithDict:(id)arg1 withDef:(int)arg2;
- (int)getWlanUseWithDict:(id)arg1 withDef:(int)arg2;
- (BOOL)reGeocoderWithParameter:(id)arg1 withMaxTimeout:(double)arg2 coordinateType:(unsigned long long)arg3 compeltionBlock:(id /* block */)arg4;
- (id)runThread;
- (void)setRunThread:(id)arg1;
- (void).cxx_destruct;
@end
