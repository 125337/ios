@interface ScanQRCodePCPayUrlHandler : ScanQRCodeUrlPrefixHandler <MMUseCaseCallback>
{
    unsigned int _m_sourceType; // +0x8
    NSString * _m_sourceInfo; // +0x10
}
- (void)dealloc;
- (void)reportCount;
- (id)matchingPrefix;
- (void)handleUrl:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)call:(id)arg1;
- (char)QRCodeType;
- (unsigned int)m_sourceType;
- (void)setM_sourceType:(unsigned int)arg1;
- (id)m_sourceInfo;
- (void)setM_sourceInfo:(id)arg1;
- (void).cxx_destruct;
@end
