@interface WCFinderMusicVideoContentView : UICollectionViewCell
{
    BOOL _hiddenTopTitle; // +0x8
    WCFinderCarouselView * _carouselView; // +0x10
    id <WCFinderMusicVideoContentViewDelegate> _delegate; // +0x18
    id <WCFinderCarouseDelegate> _carouselDelegate; // +0x20
    id <WCFinderCarouselDatasource> _carouselDataSource; // +0x28
    MMUIButton * _allBtn; // +0x30
    UIView * _topContentView; // +0x38
    UILabel * _titleLabel; // +0x40
}
+ (double)musicVideoContentViewHeightFromWidth:(double)arg1;
+ (double)musicTabContentViewHeightFromWidth:(double)arg1;
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setCarouselDelegate:(id)arg1;
- (void)setCarouselDataSource:(id)arg1;
- (void)prepareForReuse;
- (void)showMoreBtn:(BOOL)arg1;
- (void)setHiddenTopTitle:(BOOL)arg1;
- (id)createFlowLayout;
- (id)topContentView;
- (id)titleLabel;
- (id)allBtn;
- (void)onClickAllBtn;
- (void)refreshView;
- (id)carouselView;
- (void)setCarouselView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)carouselDelegate;
- (id)carouselDataSource;
- (void)setAllBtn:(id)arg1;
- (BOOL)hiddenTopTitle;
- (void)setTopContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

