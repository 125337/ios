@interface WAPluginCodeSweeperLogic : MMUserService <MMServiceProtocol>
- (void)hit:(id)arg1 version:(unsigned long long)arg2;
- (unsigned long long)sweepPluginCodeForAppid:(id)arg1 version:(unsigned long long)arg2;
- (void)sweepPluginAppid:(id)arg1;
- (void)sweepSize:(unsigned long long)arg1;
- (void)sweepLastUsedOverExpiredDuration:(unsigned int)arg1;
- (unsigned long long)sweepOrphanPluginCodeCreatedBefore:(unsigned int)arg1 deleteCount:(unsigned int *)arg2;
@end
