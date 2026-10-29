@interface NewLifeEditImageLogicController : NSObject <EditImageInitialViewDelegate>
{
    MMAsset * _asset; // +0x8
    UIImage * _originalImage; // +0x10
    id <NewLifeEditImageLogicControllerDelegate> _delegate; // +0x18
    EditImageIntialView * _editImageInitialView; // +0x20
    UIViewController * _currentViewController; // +0x28
    MMLoadingView * _loadingView; // +0x30
}
- (void)startEditImageFromViewController:(id)arg1;
- (void)realStartEditImageFromViewController:(id)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)editImageInitialView;
- (void)setEditImageInitialView:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
