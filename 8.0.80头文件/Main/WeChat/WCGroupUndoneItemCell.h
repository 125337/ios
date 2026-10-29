@interface WCGroupUndoneItemCell : UICollectionViewCell
{
    MMUIButton * _roundedContainer; // +0x8
    MMWebImageView * _headView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    UIView * _divLine; // +0x20
    MMUIButton * _completeButton; // +0x28
    UIImageView * _memberImageView; // +0x30
    MMUILabel * _numLabel; // +0x38
    NSString * _lastImageUrl; // +0x40
    ChatRoomToolMessageEventInfo * _model; // +0x48
    id <WCGroupUndoneItemCellDelegate> _delegate; // +0x50
}
+ (id)LabelFont;
+ (id)CompleteLabelFont;
+ (id)ReplyLabelFont;
+ (double)WidthToFitTitle:(id)arg1;
+ (double)WidthToFitCompleteTitle:(id)arg1;
+ (double)WidthToFitReplyTitle:(id)arg1;
+ (CGSize)SizeToFitModel:(id)arg1;
+ (double)CellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initViews;
- (void)updateWithModel:(id)arg1;
- (void)showMenus;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onRevoke:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)layoutSubviews;
- (void)onClose:(id)arg1;
- (void)onTapContainer:(id)arg1;
- (void)onComplete:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
