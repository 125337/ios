@interface CBTHeadlessReportSignalObserver : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTHeadlessReportSignalObserverCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTHeadlessReportSignalObserverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTHeadlessReportSignalObserverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)onReportSignal:(int)arg1 voipSessionId:(id)arg2 queryId:(long long)arg3 answerId:(long long)arg4 answerLength:(int)arg5 tsMs:(unsigned long long)arg6 traceId:(id)arg7;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
