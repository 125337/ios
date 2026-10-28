@interface WCPayTransToBankCardData : MMObject
{
    unsigned int _m_enterTimeScene; // +0x8
    unsigned int _m_uiTransferAmount; // +0xc
    unsigned int _m_uiPondage; // +0x10
    unsigned int _m_uiInputType; // +0x14
    WCPayTransToBankCardReceiver * _m_selectReceiver; // +0x18
    NSString * _m_nsTransferDesc; // +0x20
    WarningNotice * _noticeItem; // +0x28
    NSMutableArray * _m_otherReceiverHistory; // +0x30
    NSMutableArray * _m_myReceiverHistory; // +0x38
}
- (BOOL)isSelectFromHistory;
- (id)m_selectReceiver;
- (void)setM_selectReceiver:(id)arg1;
- (unsigned int)m_enterTimeScene;
- (void)setM_enterTimeScene:(unsigned int)arg1;
- (id)m_nsTransferDesc;
- (void)setM_nsTransferDesc:(id)arg1;
- (unsigned int)m_uiTransferAmount;
- (void)setM_uiTransferAmount:(unsigned int)arg1;
- (unsigned int)m_uiPondage;
- (void)setM_uiPondage:(unsigned int)arg1;
- (unsigned int)m_uiInputType;
- (void)setM_uiInputType:(unsigned int)arg1;
- (id)noticeItem;
- (void)setNoticeItem:(id)arg1;
- (id)m_otherReceiverHistory;
- (void)setM_otherReceiverHistory:(id)arg1;
- (id)m_myReceiverHistory;
- (void)setM_myReceiverHistory:(id)arg1;
- (void).cxx_destruct;
@end
