@interface FlutterSnsPlatformPathPlugin : NSObject <MMFlutterPlugin, PlatformPathApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)getCachePathWithError:(id *)arg1;
- (id)getMediaPathWithError:(id *)arg1;
- (id)getPublishPathWithError:(id *)arg1;
@end
