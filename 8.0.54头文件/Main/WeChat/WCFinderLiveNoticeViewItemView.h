@interface WCFinderLiveNoticeViewItemView : UIButton
{
    BOOL _showCoveredStyle; // +0x8
    BOOL _isInList; // +0x9
    UIImageView * _arrowImageView; // +0x10
    UIView * _topLineView; // +0x18
    double _arrowPaddingRightWhenNotInList; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setShowCoveredStyle:(BOOL)arg1;
- (void)updateIsInList:(BOOL)arg1;
- (void)layoutSubviews;
- (double)getCardArrowPaddingRight;
- (BOOL)showCoveredStyle;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (BOOL)isInList;
- (void)setIsInList:(BOOL)arg1;
- (double)arrowPaddingRightWhenNotInList;
- (void)setArrowPaddingRightWhenNotInList:(double)arg1;
- (void).cxx_destruct;
@end

