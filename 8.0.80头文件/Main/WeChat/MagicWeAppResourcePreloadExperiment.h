@interface MagicWeAppResourcePreloadExperiment : NSObject
{
    NSMutableDictionary * _disabledExposureMap; // +0x8
}
- (id)init;
- (BOOL)isEnabled;
- (id)recordDisabledExposureForTarget:(id)arg1 now:(double)arg2 ttl:(double)arg3;
- (id)consumeDisabledExposureForKey:(id)arg1 now:(double)arg2;
- (void)removeDisabledExposure:(id)arg1 forKey:(id)arg2;
- (void)clear;
- (id)disabledExposureMap;
- (void)setDisabledExposureMap:(id)arg1;
- (void).cxx_destruct;
@end
