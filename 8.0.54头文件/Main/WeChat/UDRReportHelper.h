@interface UDRReportHelper : MMUserService <MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    double randomNum; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)report30863Check:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(long long)arg4 state:(int)arg5 errNo:(int)arg6 errCode:(int)arg7 timeStamp:(unsigned int)arg8 sampleRate:(float)arg9;
- (void)report30863CheckFail:(id)arg1 reqItems:(id)arg2 scene:(long long)arg3 state:(int)arg4 errNo:(int)arg5 errCode:(int)arg6 timeStamp:(unsigned int)arg7;
- (void)report30863Download:(id)arg1 state:(int)arg2 errNo:(int)arg3 errCode:(int)arg4 timeStamp:(unsigned int)arg5 sampleRate:(float)arg6;
- (void)report30863Update:(id)arg1 state:(int)arg2 errNo:(int)arg3 errCode:(int)arg4 timeStamp:(unsigned int)arg5 sampleRate:(float)arg6;
- (void)report30863Clean:(id)arg1 name:(id)arg2 version:(int)arg3;
- (void)report30863UserClean:(id)arg1;
- (unsigned char)getDuration:(unsigned int)arg1;
- (unsigned char)sampleReport:(float)arg1;
- (void)report30863:(id)arg1 resourceName:(id)arg2 version:(long long)arg3 scene:(long long)arg4 state:(long long)arg5 errNo:(long long)arg6 errCode:(long long)arg7 duration:(long long)arg8 sampleRate:(float)arg9;
- (void).cxx_destruct;
@end

