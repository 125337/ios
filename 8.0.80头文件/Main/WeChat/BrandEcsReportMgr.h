@interface BrandEcsReportMgr : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<brand_service::BrandEcsReportMgrCppCover> cpp_cover; // +0x80
    weak_ptr<brand_service::BrandEcsReportMgrDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<brand_service::BrandEcsReportMgrDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)reportItem:(id)arg1;
- (void)kvMonitor:(int)arg1 value:(int)arg2;
- (void)kvMonitorExtra:(int)arg1 value:(int)arg2 extra:(id)arg3;
- (void)kvMonitorExtraSampleRate:(int)arg1 value:(int)arg2 extra:(id)arg3 sampleRate:(int)arg4;
- (void)genSessionId;
- (id)getSessionId;
- (void)setBoxEntryExtra:(id)arg1;
- (id)getBoxEntryExtra;
- (void)onResortClientRendered:(int)arg1 clientExtraInfo:(id)arg2;
- (void)markResortClientStop:(int)arg1 stopReason:(int)arg2 clientExtraInfo:(id)arg3;
- (void)flushPendingResortReports;
- (void)onBoxSessionStart;
- (void)onBoxPageRendered;
- (void)reportBoxSession:(id)arg1;
- (void)brsOpenReportKv:(id)arg1 value:(int)arg2 extra:(id)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
