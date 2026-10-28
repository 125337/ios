@interface AppRecordMessageCellView : CommonMessageCellView
{
    UILabel * m_titleLabel; // +0xb0
    UILabel * m_descLabel; // +0xb8
}
- (void)layoutContentView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end
