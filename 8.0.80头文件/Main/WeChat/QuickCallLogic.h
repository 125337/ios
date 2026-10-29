@interface QuickCallLogic : NSObject <IContactMgrExt>
{
    id <QuickCallLogicDelegate> _delegate; // +0x8
    long long _lastContactCount; // +0x10
    QuickCallContactCgi * _quickCallCgi; // +0x18
    NSMutableArray * _contacts; // +0x20
    NSMutableSet * _contactSet; // +0x28
}
- (id)init;
- (void)dealloc;
- (long long)quickCallContactCount;
- (id)quickCallContactAtIndex:(long long)arg1;
- (id)quickCallContacts;
- (void)addContacts:(id)arg1 complete:(id /* block */)arg2;
- (void)removeContacts:(id)arg1 complete:(id /* block */)arg2;
- (BOOL)shouldShowWidgetEducate;
- (void)loadQuickCallContacts;
- (void)onModifyContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)lastContactCount;
- (void)setLastContactCount:(long long)arg1;
- (id)quickCallCgi;
- (void)setQuickCallCgi:(id)arg1;
- (id)contacts;
- (void)setContacts:(id)arg1;
- (id)contactSet;
- (void)setContactSet:(id)arg1;
- (void).cxx_destruct;
@end
