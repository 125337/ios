@interface ThirdPartyServicePresentDataWrap : NSObject
{
    CMessageWrap * _messageWrap; // +0x8
    WAWxMaterialOpenInfo * _openInfo; // +0x10
}
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (void).cxx_destruct;
@end
