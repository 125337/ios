@interface MMBankCardType : NSObject
{
    BOOL _isMaintainance; // +0x8
    NSString * _bankType; // +0x10
    NSString * _bankName; // +0x18
    NSString * _bankaccType; // +0x20
    NSString * _bankaccTypeName; // +0x28
    NSString * _forbidWord; // +0x30
}
+ (id)BankCardTypeWithBankType:(id)arg1 bankName:(id)arg2 bankaccType:(id)arg3 bankaccTypeName:(id)arg4 isMaintainance:(BOOL)arg5 forbidWord:(id)arg6;
- (id)initWithBankType:(id)arg1 bankName:(id)arg2 bankaccType:(id)arg3 bankaccTypeName:(id)arg4 isMaintainance:(BOOL)arg5 forbidWord:(id)arg6;
- (id)description;
- (id)bankType;
- (id)bankName;
- (id)bankaccType;
- (id)bankaccTypeName;
- (BOOL)isMaintainance;
- (id)forbidWord;
- (void).cxx_destruct;
@end
