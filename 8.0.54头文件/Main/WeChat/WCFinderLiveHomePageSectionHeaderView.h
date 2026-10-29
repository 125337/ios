@interface WCFinderLiveHomePageSectionHeaderView : UICollectionViewCell
{
    WCFinderLiveStreamContainerModel * _containerModel; // +0x8
    id <WCFinderLiveHomePageSectionHeaderViewDelegate> _delegate; // +0x10
    MMLiveColorfulLabel * _titleLabel; // +0x18
    MMWebImageView * _iconImage; // +0x20
    UIView * _verticalLineView; // +0x28
    MMUIButton * _moreButton; // +0x30
    UIImageView * _arrowView; // +0x38
}
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithContainerModel:(id)arg1 forceDarkMode:(BOOL)arg2;
- (void)setupUI;
- (void)layoutUI;
- (void)updateTextColors:(id)arg1;
- (void)onClickMore:(id)arg1;
- (id)titleLabel;
- (id)iconImage;
- (id)verticalLineView;
- (id)moreButton;
- (id)arrowView;
- (BOOL)showMoreButton;
- (id)containerModel;
- (void)setContainerModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setVerticalLineView:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

