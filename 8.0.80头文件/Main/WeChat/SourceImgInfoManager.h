@interface SourceImgInfoManager : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _sourceInfoKv; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (void)SetSourceImgInfo:(id)arg1 imgInfo:(id)arg2;
- (id)GetSourceImgInfo:(id)arg1;
- (void)Report:(id)arg1 actionID:(int)arg2;
- (void)report28466:(int)arg1 contentId:(id)arg2 shareScene:(int)arg3 appId:(id)arg4 fromUin:(unsigned long long)arg5 shareId:(id)arg6 actionId:(int)arg7 shareType:(int)arg8 ssid:(int)arg9 url:(id)arg10;
- (void).cxx_destruct;
@end
