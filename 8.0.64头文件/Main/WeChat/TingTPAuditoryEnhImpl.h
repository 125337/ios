@interface TingTPAuditoryEnhImpl : NSObject
{
    int _auditoryEnhMode; // +0x8
    int _sampleNum; // +0xc
    int _sampleBuffSize; // +0x10
    IWaveAuditoryEnhInterface * _coreImpl; // +0x18
    NSString * _tmpDataPath; // +0x20
}
- (id)initWithEnhMode:(int)arg1;
- (void)dealloc;
- (BOOL)setupWithMetaData:(id)arg1;
- (int)getSampleBufSize;
- (id)getEffectArgs;
- (id)onNotifyAudioProcessFrameOut:(id)arg1;
- (IWaveAuditoryEnhInterface *)coreImpl;
- (void)setCoreImpl:(IWaveAuditoryEnhInterface *)arg1;
- (int)auditoryEnhMode;
- (void)setAuditoryEnhMode:(int)arg1;
- (int)sampleNum;
- (void)setSampleNum:(int)arg1;
- (int)sampleBuffSize;
- (void)setSampleBuffSize:(int)arg1;
- (id)tmpDataPath;
- (void)setTmpDataPath:(id)arg1;
- (void).cxx_destruct;
@end
