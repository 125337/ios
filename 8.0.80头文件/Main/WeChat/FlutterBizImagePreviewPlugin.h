@interface FlutterBizImagePreviewPlugin : NSObject <MMFlutterPlugin, BizImagePreviewApi>
{
    id /* block */ _imagePreviewFinished; // +0x8
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)notifyBizImagePreviewActionListRet:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)imagePreviewFinished;
- (void)setImagePreviewFinished:(id /* block */)arg1;
- (void).cxx_destruct;
@end
