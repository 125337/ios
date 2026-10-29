@interface CKVCommReportLogic : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IMsgExt>
{
    BOOL is_running_; // +0x8
    NSString * m_filename; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    HeavyUserRespInfo * m_heavy_cache; // +0x20
}
- (void)onServiceInit;
- (void)dealloc;
- (id)getIDMappingFullFileName;
- (void)makeSureIDMappingFileExist;
- (BOOL)IsIDMappingFileExist;
- (void)PrintIDMapping:(id)arg1 withSvrData:(BOOL)arg2;
- (void)SaveIDMapping:(id)arg1 withChannel:(int)arg2;
- (unsigned int)getIDMappingVersion:(int)arg1;
- (id)GetIDMappingObj;
- (void)ReportData:(id)arg1 withData:(id)arg2 withChannel:(int)arg3;
- (BOOL)RequestGetKVStrategy:(id)arg1;
- (void)ReportDataWithMainThread:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetKVStrategyReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnReportReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)is_running_;
- (void)setIs_running_:(BOOL)arg1;
- (void).cxx_destruct;
@end

