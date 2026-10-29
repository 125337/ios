@interface WCPayCardNumberScanTaskV2 : NSObject <WCPayBizOcrImageCgiDelegate>
{
    int _source; // +0x8
    unsigned int _seqNum; // +0xc
    NSData * _m_imageData; // +0x10
    NSString * _sessionKey; // +0x18
    id <WCPayCardNumberScanTaskV2Delegate> _m_delegate; // +0x20
    WCPayBizOcrImageCgi * _m_cgi; // +0x28
}
- (id)initWithImage:(id)arg1 delegate:(id)arg2 source:(unsigned int)arg3 seqNum:(unsigned int)arg4 sessionKey:(id)arg5;
- (void)updateDelegate:(id)arg1;
- (void)start;
- (void)onWCPayBizOcrImageCgiResp:(id)arg1;
- (void)onWCPayBizOcrImageCgiNetworkError:(id)arg1;
- (id)matchImageFromSeqNum:(unsigned int)arg1 leftTop:(CGPoint)arg2 rightTop:(CGPoint)arg3 rightBottom:(CGPoint)arg4 leftBottom:(CGPoint)arg5;
- (id)sizeImage:(id)arg1 leftTop:(CGPoint)arg2 rightTop:(CGPoint)arg3 rightBottom:(CGPoint)arg4 leftBottom:(CGPoint)arg5;
- (id)cropImage:(id)arg1 leftTop:(CGPoint)arg2 rightTop:(CGPoint)arg3 rightBottom:(CGPoint)arg4 leftBottom:(CGPoint)arg5;
- (id)image:(id)arg1 MaskingPath:(id)arg2;
- (double)angleFromLeftTop:(CGPoint)arg1 rightTop:(CGPoint)arg2;
- (id)image:(id)arg1 rotatedByAngle:(double)arg2;
- (id)imageTrimmingTransparent:(id)arg1;
- (id)m_imageData;
- (void)setM_imageData:(id)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (unsigned int)seqNum;
- (void)setSeqNum:(unsigned int)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_cgi;
- (void)setM_cgi:(id)arg1;
- (void).cxx_destruct;
@end

