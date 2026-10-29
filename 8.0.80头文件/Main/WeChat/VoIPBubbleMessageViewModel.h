@interface VoIPBubbleMessageViewModel : CommonMessageViewModel
{
    BOOL _shouldReportExposure; // +0x70
    BOOL _showRedDotInCurrentSession; // +0x71
    VoIPBubbleMsg * _bubbleMsg; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)createMessageViewModelWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (BOOL)shouldShowRedDot;
- (BOOL)shouldShowRedDotForCurrentMessage;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)statusTips;
- (id)additionalAccessibilityDescription;
- (id)contentTextColor;
- (id)bubbleMsg;
- (void)setBubbleMsg:(id)arg1;
- (BOOL)shouldReportExposure;
- (void)setShouldReportExposure:(BOOL)arg1;
- (BOOL)showRedDotInCurrentSession;
- (void)setShowRedDotInCurrentSession:(BOOL)arg1;
- (void).cxx_destruct;
@end
