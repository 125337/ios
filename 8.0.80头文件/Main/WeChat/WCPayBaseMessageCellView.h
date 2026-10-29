@interface WCPayBaseMessageCellView : CommonMessageCellView
{
    UILabel * m_descLabel; // +0xb8
    UILabel * m_titleLabel; // +0xc0
    UIImageView * m_iconView; // +0xc8
}
- (void)layoutContentView;
- (BOOL)canAdjustsFontSizeToFitWidth;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)initIconView;
- (void)onTouchUpInside;
- (BOOL)disableImplicitAnimations;
- (void).cxx_destruct;
@end
