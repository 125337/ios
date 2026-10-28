@interface WCFinderLiveNoticeViewItemView : UIButton
{
    BOOL _showCoveredStyle; // +0x8
    BOOL _isInList; // +0x9
    BOOL _isTop; // +0xa
    id /* block */ _onClickedTopNotice; // +0x10
    UIImageView * _arrowImageView; // +0x18
    UIView * _topLineView; // +0x20
    UIView * _topNoticeContainer; // +0x28
    UIView * _verticalLineView; // +0x30
    UILabel * _topNoticeLabel; // +0x38
    double _arrowPaddingRightWhenNotInList; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setShowCoveredStyle:(BOOL)arg1;
- (void)updateIsInList:(BOOL)arg1;
- (void)layoutSubviews;
- (double)getCardArrowPaddingRight;
- (void)onTapTopNotice;
- (id /* block */)onClickedTopNotice;
- (void)setOnClickedTopNotice:(id /* block */)arg1;
- (BOOL)showCoveredStyle;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (BOOL)isInList;
- (void)setIsInList:(BOOL)arg1;
- (id)topNoticeContainer;
- (void)setTopNoticeContainer:(id)arg1;
- (id)verticalLineView;
- (void)setVerticalLineView:(id)arg1;
- (id)topNoticeLabel;
- (void)setTopNoticeLabel:(id)arg1;
- (BOOL)isTop;
- (void)setIsTop:(BOOL)arg1;
- (double)arrowPaddingRightWhenNotInList;
- (void)setArrowPaddingRightWhenNotInList:(double)arg1;
- (void).cxx_destruct;
@end
