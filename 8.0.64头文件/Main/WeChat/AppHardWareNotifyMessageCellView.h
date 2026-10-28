@interface AppHardWareNotifyMessageCellView : BaseMessageCellView
{
    UIImageView * m_bgImageView; // +0x28
    UIImageView * m_arrowImageView; // +0x30
}
- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (void)layoutContentView;
- (void)setHighlighted:(BOOL)arg1;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end
