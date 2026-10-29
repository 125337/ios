@interface WeVisModelMgr : MMUserService <MMResourceMgrExt, IMsgExt, IWeVisModelProvider, MMServiceProtocol>
{
    MemoryMappedKV * _mmkv; // +0x8
    NSMutableArray * _checkResTypeList; // +0x10
    NSMutableArray * _localConfigList; // +0x18
    WeVisModelResponse * _localModelInfo; // +0x20
    WeVisModelResponse * _targetModelInfo; // +0x28
    NSMutableSet * _invalidModelList; // +0x30
}
+ (id)modelPathOfInfo:(id)arg1;
+ (id)modelPathOfType:(int)arg1 subtype:(int)arg2 filename:(id)arg3;
+ (id)resFileMd5:(int)arg1 subtype:(int)arg2;
- (id)init;
- (void)scheduleLoadRemoteInfo:(unsigned long long)arg1;
- (void)loadRemoteInfo;
- (void)retryCgi;
- (id)displayModelInfo;
- (void)onCgiCompletion:(id)arg1 errCode:(unsigned int)arg2;
- (id)modelPathWithKey:(id)arg1;
- (id)modelVersionWithKey:(id)arg1;
- (void)onServiceInit;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)cgiEnable;
- (void)updateLocalModelInfoAsync:(id /* block */)arg1;
- (void)updateLocalModelInfo;
- (void)updateCheckTypeList;
- (id)findInfoOfType:(int)arg1 subtype:(int)arg2;
- (void)checkCopyResFile;
- (void)copyResFile:(id)arg1 resPath:(id)arg2;
- (BOOL)isWeVisionResource:(unsigned int)arg1;
- (id)getModelInfo;
- (id)getInvalidModelInfo;
- (id)getCgiModelInfo;
- (void)checkDeleteUnusedFiles;
- (void)reportUsage;
- (void)scheduleReportUsage;
- (id)checkResTypeList;
- (void)setCheckResTypeList:(id)arg1;
- (id)localConfigList;
- (void)setLocalConfigList:(id)arg1;
- (id)localModelInfo;
- (void)setLocalModelInfo:(id)arg1;
- (id)targetModelInfo;
- (void)setTargetModelInfo:(id)arg1;
- (id)invalidModelList;
- (void)setInvalidModelList:(id)arg1;
- (void).cxx_destruct;
@end

