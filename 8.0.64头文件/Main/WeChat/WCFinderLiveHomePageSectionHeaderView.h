@interface WCFinderLiveHomePageSectionHeaderView : UICollectionViewCell
{
    WCFinderLiveHomePageSectionViewModel * _sectionVM; // +0x8
    id <WCFinderLiveHomePageSectionHeaderViewDelegate> _delegate; // +0x10
    MMLiveColorfulLabel * _titleLabel; // +0x18
    MMWebImageView * _iconImage; // +0x20
    UIView * _verticalLineView; // +0x28
    MMUIButton * _moreButton; // +0x30
    UIImageView * _arrowView; // +0x38
    UIView * _foldContainer; // +0x40
    UIImageView * _foldImage; // +0x48
}
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithSection:(id)arg1;
- (id)calculateSectionDisplayTitle;
- (double)maxTitleLabelWidth;
- (void)setupUI;
- (void)onTap;
- (void)animateUpdate;
- (void)layoutUI;
- (void)updateTextColors:(id)arg1;
- (void)onClickMore:(id)arg1;
- (id)titleLabel;
- (id)iconImage;
- (id)verticalLineView;
- (id)moreButton;
- (id)arrowView;
- (id)foldContainer;
- (id)foldImage;
- (BOOL)showMoreButton;
- (BOOL)showFold;
- (id)sectionVM;
- (void)setSectionVM:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setVerticalLineView:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setFoldContainer:(id)arg1;
- (void)setFoldImage:(id)arg1;
- (void).cxx_destruct;
@end
