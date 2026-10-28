@interface WASubscriptionMessageTemplatePageSheet : WAAuthorizePageSheet
{
    long long _backButtonType; // +0x8
    WASMTPageSheetViewModel * _smtViewModel; // +0x10
}
- (id)initWithTitle:(id)arg1 messageList:(id)arg2;
- (void)setBackButtonType:(long long)arg1;
- (id)subviewClassList;
- (id)subViewModel;
- (long long)backButtonType;
- (id)smtViewModel;
- (void)setSmtViewModel:(id)arg1;
- (void).cxx_destruct;
@end
