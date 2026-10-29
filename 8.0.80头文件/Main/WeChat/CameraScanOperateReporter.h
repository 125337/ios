@interface CameraScanOperateReporter : NSObject
{
    BOOL _isSuccessAfterDataProcess; // +0x8
    BOOL _isSuccessAfterDataCollection; // +0x9
    BOOL _isSuccessAfterDataGray; // +0xa
    BOOL _isSuccessPicUpload; // +0xb
    BOOL _isSuccessAfterObjDetection; // +0xc
    BOOL _isSuccessAfterObjParse; // +0xd
    BOOL _hasReported; // +0xe
    BOOL _enableCodeTrace; // +0xf
    unsigned int _startType; // +0x10
    unsigned int _frameCount; // +0x14
    int _avgBrightness; // +0x18
    unsigned int _brightnessCount; // +0x1c
    unsigned int _codeDetectionCount; // +0x20
    CameraScannerViewWrapper * _wrapper; // +0x28
    NSString * _dataResolution; // +0x30
    NSObject<OS_dispatch_queue> * _calcuteQueue; // +0x38
    unsigned long long _startTimestamp; // +0x40
    NSString * _dataExtraInfo; // +0x48
    unsigned long long _codeDetectionType; // +0x50
    unsigned long long _codeDetectionSize; // +0x58
    NSString * _codeDetectionLocation; // +0x60
    unsigned long long _codeEnhance; // +0x68
    unsigned long long _codeBinary; // +0x70
    unsigned long long _codeParsePhase; // +0x78
    unsigned long long _codeParseEnchance; // +0x80
    NSString * _codeExtraInfo; // +0x88
    NSString * _cpKey; // +0x90
    unsigned long long _dataProcessEnchance; // +0x98
}
- (id)init;
- (void)reset;
- (void)report:(unsigned int)arg1;
- (void)updateDataEnhanceType;
- (void)updateDataBrightness:(float)arg1;
- (void)updateCodeResult:(QBarSnapshot)arg1;
- (void)runASyncOnOperateReporterQueue:(id /* block */)arg1;
- (id)wrapper;
- (void)setWrapper:(id)arg1;
- (unsigned int)startType;
- (void)setStartType:(unsigned int)arg1;
- (unsigned int)frameCount;
- (void)setFrameCount:(unsigned int)arg1;
- (BOOL)isSuccessAfterDataProcess;
- (void)setIsSuccessAfterDataProcess:(BOOL)arg1;
- (BOOL)isSuccessAfterDataCollection;
- (void)setIsSuccessAfterDataCollection:(BOOL)arg1;
- (BOOL)isSuccessAfterDataGray;
- (void)setIsSuccessAfterDataGray:(BOOL)arg1;
- (id)dataResolution;
- (void)setDataResolution:(id)arg1;
- (BOOL)isSuccessPicUpload;
- (void)setIsSuccessPicUpload:(BOOL)arg1;
- (BOOL)isSuccessAfterObjDetection;
- (void)setIsSuccessAfterObjDetection:(BOOL)arg1;
- (BOOL)isSuccessAfterObjParse;
- (void)setIsSuccessAfterObjParse:(BOOL)arg1;
- (id)calcuteQueue;
- (void)setCalcuteQueue:(id)arg1;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg1;
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (int)avgBrightness;
- (void)setAvgBrightness:(int)arg1;
- (unsigned int)brightnessCount;
- (void)setBrightnessCount:(unsigned int)arg1;
- (id)dataExtraInfo;
- (void)setDataExtraInfo:(id)arg1;
- (unsigned int)codeDetectionCount;
- (void)setCodeDetectionCount:(unsigned int)arg1;
- (unsigned long long)codeDetectionType;
- (void)setCodeDetectionType:(unsigned long long)arg1;
- (unsigned long long)codeDetectionSize;
- (void)setCodeDetectionSize:(unsigned long long)arg1;
- (id)codeDetectionLocation;
- (void)setCodeDetectionLocation:(id)arg1;
- (unsigned long long)codeEnhance;
- (void)setCodeEnhance:(unsigned long long)arg1;
- (unsigned long long)codeBinary;
- (void)setCodeBinary:(unsigned long long)arg1;
- (unsigned long long)codeParsePhase;
- (void)setCodeParsePhase:(unsigned long long)arg1;
- (unsigned long long)codeParseEnchance;
- (void)setCodeParseEnchance:(unsigned long long)arg1;
- (BOOL)enableCodeTrace;
- (void)setEnableCodeTrace:(BOOL)arg1;
- (id)codeExtraInfo;
- (void)setCodeExtraInfo:(id)arg1;
- (id)cpKey;
- (void)setCpKey:(id)arg1;
- (unsigned long long)dataProcessEnchance;
- (void)setDataProcessEnchance:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
