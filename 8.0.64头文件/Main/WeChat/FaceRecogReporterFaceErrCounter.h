@interface FaceRecogReporterFaceErrCounter : MMObject
{
    unsigned int _faceOkCount; // +0x8
    unsigned int _motionOkCount; // +0xc
    unsigned int _noFaceCount; // +0x10
    unsigned int _systemErrCount; // +0x14
    unsigned int _noLiveFaceCount; // +0x18
    unsigned int _tooDarkCount; // +0x1c
    unsigned int _tooLightCount; // +0x20
    unsigned int _backLightCount; // +0x24
    unsigned int _tooSmallCount; // +0x28
    unsigned int _tooBigCount; // +0x2c
    unsigned int _tooActiveCount; // +0x30
    unsigned int _poseInvalidCount; // +0x34
    unsigned int _timeoutCount; // +0x38
    unsigned int _trackFailedCount; // +0x3c
    unsigned int _unstableCount; // +0x40
    unsigned int _poseType; // +0x44
}
- (void)recordErrType:(int)arg1;
- (unsigned int)faceOkCount;
- (void)setFaceOkCount:(unsigned int)arg1;
- (unsigned int)motionOkCount;
- (void)setMotionOkCount:(unsigned int)arg1;
- (unsigned int)noFaceCount;
- (void)setNoFaceCount:(unsigned int)arg1;
- (unsigned int)systemErrCount;
- (void)setSystemErrCount:(unsigned int)arg1;
- (unsigned int)noLiveFaceCount;
- (void)setNoLiveFaceCount:(unsigned int)arg1;
- (unsigned int)tooDarkCount;
- (void)setTooDarkCount:(unsigned int)arg1;
- (unsigned int)tooLightCount;
- (void)setTooLightCount:(unsigned int)arg1;
- (unsigned int)backLightCount;
- (void)setBackLightCount:(unsigned int)arg1;
- (unsigned int)tooSmallCount;
- (void)setTooSmallCount:(unsigned int)arg1;
- (unsigned int)tooBigCount;
- (void)setTooBigCount:(unsigned int)arg1;
- (unsigned int)tooActiveCount;
- (void)setTooActiveCount:(unsigned int)arg1;
- (unsigned int)poseInvalidCount;
- (void)setPoseInvalidCount:(unsigned int)arg1;
- (unsigned int)timeoutCount;
- (void)setTimeoutCount:(unsigned int)arg1;
- (unsigned int)trackFailedCount;
- (void)setTrackFailedCount:(unsigned int)arg1;
- (unsigned int)unstableCount;
- (void)setUnstableCount:(unsigned int)arg1;
- (unsigned int)poseType;
- (void)setPoseType:(unsigned int)arg1;
@end
