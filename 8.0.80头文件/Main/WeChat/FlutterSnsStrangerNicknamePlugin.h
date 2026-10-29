@interface FlutterSnsStrangerNicknamePlugin : NSObject <MMFlutterPlugin, PlatformSnsStrangerNicknameApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)getStrangerNicknameUsername:(id)arg1 completion:(id /* block */)arg2;
@end
