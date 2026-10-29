@interface NewLifeSelectPhotoHandler : NewLifeActionHandler <NewLifeImagePickViewControllerDelegate>
{
    NewLifeSelectPhotoResp * _response; // +0x8
}
- (void)handleRequest:(id)arg1;
- (void)endHandle;
- (void)onCancelSelectAssets:(id)arg1;
- (void)onFinishSelectAssets:(id)arg1 assets:(id)arg2;
- (id)response;
- (void)setResponse:(id)arg1;
- (void).cxx_destruct;
@end

