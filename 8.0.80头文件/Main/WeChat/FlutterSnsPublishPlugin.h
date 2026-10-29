@interface FlutterSnsPublishPlugin : NSObject <MMFlutterPlugin, PlatformSnsPublishApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)getNativeLocalPublishFeedsUserName:(id)arg1 completion:(id /* block */)arg2;
@end
