@interface CNewSyncWrap : NSObject
{
    unsigned int m_uiSelector; // +0x8
    unsigned int m_uiCgi; // +0xc
    BOOL m_bIsSyncIng; // +0x10
    BOOL m_bContinue; // +0x11
    NSString * m_nsSyncKeyMd5; // +0x18
    unsigned int m_uiSyncBufferType; // +0x20
}
- (id)init;
- (unsigned int)m_uiSelector;
- (void)setM_uiSelector:(unsigned int)arg1;
- (unsigned int)m_uiCgi;
- (void)setM_uiCgi:(unsigned int)arg1;
- (BOOL)m_bIsSyncIng;
- (void)setM_bIsSyncIng:(BOOL)arg1;
- (BOOL)m_bContinue;
- (void)setM_bContinue:(BOOL)arg1;
- (id)m_nsSyncKeyMd5;
- (void)setM_nsSyncKeyMd5:(id)arg1;
- (unsigned int)m_uiSyncBufferType;
- (void)setM_uiSyncBufferType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
