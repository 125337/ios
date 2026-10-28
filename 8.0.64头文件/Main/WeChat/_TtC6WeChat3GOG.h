@interface _TtC6WeChat3GOG : MMUserService <MMServiceProtocol>
{
     _main; // +0x8
}
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)reportWithTask:(id)arg1 response1:(id)arg2;
- (void)reportWithMsg:(id)arg1 md5:(id)arg2 mediaid:(unsigned long long)arg3 fileid:(id)arg4 filekey:(id)arg5;
- (void)reportWithTask:(id)arg1 response2:(id)arg2;
- (void)reportWithMsg:(id)arg1 video:(id)arg2;
- (void)reportWithTask:(id)arg1;
- (void)cacheWithVideo:(id)arg1 createTime:(long long)arg2;
- (id)init;
- (void).cxx_destruct;
@end
