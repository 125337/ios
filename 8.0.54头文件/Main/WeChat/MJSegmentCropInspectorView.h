@interface MJSegmentCropInspectorView : MJSegmentInspectorView
{
    UILabel * _descLabel; // +0x8
    MJTimelineThumbnailView * _thumbnailView; // +0x10
}
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)didFinishCrop;
- (void)didCancelCrop;
- (void)updateResetButton;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (void).cxx_destruct;
@end

