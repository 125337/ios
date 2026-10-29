@interface AppRecordMessageCellView : CommonMessageCellView
{
    UILabel * m_titleLabel; // +0xa8
    UILabel * m_descLabel; // +0xb0
}
- (void)layoutContentView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (BOOL)canShowFavoriteMenuItem;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end

