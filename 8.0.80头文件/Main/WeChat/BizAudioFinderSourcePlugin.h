@interface BizAudioFinderSourcePlugin : NSObject <MMFlutterPlugin, TingFinderSourceApi>
- (void)requestMediaInfoFinderInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)getSessionBufferFeedId:(id)arg1 commentScene:(long long)arg2 error:(id *)arg3;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
@end
