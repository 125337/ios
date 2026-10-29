@interface EnterpriseSessionCellData : MMBaseSessionCellData
{
    BOOL m_isSessionTop; // +0x47
}
- (void)updateWithBaseSessionInfo:(id)arg1;
- (void)updateUnreadCount;
- (void)updateNameLabelText:(id)arg1;
- (void)updateMsgLabelTextForEnterpriseMsg:(id)arg1;
- (void)updateHeadViewInfo:(id)arg1;
- (void)updateSessionTop;
- (id)textForMsgLabelWithMessage:(id)arg1;
- (BOOL)isSessionTop;
- (void)setIsSessionTop:(BOOL)arg1;
@end
