@interface AppTingStandardListMessageImageView : UIView <MMImageLoaderObserver, AppStandardContentExternalLoadImageView>
{
    TingStandardSharedListView * _contentView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateDisplayWithCategoryItem:(id)arg1;
- (void)layoutSubviews;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
