@interface ContactManagerImpl : NSObject <ContactManagerBase>
{
    ContactManagerCallback * _callback; // +0x8
    NSMutableSet * _activeTasks; // +0x10
    NSLock * _taskLock; // +0x18
}
- (id)init;
- (void)setCallback:(id)arg1;
- (id)getContact:(id)arg1;
- (void)getContactEnsureAsync:(unsigned long long)arg1 username:(id)arg2;
- (void)onContactEnsureTaskComplete:(id)arg1 ret:(int)arg2 contact:(id)arg3;
- (id)serializeContact:(id)arg1;
- (void).cxx_destruct;
@end
