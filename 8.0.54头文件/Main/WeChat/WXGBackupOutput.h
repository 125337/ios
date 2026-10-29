@interface WXGBackupOutput : NSObject
{
    NSString * _sessionName; // +0x8
    PacketBackupDataPush * _dataPush; // +0x10
    WXGBackupDataInfo * _backupDataInfo; // +0x18
    unsigned long long _outputType; // +0x20
}
- (id)init;
- (unsigned long long)getOutputType;
- (id)getBackupDataPush;
- (void)setBackupDataPush:(id)arg1;
- (void)setBakcupDataPushInPath:(id)arg1;
- (id)getBackupDataInfo;
- (void)setBackupDataInfo:(id)arg1;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (id)dataPush;
- (void)setDataPush:(id)arg1;
- (id)backupDataInfo;
- (unsigned long long)outputType;
- (void)setOutputType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

