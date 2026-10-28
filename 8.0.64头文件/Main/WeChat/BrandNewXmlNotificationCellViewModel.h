@interface BrandNewXmlNotificationCellViewModel : BrandNotificationCellViewModel
{
    BrandNewXMLNotification * _notification; // +0x8
}
+ (BOOL)canCreateViewModelWithMsgWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessage:(id)arg1 viewWidth:(double)arg2;
- (void)internalInitWithMsg:(id)arg1;
- (id)brandContact;
- (id)messageText;
- (id)webPageUrl;
- (id)notification;
- (void)setNotification:(id)arg1;
- (void).cxx_destruct;
@end
