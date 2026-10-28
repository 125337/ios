@interface TingFinderActionPlugin : NSObject <MMFlutterPlugin, TingFinderActionController>
- (void)onAttachedToEngine:(id)arg1;
- (void)onFinderFeedLikeFeedId:(id)arg1 nonceId:(id)arg2 actToLike:(BOOL)arg3 realName:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)genAsyncResult:(long long)arg1 errMsg:(id)arg2;
@end
