@interface LiteAppJsApiCompressImage : LiteAppJsApi <IWebviewResourceManagerExt>
{
    NSMutableArray * _localIds; // +0x20
    unsigned long long _totalCount; // +0x28
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)delayNotifyWeb:(id)arg1;
- (id)localIds;
- (void)setLocalIds:(id)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
