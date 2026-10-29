@interface CBTAsstBoardWeAppCellView : CBTAsstBoardBaseCellView
{
    UIImageView * _thumbImageView; // +0x8
    UIView * _cardView; // +0x10
}
- (BOOL)needsBubbleBackground;
- (void)setupCellWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)setupUI;
- (CGRect)getBubbleFrame;
- (id)menuAnchorView;
- (void)onTapAction;
- (void)refreshTheme;
- (void)openWeApp:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end
