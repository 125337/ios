@interface AppRingBackMessageCellView : BaseMessageCellView
{
    UIImageView * _bubbleView; // +0x28
}
- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)shouldLayoutIfNeeded;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (void).cxx_destruct;
@end

