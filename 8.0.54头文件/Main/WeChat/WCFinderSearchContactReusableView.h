@interface WCFinderSearchContactReusableView : UICollectionReusableView
{
    id <WCFinderSearchContactReusableViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    MMUIButton * _moreButton; // +0x18
    UIView * _blankView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)onClickMore:(id)arg1;
- (void)updateUIWith:(id)arg1 isShowMore:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)blankView;
- (void)setBlankView:(id)arg1;
- (void).cxx_destruct;
@end

