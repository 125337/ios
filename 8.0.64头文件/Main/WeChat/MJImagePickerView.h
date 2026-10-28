@interface MJImagePickerView : UIView
{
    id <MJImagePickerViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    UIView * _videoThumbnailContainer; // +0x18
    UIButton * _importButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (void)_importButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)videoThumbnailContainer;
- (void)setVideoThumbnailContainer:(id)arg1;
- (id)importButton;
- (void)setImportButton:(id)arg1;
- (void).cxx_destruct;
@end
