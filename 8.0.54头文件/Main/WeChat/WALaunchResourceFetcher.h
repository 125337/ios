@interface WALaunchResourceFetcher : MMUserService <MMServiceProtocol>
{
    BOOL _cancelled; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cancelRequest;
- (void)enableRequest;
- (BOOL)isRequestCancelled;
- (BOOL)contact:(id)arg1 debugMode:(unsigned long long)arg2 hasSameOrNewerVersionThan:(unsigned int)arg3;
- (id)getValidAppid:(id)arg1 contact:(id)arg2;
- (id)getValidUsrName:(id)arg1 contact:(id)arg2;
- (void)startFetchLaunchResourceWithOpenInfo:(id)arg1 version:(unsigned int)arg2 taskExtInfo:(id)arg3 contactUpdateHandler:(id /* block */)arg4;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
@end

