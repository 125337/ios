@interface WCPayTransferMessageViewModel : WCPayBaseMessageViewModel
{
    NSString * _bgImageName; // +0x70
    double _groupTransferBubbleHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (int)revokeTimeLimitInSecond;
- (id)getRevokeMsgCustomizeActionSheet;
- (id)sourceTitle;
- (id)sourceTag;
- (id)descText;
- (id)titleText;
- (id)innerTitleText;
- (id)getGroupTransferTitleText;
- (long long)getFeeDescLength;
- (id)getGroupTransferNicknameWithContact:(id)arg1;
- (double)iconSize;
- (unsigned long long)bubbleType;
- (id)iconName;
- (BOOL)isGroupTransferMsgOrOpenim;
- (BOOL)isGroupTransferMsgForMe;
- (double)getGroupTransferBubbleHeight;
- (BOOL)isGroupTransferMsgOutSider;
- (BOOL)isTransferBubbleFromReceiver;
- (BOOL)hasTransferAddress;
- (BOOL)shouldShowAddressIcon;
- (BOOL)isUnHandleTransferMsgSendFromMe;
- (unsigned int)msgStatus;
- (id)additionalAccessibilityDescription;
- (id)bgImageName;
- (double)groupTransferBubbleHeight;
- (void)setGroupTransferBubbleHeight:(double)arg1;
- (void).cxx_destruct;
@end

