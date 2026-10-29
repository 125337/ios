@interface WAFlutterWxProxy : WAFlutterProxy
+ (id)sharedService;
- (BOOL)isSupportFlutter;
- (id)getEngineEntrypoint;
- (void)registerEnginePlugin:(id)arg1;
@end

