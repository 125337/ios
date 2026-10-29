@interface ContactTagNoTagBatchSetEditLogic : MMObject <IContactLabelMgrExt>
{
    unsigned int m_uiJobID; // +0x8
    NSArray * m_arrTagNameList; // +0x10
    NSArray * m_arrAllTagNameList; // +0x18
    NSArray * m_arrContactUserName; // +0x20
    id <ContactTagNoTagBatchSetEditLogicDelegate> _delegate; // +0x28
}
- (id)init;
- (void)dealloc;
- (BOOL)isCreateNewTagName;
- (void)JobForTagEdit:(id)arg1 withAllTags:(id)arg2 arrContactUserNames:(id)arg3;
- (unsigned int)JobForCreateTagNameWithServer;
- (unsigned int)JobForContactTagChanged;
- (void)callDelegate:(int)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)m_arrTagNameList;
- (void)setM_arrTagNameList:(id)arg1;
- (id)m_arrAllTagNameList;
- (void)setM_arrAllTagNameList:(id)arg1;
- (id)m_arrContactUserName;
- (void)setM_arrContactUserName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

