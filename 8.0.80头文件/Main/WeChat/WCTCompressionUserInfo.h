@interface WCTCompressionUserInfo : WCTCompressionBaseInfo
{
    void * m_userInfo; // +0x10
}
- (id)initWithUserInfo:(void *)arg1;
- (void)addZSTDNormalCompressProperty:(const void *)arg1;
- (void)addZSTDDictCompressProperty:(const void *)arg1 withDictId:(unsigned char)arg2;
- (void)addZSTDDictCompressProperty:(const void *)arg1 withMatchProperty:(const void *)arg2 andMatchDicts:(id)arg3;
- (void)enableReplaceCompression;
@end
