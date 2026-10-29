@interface WAFlutterProxy : NSObject <IWAFlutterService>
+ (id)sharedService;
- (BOOL)isSupportFlutter;
- (id)getVersionString;
- (id)makeSkylineRuntime;
- (id)makeSkylineViewWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)getEngineEntrypoint;
- (void)registerEnginePlugin:(id)arg1;
@end

