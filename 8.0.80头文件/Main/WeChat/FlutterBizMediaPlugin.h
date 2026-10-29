@interface FlutterBizMediaPlugin : NSObject <MMFlutterPlugin, BizMediaApi>
{
    MMFlutterViewController * _viewController; // +0x8
    FlutterBizShareHandler * _flutterBizShareHandler; // +0x10
    FlutterBizEditPhotoHandler * _editPhotoHandler; // +0x18
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)selectPhotoLimit:(long long)arg1 canSendOriginalImage:(BOOL)arg2 supportLivePhoto:(BOOL)arg3 supportTextCover:(BOOL)arg4 scene:(long long)arg5 textCoverEditScene:(long long)arg6 completion:(id /* block */)arg7;
- (void)uploadCommentPicReq:(id)arg1 completion:(id /* block */)arg2;
- (void)editPhotoPhotoId:(id)arg1 path:(id)arg2 completion:(id /* block */)arg3;
- (void)editTextCoverPrompt:(id)arg1 aiPicId:(id)arg2 editScene:(long long)arg3 completion:(id /* block */)arg4;
- (void)chooseMediaFromCameraWithCompletion:(id /* block */)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)flutterBizShareHandler;
- (void)setFlutterBizShareHandler:(id)arg1;
- (id)editPhotoHandler;
- (void)setEditPhotoHandler:(id)arg1;
- (void).cxx_destruct;
@end
