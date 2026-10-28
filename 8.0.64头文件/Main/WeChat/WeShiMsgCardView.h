@interface WeShiMsgCardView : MMUIButton
{
    MMWebImageView * _coverView; // +0x8
    RichTextView * _titleView; // +0x10
    UIImageView * _playIcon; // +0x18
    MMUILabel * _videoLengthLabel; // +0x20
    CAGradientLayer * _gradientLayer; // +0x28
    unsigned int _itemIndex; // +0x30
    NSArray * _menuItems; // +0x38
    id <WeiShiMsgCardMenuDelegate> _menuDelegage; // +0x40
}
- (id)initWithFrameAndData:(CGRect)arg1 content:(id)arg2 coverUrl:(id)arg3 timeText:(id)arg4;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onMore:(id)arg1;
- (void)layoutSubviews;
- (void)showMenu:(id)arg1;
- (unsigned int)itemIndex;
- (void)setItemIndex:(unsigned int)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (id)menuDelegage;
- (void)setMenuDelegage:(id)arg1;
- (void).cxx_destruct;
@end
