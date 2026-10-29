@interface EmojiUploadCgi : StoreEmotionBaseCgi
{
    NSString * m_md5; // +0x8
    unsigned int m_totalLen; // +0x10
    unsigned long long m_requestStartTime; // +0x18
    BOOL m_overLimit; // +0x20
    BOOL m_isTooLarge; // +0x21
    BOOL m_isConnectFailed; // +0x22
    BOOL m_isAntiSpam; // +0x23
    unsigned int m_startPos; // +0x24
    NSData * m_buffer; // +0x28
    NSString * m_realMd5; // +0x30
    EmoticonUploadInfoObj * _uploadInfoObj; // +0x38
    id <EmojiUploadCgiDelegate> _delegate; // +0x40
}
- (id)initWithMd5:(id)arg1 totalLen:(unsigned int)arg2;
- (BOOL)startRequestWithStartPos:(unsigned int)arg1 buffer:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)startPos;
- (id)buffer;
- (id)realMd5;
- (BOOL)overLimit;
- (BOOL)isTooLarge;
- (BOOL)isConnectFailed;
- (BOOL)isAntiSpam;
- (id)uploadInfoObj;
- (void)setUploadInfoObj:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

