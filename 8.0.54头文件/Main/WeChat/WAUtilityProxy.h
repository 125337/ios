@interface WAUtilityProxy : NSObject <IWAUtilityService>
+ (id)valueFromDynamicConfigForKey:(id)arg1;
+ (unsigned int)uintFromDynamicConfigForKey:(id)arg1 defaultValue:(unsigned int)arg2;
+ (id)valueForKey:(id)arg1 config:(id)arg2;
+ (BOOL)isOverSeaUserAndOpenForbiddenSwitch;
+ (unsigned int)appDidFinishLaunchTimeStampInSecond;
+ (id)getAppServiceConfigResPath;
+ (void)updateUserAgentIfNeeded;
+ (BOOL)useCustomNavigationBar;
+ (id)extendScriptModelToInjectWithWAContact:(id)arg1;
+ (id)userAgentForWeApp;
+ (id)extendBytesModelArrary;
+ (id)fetchImageScrollViewWithFrame:(CGRect)arg1;
+ (Class)fetchImageScrollViewClass;
+ (id)createImageWithSvgData:(id)arg1 resize:(CGSize)arg2 scale:(double)arg3;
+ (BOOL)isWeworkAppInstalled;
+ (BOOL)isElderModeOn;
+ (BOOL)isSpecialRenderModeOn;
+ (id)wechatUUID;
+ (void)sendDebugFileToFileHelper:(id)arg1;
+ (id)flutterRevision;
+ (id)createNativeViewWithName:(id)arg1;
+ (id)cameraWithPosition:(long long)arg1 deviceType:(id)arg2 needFallBackDevice:(BOOL)arg3;
+ (id)getCameraZoomFactorInfo;
+ (BOOL)enableScanAutoSwitchCameraWhenFocusing;
+ (double)autoSwitchingCameraLensPosition;
@end

