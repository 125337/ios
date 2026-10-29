@interface FaceQualityResult : NSObject
{
    int _faceRectX; // +0x8
    int _faceRectY; // +0xc
    int _faceRectWidth; // +0x10
    int _faceRectHeight; // +0x14
    int _faceRectGray; // +0x18
    int _pupilDis; // +0x1c
    float _shakingScore; // +0x20
    float _leftEyeOpenScore; // +0x24
    float _rightEyeOpenScore; // +0x28
    float _mouthOpenScore; // +0x2c
    float _roll; // +0x30
    float _pitch; // +0x34
    float _yaw; // +0x38
}
- (id)toDictionary;
- (int)faceRectX;
- (void)setFaceRectX:(int)arg1;
- (int)faceRectY;
- (void)setFaceRectY:(int)arg1;
- (int)faceRectWidth;
- (void)setFaceRectWidth:(int)arg1;
- (int)faceRectHeight;
- (void)setFaceRectHeight:(int)arg1;
- (int)faceRectGray;
- (void)setFaceRectGray:(int)arg1;
- (int)pupilDis;
- (void)setPupilDis:(int)arg1;
- (float)shakingScore;
- (void)setShakingScore:(float)arg1;
- (float)leftEyeOpenScore;
- (void)setLeftEyeOpenScore:(float)arg1;
- (float)rightEyeOpenScore;
- (void)setRightEyeOpenScore:(float)arg1;
- (float)mouthOpenScore;
- (void)setMouthOpenScore:(float)arg1;
- (float)roll;
- (void)setRoll:(float)arg1;
- (float)pitch;
- (void)setPitch:(float)arg1;
- (float)yaw;
- (void)setYaw:(float)arg1;
@end
