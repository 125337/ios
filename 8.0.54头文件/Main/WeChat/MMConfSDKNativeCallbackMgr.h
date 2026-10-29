@interface MMConfSDKNativeCallbackMgr : NSObject
{
    WxConfSDKCallback * nCallback; // +0x8
    NSMutableDictionary * _outerCallbacks; // +0x10
    recursive_mutex recursive_mutex_; // +0x18
}
- (id)init;
- (IWXConfCallback *)refreshCallback:(BOOL)arg1;
- (void)dealloc;
- (BOOL)getIfCallbackPointNil;
- (id)callbackImp:(int)arg1 errCode:(int)arg2 data:(void *)arg3 dataLength:(int)arg4;
- (void)registerWillListen:(int)arg1 callback:(id)arg2;
- (void)removeWillListen:(int)arg1 callback:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

