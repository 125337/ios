@interface WCPayBaseMessageCellView : CommonMessageCellView
{
    UILabel * m_descLabel; // +0xa8
    UILabel * m_titleLabel; // +0xb0
    UIImageView * m_iconView; // +0xb8
}
- (void)layoutContentView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)initIconView;
- (void)onTouchUpInside;
- (BOOL)disableImplicitAnimations;
- (void).cxx_destruct;
@end

