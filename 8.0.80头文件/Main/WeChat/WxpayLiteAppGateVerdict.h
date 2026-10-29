@interface WxpayLiteAppGateVerdict : NSObject
{
    BOOL _useKit; // +0x8
    NSString * _engine; // +0x10
    NSString * _reason; // +0x18
    NSString * _detail; // +0x20
    NSString * _blocked; // +0x28
}
- (id)initWithUseKit:(BOOL)arg1 reason:(id)arg2 detail:(id)arg3 blocked:(id)arg4;
- (BOOL)canOpenKit;
- (id)description;
- (BOOL)useKit;
- (id)engine;
- (id)reason;
- (id)detail;
- (id)blocked;
- (void).cxx_destruct;
@end
