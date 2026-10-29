@interface MMCameraMultiSessionUtil : NSObject
+ (BOOL)supportMultiCameraSession;
+ (BOOL)supportBuiltInBackDualWideCamera;
+ (BOOL)supportBuiltInBackTripleCamera;
+ (id)getCameraSwitchableZoomFactors;
+ (id)getCameraZoomFactorInfo;
+ (id)getCameraGroup;
+ (id)cameraWithPosition:(long long)arg1 deviceType:(id)arg2;
+ (id)cameraWithPosition:(long long)arg1 deviceType:(id)arg2 needFallBackDevice:(BOOL)arg3;
+ (void)_safeInsertUniqueFactorInfo:(id)arg1 intoSortedList:(id)arg2;
+ (id)_getBuiltInWideAngleCamera;
+ (id)_getBuiltInUltraWideCamera;
+ (id)_getBuiltInTelephotoCamera;
+ (id)_getBuiltInDualWideCamera;
+ (id)_getBuiltInTripleCamera;
@end

