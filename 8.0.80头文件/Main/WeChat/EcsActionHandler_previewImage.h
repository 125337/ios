@interface EcsActionHandler_previewImage : EcsActionHandler_Base <PhotoViewControllerDelegate>
{
    EcsPreviewImageViewController * _photoViewController; // +0x8
    EcsMagicCardInstance * _magicCardInstance; // +0x10
}
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)showImageWithUrls:(id)arg1 current:(id)arg2 showMenu:(BOOL)arg3 enableSearch:(BOOL)arg4 passBuffer:(id)arg5 currentPos:(CGRect)arg6;
- (void)startMagicCardWithPassBuffer:(id)arg1;
- (void)commonStopLogic;
- (void)photoVCWillBePoped;
- (void)photoVCDidBePoped;
- (void)photoVCHideAnimationCompleted;
- (void)photoVCDidScrollToIndex:(unsigned int)arg1;
- (void)photoVCDidChangeToPage:(unsigned int)arg1;
- (void)photoVCWillBePushed;
- (void)photoVCOnLongPressAtIndex:(unsigned int)arg1;
- (void)photoVCWillBeDismissed;
- (id)photoViewController;
- (void)setPhotoViewController:(id)arg1;
- (id)magicCardInstance;
- (void)setMagicCardInstance:(id)arg1;
- (void).cxx_destruct;
@end
