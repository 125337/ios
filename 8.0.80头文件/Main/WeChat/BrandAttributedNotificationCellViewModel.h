@interface BrandAttributedNotificationCellViewModel : BrandNotificationCellViewModel
{
    NSMutableArray * m_messageTextArr; // +0x8
    CContact * m_brandContact; // +0x10
}
+ (BOOL)canCreateViewModelWithMsgWrap:(id)arg1;
- (id)cellViewClassName;
- (void)updateBrandContact;
- (id)brandContact;
- (id)contactLabelStr;
- (id)headerImgUrl;
- (double)viewHeight;
- (id)messageText;
- (id)messageLabelStyles;
- (CGSize)messageLabelSize;
- (CGSize)messageLabelSizeAtIndex:(unsigned long long)arg1;
- (double)firstMessageAttributedStringTopSpace;
- (double)timeLabelTopMargin;
- (id)notifyMsg;
- (id)arrText;
- (unsigned long long)messageAttributedStringCount;
- (unsigned int)messageAttributedStringMaxLineCountAtIndex:(unsigned long long)arg1;
- (id)messageAttributedStringAtIndex:(unsigned long long)arg1;
- (id)messageAttributedStringArr;
- (void).cxx_destruct;
@end
