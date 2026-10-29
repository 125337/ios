@interface VoIPMPIlinkSDKStatAPI : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<voipmp::VoIPMPIlinkSDKStatAPICppCover> cpp_cover; // +0x80
    weak_ptr<voipmp::VoIPMPIlinkSDKStatAPIDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<voipmp::VoIPMPIlinkSDKStatAPIDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)launch;
- (void)stat:(int)arg1 info:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
