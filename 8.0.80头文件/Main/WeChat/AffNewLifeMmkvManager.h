@interface AffNewLifeMmkvManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (BOOL)updateNewLifeConfig:(id)arg1;
- (id)getNewLifeConfig;
- (BOOL)savePrepareAttr:(id)arg1 flag:(unsigned long long)arg2;
- (unsigned long long)getPrepareAttr:(id)arg1 defValue:(unsigned long long)arg2;
- (BOOL)setStringSync:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getStringSync:(id)arg1 key:(id)arg2 defValue:(id)arg3;
- (BOOL)setInt32Sync:(id)arg1 key:(id)arg2 value:(int)arg3;
- (int)getInt32Sync:(id)arg1 key:(id)arg2 defValue:(int)arg3;
- (BOOL)setLongSync:(id)arg1 key:(id)arg2 value:(unsigned long long)arg3;
- (unsigned long long)getLongSync:(id)arg1 key:(id)arg2 defValue:(unsigned long long)arg3;
- (BOOL)setBoolSync:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (BOOL)getBoolSync:(id)arg1 key:(id)arg2 defValue:(BOOL)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
