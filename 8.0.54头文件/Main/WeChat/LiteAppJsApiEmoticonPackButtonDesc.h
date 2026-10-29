@interface LiteAppJsApiEmoticonPackButtonDesc : LiteAppJsApi <EmoticonButtonDescExt>
{
    NSString * _pid; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (id)pid;
- (void)setPid:(id)arg1;
- (void).cxx_destruct;
@end

