@interface BizAppImageContentMessageCellCoverView : UIView <AppStandardContentExternalLoadImageView>
{
    UIImageView * _coverImageView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg1;
- (void)updateCoverImage:(id)arg1;
- (void)showFailedCoverImage;
- (BOOL)cropLongPic:(id)arg1 viewModel:(id)arg2;
- (void)setUpViews;
- (void)setUpLayout;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (void).cxx_destruct;
@end
