@interface ContactTagEditLogic : MMObject <IContactLabelMgrExt>
{
    CContact * m_contact; // +0x8
    unsigned int _uiJobID; // +0x10
    int TagCountOfCreateTagScence; // +0x14
    int TagCountOfExistTagScence; // +0x18
    id <ContactTagEditLogicDelegate> delegate; // +0x20
    NSArray * _arrTagNameList; // +0x28
    NSArray * _arrAllTagNameList; // +0x30
    NSArray * _arrContactTagNameList; // +0x38
}
- (id)initWithContact:(id)arg1;
- (BOOL)isCreateNewTagName;
- (BOOL)isModContactTagName;
- (void)JobForTagEdit:(id)arg1 withAllTags:(id)arg2 contactTags:(id)arg3;
- (unsigned int)JobForCreateTagNameWithServer;
- (unsigned int)JobForContactTagChanged;
- (void)callDelegate:(int)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)arrTagNameList;
- (void)setArrTagNameList:(id)arg1;
- (id)arrAllTagNameList;
- (void)setArrAllTagNameList:(id)arg1;
- (id)arrContactTagNameList;
- (void)setArrContactTagNameList:(id)arg1;
- (void).cxx_destruct;
@end

