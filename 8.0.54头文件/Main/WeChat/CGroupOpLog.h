@interface CGroupOpLog : NSObject
- (id)init;
- (BOOL)add_MemberSwitch:(id)arg1 usrName:(id)arg2 flag:(unsigned int)arg3 open:(BOOL)arg4 sync:(BOOL)arg5;
- (unsigned int)start_QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (BOOL)add_ModifyContact:(id)arg1 chatBoxStatus:(BOOL)arg2 sync:(BOOL)arg3;
@end

