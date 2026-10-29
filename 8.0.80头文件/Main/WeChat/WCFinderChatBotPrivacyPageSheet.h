@interface WCFinderChatBotPrivacyPageSheet : ChatBotPrivacyPageSheet
{
    id /* block */ _comfirmHandler; // +0x8
    id /* block */ _cancelHandler; // +0x10
}
- (id)initWithConfirmHandler:(id /* block */)arg1 cancelHandler:(id /* block */)arg2;
- (void)onPageSheetContainerBgTapped;
- (id /* block */)comfirmHandler;
- (void)setComfirmHandler:(id /* block */)arg1;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
