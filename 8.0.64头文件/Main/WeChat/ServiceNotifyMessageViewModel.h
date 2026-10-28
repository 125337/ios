@interface ServiceNotifyMessageViewModel : CommonMessageViewModel
{
    ServiceNotifyMessageItem * _serviceNotifyMsgItem; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)titleFont;
+ (double)itemsFontSize;
+ (id)itemsFont;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)calculateHeight;
- (id)serviceNotifyMsgItem;
- (void)setServiceNotifyMsgItem:(id)arg1;
- (void).cxx_destruct;
@end
