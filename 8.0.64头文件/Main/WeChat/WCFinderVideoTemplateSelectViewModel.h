@interface WCFinderVideoTemplateSelectViewModel : WCFinderVideoTemplateSelectBasicViewModel
+ (id)tempPath;
+ (id)tempLocalUrlOfDemoVideoUrl:(id)arg1;
+ (void)downloadCacheWithUrl:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)ensureCachePath;
- (id)mmkvKey;
@end
