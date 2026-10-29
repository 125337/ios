@interface EnterpriseContactDB : MMObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_friendTable; // +0x10
    WCTTable * m_myTable; // +0x18
    NSString * _path; // +0x20
}
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)closeDB;
- (BOOL)runTransaction:(id /* block */)arg1;
- (id)getContact:(id)arg1;
- (id)getAllContacts;
- (BOOL)addContact:(id)arg1;
- (BOOL)batchAddContact:(id)arg1;
- (BOOL)updateContact:(id)arg1;
- (BOOL)deleteContact:(id)arg1;
- (id)getMyContact;
- (BOOL)setMyContact:(id)arg1;
- (void)deleteMyContact;
- (void)deleteDB;
- (id)getTableByName:(id)arg1;
- (void).cxx_destruct;
@end

