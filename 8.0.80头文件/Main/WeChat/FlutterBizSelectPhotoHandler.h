@interface FlutterBizSelectPhotoHandler : NSObject <FlutterBizImagePickViewControllerDelegate>
{
    BizImageSelectInfo * _selectInfo; // +0x8
}
- (void)handleSelect:(id)arg1 limit:(long long)arg2 canSendOriginalImage:(BOOL)arg3 livePhotoMode:(long long)arg4 allowTextCover:(BOOL)arg5 textCoverEditScene:(long long)arg6 useNewImageEditLayout:(BOOL)arg7 completion:(id /* block */)arg8;
- (void)onCancelSelectAssets:(id)arg1;
- (void)onFinishSelectAssets:(id)arg1 assets:(id)arg2;
- (void)onSelectTextCover:(id)arg1 info:(id)arg2;
- (id)selectInfo;
- (void)setSelectInfo:(id)arg1;
- (void).cxx_destruct;
@end
