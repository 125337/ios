@interface WxpayLiteAppGateExecutionOutcome : NSObject
{
    BOOL _legacyOpened; // +0x8
    NSString * _terminal; // +0x10
    NSString * _reported; // +0x18
    NSString * _stage; // +0x20
}
- (id)initWithTerminal:(id)arg1 legacyOpened:(BOOL)arg2 reported:(id)arg3 stage:(id)arg4;
- (id)terminal;
- (BOOL)legacyOpened;
- (id)reported;
- (id)stage;
- (void).cxx_destruct;
@end
