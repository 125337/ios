@interface MMFinderLiveStickerEditingActivatorContainerView : UIView
{
    id <MMFinderLiveStickerEditingActivatorContainerViewDelegate> _delegate; // +0x8
    UIViewController * _editingVcPresentingViewController; // +0x10
    UIView * _actionSheetHostingView; // +0x18
    id <MMFinderLiveStickerReporting> _reporter; // +0x20
    MMFinderLiveStickerItemBase * _imageSticker; // +0x28
    MMFinderLiveStickerEditingActivatorView * _imageStickerActivatorView; // +0x30
    MMFinderLiveStickerItemBase * _textSticker; // +0x38
    MMFinderLiveStickerEditingActivatorView * _textStickerActivatorView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)upsertStickerItem:(id)arg1;
- (void)removeStickerItem:(id)arg1;
- (void)sendStickerItemToBack:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onActivatorViewTapped:(id)arg1;
- (void)onActivatorViewDoubleTapped:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)editingVcPresentingViewController;
- (void)setEditingVcPresentingViewController:(id)arg1;
- (id)actionSheetHostingView;
- (void)setActionSheetHostingView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)imageSticker;
- (void)setImageSticker:(id)arg1;
- (id)imageStickerActivatorView;
- (void)setImageStickerActivatorView:(id)arg1;
- (id)textSticker;
- (void)setTextSticker:(id)arg1;
- (id)textStickerActivatorView;
- (void)setTextStickerActivatorView:(id)arg1;
- (void).cxx_destruct;
@end
