@interface EcsActionHandler_previewMedia : EcsActionHandler_Base <PhotoViewControllerDelegate>
{
    EcsPreviewMediaViewController * _mediaViewController; // +0x8
    EcsMagicCardInstance * _magicCardInstance; // +0x10
}
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)showMediaWithSources:(id)arg1 current:(int)arg2 showMenu:(BOOL)arg3 passBuffer:(id)arg4 enableSearch:(BOOL)arg5 mbShowBottomTool:(BOOL)arg6;
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
- (id)mediaViewController;
- (void)setMediaViewController:(id)arg1;
- (id)magicCardInstance;
- (void)setMagicCardInstance:(id)arg1;
- (void).cxx_destruct;
@end
