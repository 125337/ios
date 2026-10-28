@interface OcrGetBankCardInfoWechatRegResp : NSObject
{
    NSNumber * _errcode; // +0x8
    NSData * _data_encrypt_key; // +0x10
}
- (id)errcode;
- (void)setErrcode:(id)arg1;
- (id)data_encrypt_key;
- (void)setData_encrypt_key:(id)arg1;
- (void).cxx_destruct;
@end
