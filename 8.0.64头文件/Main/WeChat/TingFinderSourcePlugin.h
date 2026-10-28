@interface TingFinderSourcePlugin : NSObject <MMFlutterPlugin, TingFinderSourceApi>
- (void)requestMediaInfoFinderInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
@end
