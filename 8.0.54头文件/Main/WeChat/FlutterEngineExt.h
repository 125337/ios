@interface FlutterEngineExt : NSObject
+ (id)getDartVmArgs;
+ (BOOL)isEnableImpeller;
+ (BOOL)isEnableWideGamut;
+ (BOOL)isEnableMMProfiler;
+ (BOOL)isEnableRasterProfiling;
+ (id)createFlutterUpdateDartProject;
@end

