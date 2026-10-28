@interface WCPayBizOcrImageHttp : NSObject <NSURLSessionDelegate>
{
    NSString * TAG; // +0x8
    unsigned int _source; // +0x10
    unsigned int _seqNum; // +0x14
    NSURLSession * m_session; // +0x18
    NSMutableURLRequest * m_request; // +0x20
    NSMutableData * m_responseData; // +0x28
    id <WCPayBizeOcrImageHttpDegelate> _m_delegate; // +0x30
    NSString * _sessionKey; // +0x38
    NSURL * _httpUrl; // +0x40
    NSData * _imageData; // +0x48
    NSData * _certPem; // +0x50
    NSString * _baseRequest; // +0x58
    NSArray * _sm2Key; // +0x60
    OcrGetBankCardInfoWechatRegResp * _processResponse; // +0x68
    BankCardOcrEncryptData * _bankcard_res; // +0x70
}
- (id)initWithImage:(id)arg1 delegate:(id)arg2 source:(unsigned int)arg3 seqNum:(unsigned int)arg4 sessionKey:(id)arg5 certPem:(id)arg6 baseRequest:(id)arg7;
- (void)onServiceInit;
- (void)start;
- (id)getSM2Encrpt;
- (id)session;
- (void)setSession:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)responseData;
- (void)setResponseData:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (unsigned int)seqNum;
- (void)setSeqNum:(unsigned int)arg1;
- (id)httpUrl;
- (void)setHttpUrl:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)certPem;
- (void)setCertPem:(id)arg1;
- (id)baseRequest;
- (void)setBaseRequest:(id)arg1;
- (id)sm2Key;
- (void)setSm2Key:(id)arg1;
- (id)processResponse;
- (void)setProcessResponse:(id)arg1;
- (id)bankcard_res;
- (void)setBankcard_res:(id)arg1;
- (void).cxx_destruct;
@end
