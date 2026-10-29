@interface AffUdrNativeToCppManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<udr::AffUdrNativeToCppManagerCppCover> cpp_cover; // +0x80
    weak_ptr<udr::AffUdrNativeToCppManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<udr::AffUdrNativeToCppManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (optional<NSData *>)getResourceX:(id)arg1 name:(id)arg2;
- (optional<NSData *>)getResourceDecryptX:(id)arg1 name:(id)arg2;
- (optional<NSData *>)getResourceListX:(id)arg1;
- (optional<NSData *>)getAllResourceListX;
- (void)checkNoLoginResourceX:(id)arg1 callback:(id)arg2;
- (void)checkResourceX:(id)arg1 callback:(id)arg2;
- (void)batchCheckResourceX:(id)arg1 callback:(id)arg2;
- (void)specifiedCheckResourceX:(id)arg1 name:(id)arg2 version:(int)arg3 extInfo:(const void *)arg4 callback:(id)arg5;
- (void)periodCheckResourceXWithoutParam;
- (void)initILinkX:(id)arg1;
- (void)updateNetworkState:(id)arg1;
- (void)cleanAllResourceX;
- (BOOL)deleteResourceX:(id)arg1 name:(id)arg2;
- (void)periodCleanResourceX;
- (void)resetIntervalTimeX;
- (void)dealAccountIn:(unsigned long long)arg1 expandParam:(id)arg2;
- (void)dealAccountOut;
- (optional<NSString *>)decodeVirtualPath:(id)arg1;
- (void)registerCppProject:(id)arg1 addToPeriod:(BOOL)arg2 params:(id)arg3 biz:(id)arg4;
- (void)registerGlobalCallBack:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
