@interface VoIPConfSDKNativeCallbackMgr : NSObject
{
    WxNewConfSDKCallback * nCallback; // +0x8
    NSMutableDictionary * _outerCallbacks; // +0x10
    recursive_mutex recursive_mutex_; // +0x18
    unsigned int _status; // +0x58
    id <VoIPConfSDKNativeCallbackMgrDelegate> _callbackDelegate; // +0x60
}
- (id)init;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)dealloc;
- (IWXConfCallback *)refreshCallback:(BOOL)arg1;
- (id)callbackImp:(int)arg1 errCode:(int)arg2 data:(void *)arg3 dataLength:(int)arg4;
- (BOOL)IsInWxGroup:(const char *)arg1 userName:(const char *)arg2;
- (id)callbackDelegate;
- (void)setCallbackDelegate:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
