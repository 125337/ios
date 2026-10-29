@interface BizTransferFlutterPlugin : NSObject <MMFlutterPlugin, BizTransferApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)transferRequest:(id)arg1 completion:(id /* block */)arg2;
@end
