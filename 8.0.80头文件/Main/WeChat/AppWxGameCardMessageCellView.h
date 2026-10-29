@interface AppWxGameCardMessageCellView : BaseMessageCellView
{
    UIView * m_sclView; // +0x28
}
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)onAppear;
- (void)onLongTouch;
- (void)showMsgPopupMenu;
- (double)getCellViewInfo;
- (id)operationMenuItems;
- (void).cxx_destruct;
@end
