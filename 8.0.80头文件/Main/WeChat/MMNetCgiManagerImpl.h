@interface MMNetCgiManagerImpl : NSObject <MMNetCgiManagerBase>
{
    MMNetCgiManagerCallback * callback; // +0x8
}
+ (id)shareInstance;
- (void)setCallback:(id)arg1;
- (void)requestAsync:(unsigned long long)arg1 cmdId:(int)arg2 url:(id)arg3 reqData:(id)arg4 baserequestFieldnumber:(int)arg5 timeout:(int)arg6 longPollingTimeout:(const void *)arg7;
- (void).cxx_destruct;
@end
