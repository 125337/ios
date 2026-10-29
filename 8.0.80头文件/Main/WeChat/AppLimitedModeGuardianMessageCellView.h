@interface AppLimitedModeGuardianMessageCellView : CommonMessageCellView
{
    UIImageView * m_thumbImageView; // +0xb8
    UILabel * m_titleLabel; // +0xc0
    UILabel * m_descLabel; // +0xc8
}
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDescLabel;
- (void)addThumbImageView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)updateThumbImage;
- (void).cxx_destruct;
@end
