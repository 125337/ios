@interface UploadMContactEventHandler : ProtobufEventHandler
{
    NSMutableArray * m_arrMobileList; // +0x8
    NSMutableArray * m_arrEmailList; // +0x10
    NSMutableArray * m_curUploadMobile; // +0x18
    NSMutableArray * m_curUploadEmail; // +0x20
    NSString * m_nsMobile; // +0x28
    unsigned int m_uiUploadCount; // +0x30
}
- (void)OnProtocolStart:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void).cxx_destruct;
@end

