@interface WCFinderLiveCompleteMoreFooterView : UIView
{
    BOOL _isSquareSwitchEnabled; // +0x8
    id /* block */ _goSquareBlock; // +0x10
    id /* block */ _heightUpdateBlock; // +0x18
    MMUIImageView * _arrowImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsSquareSwitchEnabled:(BOOL)arg1;
- (void)onClickedGoSquare;
- (double)getPreferHeight;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)titleLabel;
- (id)arrowImageView;
- (BOOL)isSquareSwitchEnabled;
- (id /* block */)goSquareBlock;
- (void)setGoSquareBlock:(id /* block */)arg1;
- (id /* block */)heightUpdateBlock;
- (void)setHeightUpdateBlock:(id /* block */)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
