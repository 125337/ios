@interface ContactEnsureTask : NSObject <IContactMgrExt>
{
    ContactManagerImpl * _owner; // +0x8
    BOOL _finished; // +0x10
    unsigned long long _taskId; // +0x18
    NSString * _username; // +0x20
}
- (id)initWithTaskId:(unsigned long long)arg1 username:(id)arg2 owner:(id)arg3;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (void)onModifyContact:(id)arg1;
- (void)onFailedToGetContactsFromSvr;
- (unsigned long long)taskId;
- (id)username;
- (void).cxx_destruct;
@end
