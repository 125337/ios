@interface ilinkMultiTalkMessageCellView : BaseMessageCellView
{
    UIImageView * _bubbleView; // +0x28
}
- (void)layoutContentView;
- (void)onTouchUpInside;
- (BOOL)shouldLayoutIfNeeded;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
