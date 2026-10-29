@interface DataReportCgiManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<data_report::DataReportCgiManagerCppCover> cpp_cover; // +0x80
    weak_ptr<data_report::DataReportCgiManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<data_report::DataReportCgiManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onDataReportAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onDataReportAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onBatchDataReportAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onBatchDataReportAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)refreshReportConfigAsync:(int)arg1 configId:(int)arg2 completion:(id /* block */)arg3;
- (void)refreshReportConfigAsync:(int)arg1 configId:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)setNetworkStatusAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setNetworkStatusAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)updateServerTimeAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateServerTimeAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)initWithConfigDir:(id)arg1;
- (id)getAllReportItemJsonInfo:(int)arg1 itemId:(id)arg2 eventId:(id)arg3;
- (id)getCgiConfig:(int)arg1;
- (void)subscribeDataReportIdKeyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDataReportIdKeyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDataReportIdKeyEvent:(id)arg1;
- (void)callReportIdKey:(int)arg1 key:(int)arg2 value:(int)arg3;
- (void)subscribeDataReportKVEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDataReportKVEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDataReportKVEvent:(id)arg1;
- (void)callDataReportKV:(int)arg1 value:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
