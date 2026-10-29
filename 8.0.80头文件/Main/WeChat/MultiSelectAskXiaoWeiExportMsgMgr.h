@interface MultiSelectAskXiaoWeiExportMsgMgr : MMUserService <RecordUploadCDNMgrDelegate, MMServiceProtocol>
{
    CMessageWrap * _msgWrap; // +0x8
    MultiMediaUploadUnifyMgr * _recordUploadCDNMgr; // +0x10
    id /* block */ _completion; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)uploadMsgList:(id)arg1 localId:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)stopUploadMsgWithLocalId:(unsigned int)arg1;
- (void)stopCurrentUpload;
- (void)OnUploadProgressChanged:(id)arg1 total:(unsigned long long)arg2 remain:(unsigned long long)arg3;
- (void)OnUploadRecordForHistory:(id)arg1 uploadInfo:(id)arg2 errMsg:(id)arg3;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)recordUploadCDNMgr;
- (void)setRecordUploadCDNMgr:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
