@interface SharePreConfirmMessagePreviewContainerView : UIView
{
    BaseMessageViewModel<MessagePreviewContainerLayout> * _viewModel; // +0x8
    BaseMessageCellView * _previewCellView; // +0x10
    UIButton * _previewButton; // +0x18
    double _previewScale; // +0x20
    double _referenceWidth; // +0x28
}
- (void)layoutSubviews;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)previewCellView;
- (void)setPreviewCellView:(id)arg1;
- (id)previewButton;
- (void)setPreviewButton:(id)arg1;
- (double)previewScale;
- (void)setPreviewScale:(double)arg1;
- (double)referenceWidth;
- (void)setReferenceWidth:(double)arg1;
- (void).cxx_destruct;
@end
