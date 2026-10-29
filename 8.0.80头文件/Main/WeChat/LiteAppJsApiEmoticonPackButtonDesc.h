@interface LiteAppJsApiEmoticonPackButtonDesc : LiteAppJsApi <EmoticonButtonDescExt>
{
    NSString * _pid; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (int)getStatusForPid:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (void).cxx_destruct;
@end
