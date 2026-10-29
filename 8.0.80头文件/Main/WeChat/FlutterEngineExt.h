@interface FlutterEngineExt : NSObject
+ (void)setupEngineLog;
+ (id)getDartVmArgs;
+ (BOOL)isEnableImpeller;
+ (BOOL)isEnableWideGamut;
+ (BOOL)isEnableFlutterMetalLayer;
+ (void)setupMaxMetalLayerCount;
+ (void)setupMetalLayerReusePoolEnabled;
+ (BOOL)isEnableMMProfiler;
+ (BOOL)isEnableMMProfilerTraceEvent;
+ (BOOL)isEnableRasterProfiling;
+ (BOOL)isEnableImpellerRasterCache;
+ (BOOL)isEnableNativeImageDecoder;
+ (BOOL)isEnableGpuGlyphAtlasPurgeOnDestroy;
+ (unsigned long long)commonStructPointer;
+ (id)createFlutterUpdateDartProject;
@end
