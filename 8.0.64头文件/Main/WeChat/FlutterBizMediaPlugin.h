@interface FlutterBizMediaPlugin : NSObject <MMFlutterPlugin, BizMediaApi>
{
    MMFlutterViewController<BrandTLViewControllerProtocol> * _viewController; // +0x8
    FlutterBizShareHandler * _flutterBizShareHandler; // +0x10
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)selectPhotoLimit:(long long)arg1 canSendOriginalImage:(BOOL)arg2 supportLivePhoto:(BOOL)arg3 scene:(long long)arg4 completion:(id /* block */)arg5;
- (void)uploadCommentPicReq:(id)arg1 completion:(id /* block */)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)flutterBizShareHandler;
- (void)setFlutterBizShareHandler:(id)arg1;
- (void).cxx_destruct;
@end
