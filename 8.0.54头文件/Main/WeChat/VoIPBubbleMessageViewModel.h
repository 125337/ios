@interface VoIPBubbleMessageViewModel : CommonMessageViewModel
{
    VoIPBubbleMsg * _bubbleMsg; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)createMessageViewModelWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (BOOL)shouldShowRedDot;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)statusTips;
- (id)additionalAccessibilityDescription;
- (id)contentTextColor;
- (id)bubbleMsg;
- (void)setBubbleMsg:(id)arg1;
- (void).cxx_destruct;
@end

