@interface WCPayFaceHBQRCodeInfo : NSObject
{
    unsigned int _totalNum; // +0x8
    NSString * _sendId; // +0x10
    NSString * _reqkey; // +0x18
    NSString * _shareUrl; // +0x20
}
- (id)sendId;
- (void)setSendId:(id)arg1;
- (id)reqkey;
- (void)setReqkey:(id)arg1;
- (unsigned int)totalNum;
- (void)setTotalNum:(unsigned int)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (void).cxx_destruct;
@end
