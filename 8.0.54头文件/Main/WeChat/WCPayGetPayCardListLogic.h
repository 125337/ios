@interface WCPayGetPayCardListLogic : WCPayControlLogic
{
    int scene; // +0x38
}
- (void)startLogic;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (int)scene;
- (void)setScene:(int)arg1;
@end

