@interface MMOpenVoiceJoinRoomCGIImp : NSObject <PBMessageObserverDelegate>
{
    NSString * _currentRequestAppId; // +0x8
    id /* block */ _currentRoomCGICallback; // +0x10
}
- (void)cgiJoinRoomWithAppid:(id)arg1 groupId:(id)arg2 signature:(id)arg3 nonceStr:(id)arg4 timeStamp:(int)arg5 privateData:(id)arg6 callback:(id /* block */)arg7;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end

