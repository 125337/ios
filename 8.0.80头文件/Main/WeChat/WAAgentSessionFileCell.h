@interface WAAgentSessionFileCell : WAAgentSessionBaseCell <UIDocumentInteractionControllerDelegate>
{
    id /* block */ _onPreviewTapped; // +0x8
    UIView * _containerView; // +0x10
    NSMutableArray * _bubbleViews; // +0x18
    UIDocumentInteractionController * _fileDocumentController; // +0x20
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)configureWithViewModel:(id)arg1;
- (id)createBubbleViewWithFileItem:(id)arg1;
- (id)fileIconImageForExt:(id)arg1;
- (id)fileInfoTextForItem:(id)arg1;
- (id)formatFileSize:(unsigned long long)arg1;
- (void)handleBubbleTap:(id)arg1;
- (void)previewFileItem:(id)arg1 appID:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)onPreviewTapped;
- (void)setOnPreviewTapped:(id /* block */)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)bubbleViews;
- (void)setBubbleViews:(id)arg1;
- (id)fileDocumentController;
- (void)setFileDocumentController:(id)arg1;
- (void).cxx_destruct;
@end
