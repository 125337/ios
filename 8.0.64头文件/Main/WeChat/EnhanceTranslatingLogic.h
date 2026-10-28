@interface EnhanceTranslatingLogic : NSObject <IOCRTransMgrExt>
{
    BOOL _isDetectorWorking; // +0x8
    BOOL _isScannerValid; // +0x9
    BOOL _isOldStyle; // +0xa
    id <EnhanceTranslatingDelegate> _delegate; // +0x10
    unsigned long long _sessionId; // +0x18
    CMMotionManager * _motionManager; // +0x20
    unsigned long long _preparedTimestamp; // +0x28
    unsigned long long _detectFailTimestamp; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)prepareWithDelay:(double)arg1 reset:(BOOL)arg2;
- (void)invalidate;
- (void)scanningImage:(id)arg1 cameraRect:(CGRect)arg2 cropRect:(CGRect)arg3;
- (id)motionManager;
- (BOOL)isMotionStable;
- (void)makeSoundEffect;
- (void)onDetectDocumentArea:(unsigned long long)arg1 vetrices:(id)arg2 docImg:(id)arg3 originImg:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDetectorWorking;
- (void)setIsDetectorWorking:(BOOL)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (void)setMotionManager:(id)arg1;
- (BOOL)isScannerValid;
- (void)setIsScannerValid:(BOOL)arg1;
- (BOOL)isOldStyle;
- (void)setIsOldStyle:(BOOL)arg1;
- (unsigned long long)preparedTimestamp;
- (void)setPreparedTimestamp:(unsigned long long)arg1;
- (unsigned long long)detectFailTimestamp;
- (void)setDetectFailTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
