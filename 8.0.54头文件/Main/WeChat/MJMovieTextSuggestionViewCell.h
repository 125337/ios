@interface MJMovieTextSuggestionViewCell : UICollectionViewCell
{
    BOOL _isEnabledViewerNumberLabel; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _viewerNumberLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setupWithItem:(id)arg1;
- (void)updateLayoutWithItem:(id)arg1;
- (id)titleLabel;
- (id)viewerNumberLabel;
- (BOOL)isEnabledViewerNumberLabel;
- (void)setIsEnabledViewerNumberLabel:(BOOL)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewerNumberLabel:(id)arg1;
- (void).cxx_destruct;
@end

