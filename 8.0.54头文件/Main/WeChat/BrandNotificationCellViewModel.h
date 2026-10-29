@interface BrandNotificationCellViewModel : BrandNotificationBaseCellViewModel
{
    CContact * _brandContact; // +0x8
    NSMutableArray * _messageLabelStyles; // +0x10
    NSString * _messageText; // +0x18
    NSMutableArray * _contactLabelStyles; // +0x20
    double _viewHeight; // +0x28
    CGSize _messageLabelSize; // +0x30
    CGSize _contactLabelSize; // +0x40
}
+ (BOOL)canCreateViewModelWithMsgWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (void)updateBrandContact;
- (id)brandContact;
- (double)labelMaxWidth;
- (double)viewHeight;
- (id)messageLabelStyles;
- (CGSize)messageLabelSize;
- (id)contactLabelStyles;
- (CGSize)contactLabelSize;
- (id)contactLabelStr;
- (id)contactLabelColor;
- (id)messageText;
- (id)textForMsgLabelWithSender:(id)arg1 messageWrap:(id)arg2;
- (id)headerImgUrl;
- (void)setBrandContact:(id)arg1;
- (void)setMessageLabelStyles:(id)arg1;
- (void)setMessageLabelSize:(CGSize)arg1;
- (void)setMessageText:(id)arg1;
- (void)setContactLabelStyles:(id)arg1;
- (void)setContactLabelSize:(CGSize)arg1;
- (void)setViewHeight:(double)arg1;
- (void).cxx_destruct;
@end

