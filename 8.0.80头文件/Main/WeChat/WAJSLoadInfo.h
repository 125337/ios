@interface WAJSLoadInfo : NSObject
{
    BOOL _loaded; // +0x8
    double _progress; // +0x10
    NSMutableDictionary * _hitOptimizations; // +0x18
}
- (id)init;
- (id)toDictionary;
- (BOOL)loaded;
- (void)setLoaded:(BOOL)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (id)hitOptimizations;
- (void)setHitOptimizations:(id)arg1;
- (void).cxx_destruct;
@end
