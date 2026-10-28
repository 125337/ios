@interface FlutterEngineExt : NSObject
+ (void)setupEngineLog;
+ (id)getDartVmArgs;
+ (BOOL)isEnableImpeller;
+ (BOOL)isEnableWideGamut;
+ (BOOL)isEnableFlutterMetalLayer;
+ (BOOL)isEnableMMProfiler;
+ (BOOL)isEnableMMProfilerTraceEvent;
+ (BOOL)isEnableRasterProfiling;
+ (BOOL)isEnableImpellerRasterCache;
+ (BOOL)isEnableNativeImageDecoder;
+ (unsigned long long)commonStructPointer;
+ (id)createFlutterUpdateDartProject;
@end
