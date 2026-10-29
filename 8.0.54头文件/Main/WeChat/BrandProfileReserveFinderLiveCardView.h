@interface BrandProfileReserveFinderLiveCardView : MMUIView <ExpandableTextViewDelegate>
{
    BOOL _bReserved; // +0x8
    id <BrandProfileReserveFinderLiveCardViewDelegate> _delegate; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    ExpandableTextView * _contentLabel; // +0x28
    MMUIButton * _reserveButton; // +0x30
    BizProfileV2Resp * _cacheItem; // +0x38
    MMUIButton * _showMoreReserveButton; // +0x40
    UILabel * _allReserveLabel; // +0x48
    UIImageView * _arrowImageView; // +0x50
    UIView * _horizontalSperatorLineView; // +0x58
    UIView * _topLineView; // +0x60
    UIView * _bottomLineView; // +0x68
    UIAccessibilityElement * _fullCardElement; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setCacheItem:(id)arg1;
- (void)setupSubviews;
- (void)setupContentLabel;
- (void)layoutSubviews;
- (double)labelMaxiumWidth;
- (void)onReserveButtonClicked;
- (void)onShowMoreButtonClicked;
- (void)onExpandableTextViewExpand:(BOOL)arg1;
- (void)updateSize:(CGSize)arg1;
- (void)setBReserved:(BOOL)arg1;
- (void)updateSubviewSize;
- (id)accessibilityElements;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)reserveButton;
- (void)setReserveButton:(id)arg1;
- (id)cacheItem;
- (id)showMoreReserveButton;
- (void)setShowMoreReserveButton:(id)arg1;
- (id)allReserveLabel;
- (void)setAllReserveLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)horizontalSperatorLineView;
- (void)setHorizontalSperatorLineView:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)fullCardElement;
- (void)setFullCardElement:(id)arg1;
- (BOOL)bReserved;
- (void).cxx_destruct;
@end

