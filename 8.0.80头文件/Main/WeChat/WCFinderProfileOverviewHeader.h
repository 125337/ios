@interface WCFinderProfileOverviewHeader : UICollectionReusableView
{
    id <WCFinderProfileOverviewHeaderDelegate> _delegate; // +0x8
    double _horizontalMargin; // +0x10
    WCFinderProfileOverviewSection * _section; // +0x18
    UIButton * _extButton; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    UIView * _bottomLine; // +0x38
    UIImageView * _arrowImageView; // +0x40
    WCFinderSizingRichTextView * _detailTextView; // +0x48
    UITapGestureRecognizer * _tapGesture; // +0x50
    double _displayMargin; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setHorizontalMargin:(double)arg1;
- (void)setSection:(id)arg1;
- (void)_onDataChanged;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_updateData;
- (BOOL)showMoreButton;
- (id)displayTitleForSection;
- (void)_ensureDetailView;
- (id)createExtButton;
- (id)createTimeLabel;
- (CGSize)_doLayout;
- (void)prepareForReuse;
- (void)_onClick;
- (void)onClickAllBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)horizontalMargin;
- (id)section;
- (id)extButton;
- (void)setExtButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)detailTextView;
- (void)setDetailTextView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (double)displayMargin;
- (void)setDisplayMargin:(double)arg1;
- (void).cxx_destruct;
@end
