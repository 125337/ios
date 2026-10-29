@interface BaseChatCellView : UIView <MessageComponentMultiSceneSupport>
{
    id <MessageNodeViewDelegate> m_delegate; // +0x8
    BaseChatViewModel * m_viewModel; // +0x10
    CGSize m_layoutSize; // +0x18
    BOOL m_isLayouting; // +0x28
    BOOL _useLightStyle; // +0x29
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (BOOL)canBeReused;
- (BOOL)shouldLayoutIfNeeded;
- (void)resetLayoutCache;
- (void)layoutSubviews;
- (void)layoutInternal;
- (BOOL)isUseLightStyle;
- (BOOL)needUpdateLightStyle;
- (BOOL)userInteractionEnabledWhenEditing;
- (void)layoutFinished;
- (void)onAppear;
- (void)onDisappear;
- (void)onWillBeginDragging;
- (void)onDidEndDraggingWillDecelerate:(BOOL)arg1;
- (void)onDidEndDecelerating;
- (BOOL)disableImplicitAnimations;
- (BOOL)isShowInSubScene;
- (id)getCurrViewController;
- (double)chatViewControllerWidth;
- (double)chatViewControllerShortSideLength;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (BOOL)isLayouting;
- (void)setIsLayouting:(BOOL)arg1;
- (BOOL)useLightStyle;
- (void)setUseLightStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
