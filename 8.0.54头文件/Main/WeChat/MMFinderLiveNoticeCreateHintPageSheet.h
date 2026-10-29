@interface MMFinderLiveNoticeCreateHintPageSheet : MMFinderLiveDragBarPageSheet
{
    id /* block */ _onCreateNotice; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    UIImageView * _imageView; // +0x20
    UIButton * _confirmButton; // +0x28
}
- (id)init;
- (void)setupPageSheetConfig;
- (void)initViews;
- (BOOL)useCompactLayoutPadding;
- (void)layoutSubviews;
- (void)onConfirm;
- (id /* block */)onCreateNotice;
- (void)setOnCreateNotice:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

