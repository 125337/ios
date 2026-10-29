@interface ScanTVHelper : MMObject <PBMessageObserverDelegate>
{
    NSString * m_nsTVID; // +0x8
    unsigned int m_uiTVDetailScene; // +0x10
    id <ScanTVDelegate> m_delegate; // +0x18
}
- (void)dealloc;
- (void)GetTVItemByID:(id)arg1 Scene:(unsigned int)arg2;
- (void)StopGet;
- (void)GetTVItemFromSVR;
- (void)HandleGetTVItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_nsTVID;
- (void)setM_nsTVID:(id)arg1;
- (void).cxx_destruct;
@end

