@interface FinderDataReportManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<global_finder_report::FinderDataReportManagerCppCover> cpp_cover; // +0x80
    weak_ptr<global_finder_report::FinderDataReportManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<global_finder_report::FinderDataReportManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)pushStack:(id)arg1;
- (void)popStack:(id)arg1;
- (void)changeStack:(id)arg1 toPageRecord:(id)arg2 isCreatNewStack:(BOOL)arg3;
- (void)onPageAppear:(id)arg1;
- (void)onPageDisappear:(id)arg1;
- (void)onAppIn:(id)arg1;
- (void)onAppOut:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
