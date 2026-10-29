@interface WXQRCodePayReq : BaseReq
{
    NSString * _codeContent; // +0x18
    NSString * _extraMsg; // +0x20
}
- (id)codeContent;
- (void)setCodeContent:(id)arg1;
- (id)extraMsg;
- (void)setExtraMsg:(id)arg1;
- (void).cxx_destruct;
@end

