@interface CgiReportDataTask : NSObject <PBMessageObserverDelegate>
{
    unsigned int _doCgiReqCount; // +0x8
    CgiRouterInfo * _info; // +0x10
    CgiReportDataModel * _dataModel; // +0x18
    unsigned long long _doCgiReqTimeMs; // +0x20
    unsigned long long _reqItemConfsVersion; // +0x28
}
- (id)initWith:(id)arg1 andData:(id)arg2;
- (id)setCanNotTry;
- (unsigned int)getConfigTryCount;
- (BOOL)doCgiRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)valueTranslate:(unsigned int)arg1 andArr:(id)arg2 andKeyBegin:(unsigned int)arg3 andKeyEnd:(unsigned int)arg4;
- (void)logTaskInfo;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)dataModel;
- (void)setDataModel:(id)arg1;
- (unsigned int)doCgiReqCount;
- (void)setDoCgiReqCount:(unsigned int)arg1;
- (unsigned long long)doCgiReqTimeMs;
- (void)setDoCgiReqTimeMs:(unsigned long long)arg1;
- (unsigned long long)reqItemConfsVersion;
- (void)setReqItemConfsVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
