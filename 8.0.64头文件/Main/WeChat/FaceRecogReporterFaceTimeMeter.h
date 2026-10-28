@interface FaceRecogReporterFaceTimeMeter : MMObject
{
    unsigned int _totalFrameCount; // +0x8
    unsigned long long _enterTime; // +0x10
    unsigned long long _enterPreConfirmPageTime; // +0x18
    unsigned long long _enterFaceCameraTime; // +0x20
    unsigned long long _requestConfigStartTime; // +0x28
    unsigned long long _requestConfigEndTime; // +0x30
    unsigned long long _recogStartTime; // +0x38
    unsigned long long _verifyStartTime; // +0x40
    unsigned long long _verifyEndTime; // +0x48
    unsigned long long _detectFaceStartTime; // +0x50
    unsigned long long _detectFaceEndTime; // +0x58
    unsigned long long _poseStartTime; // +0x60
    unsigned long long _poseEndTime; // +0x68
    unsigned long long _guideStartTime; // +0x70
    unsigned long long _guideEndTime; // +0x78
    unsigned long long _uploadCdnStartTime; // +0x80
    unsigned long long _uploadCdnEndTime; // +0x88
    unsigned long long _livenessStartTime; // +0x90
    unsigned long long _livenessEndTime; // +0x98
    unsigned long long _exitTime; // +0xa0
}
- (unsigned int)getVerifyTime;
- (unsigned int)getPoseTime;
- (unsigned int)getDetectFaceTime;
- (unsigned int)getAvgProcessTimePerFrame;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)enterPreConfirmPageTime;
- (void)setEnterPreConfirmPageTime:(unsigned long long)arg1;
- (unsigned long long)enterFaceCameraTime;
- (void)setEnterFaceCameraTime:(unsigned long long)arg1;
- (unsigned long long)requestConfigStartTime;
- (void)setRequestConfigStartTime:(unsigned long long)arg1;
- (unsigned long long)requestConfigEndTime;
- (void)setRequestConfigEndTime:(unsigned long long)arg1;
- (unsigned long long)recogStartTime;
- (void)setRecogStartTime:(unsigned long long)arg1;
- (unsigned long long)verifyStartTime;
- (void)setVerifyStartTime:(unsigned long long)arg1;
- (unsigned long long)verifyEndTime;
- (void)setVerifyEndTime:(unsigned long long)arg1;
- (unsigned long long)detectFaceStartTime;
- (void)setDetectFaceStartTime:(unsigned long long)arg1;
- (unsigned long long)detectFaceEndTime;
- (void)setDetectFaceEndTime:(unsigned long long)arg1;
- (unsigned long long)poseStartTime;
- (void)setPoseStartTime:(unsigned long long)arg1;
- (unsigned long long)poseEndTime;
- (void)setPoseEndTime:(unsigned long long)arg1;
- (unsigned long long)guideStartTime;
- (void)setGuideStartTime:(unsigned long long)arg1;
- (unsigned long long)guideEndTime;
- (void)setGuideEndTime:(unsigned long long)arg1;
- (unsigned long long)uploadCdnStartTime;
- (void)setUploadCdnStartTime:(unsigned long long)arg1;
- (unsigned long long)uploadCdnEndTime;
- (void)setUploadCdnEndTime:(unsigned long long)arg1;
- (unsigned long long)livenessStartTime;
- (void)setLivenessStartTime:(unsigned long long)arg1;
- (unsigned long long)livenessEndTime;
- (void)setLivenessEndTime:(unsigned long long)arg1;
- (unsigned long long)exitTime;
- (void)setExitTime:(unsigned long long)arg1;
- (unsigned int)totalFrameCount;
- (void)setTotalFrameCount:(unsigned int)arg1;
@end
