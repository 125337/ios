@interface GameCenterPBEventWrap : MMObject <PBMessageObserverDelegate>
{
    unsigned int _eventId; // +0x8
    NSString * _svrpath; // +0x10
    id /* block */ _completion; // +0x18
}
+ (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (void)sendPBRequest:(id)arg1 command:(unsigned int)arg2 svrPath:(id)arg3 responseClass:(Class)arg4 longPolling:(BOOL)arg5 additionalInfo:(id)arg6 completion:(id /* block */)arg7;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)svrpath;
- (void)setSvrpath:(id)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

