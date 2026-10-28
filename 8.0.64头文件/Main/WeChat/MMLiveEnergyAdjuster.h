@interface MMLiveEnergyAdjuster : NSObject
{
    NSArray * _cameraCaptureFPSLevels; // +0x8
    NSArray * _cameraCaptureResolutionLevels; // +0x10
    NSArray * _videoEncodeFPSLevels; // +0x18
    NSArray * _videoEncodeResolutionLevels; // +0x20
    NSArray * _videoEncodeBitrateLevels; // +0x28
    NSArray * _WeEffect_faceAlignmentSettingsLevels; // +0x30
    NSArray * _WeEffect_faceAlignmentItemLevels; // +0x38
    NSArray * _WeEffect_occlusionSegmentItemLevels; // +0x40
    NSArray * _faceSkinBeautyLevels; // +0x48
    NSArray * _faceShapeBeautyLevels; // +0x50
    NSArray * _PAGFrameRateLevels; // +0x58
    NSArray * _blurPowerModeAdjustParamLevels; // +0x60
}
- (id)init;
- (BOOL)_adjustIntegerValue:(long long)arg1 toIntegerValue:(long long *)arg2 withMatchedLevels:(id)arg3 reducedLevel:(long long)arg4;
- (BOOL)_adjustIntegerValue:(long long)arg1 toIntegerValue:(long long *)arg2 withRangeLevels:(id)arg3 reducedLevel:(long long)arg4;
- (int)adjustCameraCaptureFPS:(int)arg1 reducedLevel:(long long)arg2;
- (long long)adjustCameraCaptureResolution:(long long)arg1 reducedLevel:(long long)arg2;
- (int)adjustVideoEncodeFPS:(int)arg1 reducedLevel:(long long)arg2;
- (long long)adjustVideoEncodeResolution:(long long)arg1 reducedLevel:(long long)arg2;
- (int)adjustVideoEncodeBitrate:(int)arg1 reducedLevel:(long long)arg2;
- (long long)WeEffect_adjustFaceAlignmentSettingsLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)WeEffect_adjustFaceAlignmentItemLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)WeEffect_adjustOcclusionSegmentItemLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)adjustFaceSkinBeautyLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (long long)adjustFaceShapeBeautyLevel:(long long)arg1 reducedLevel:(long long)arg2;
- (int)adjustPAGFrameRate:(int)arg1 reducedLevel:(long long)arg2;
- (int)adjustBlurPowerModeAdjustParamLevel:(int)arg1 reducedLevel:(long long)arg2;
- (id)cameraCaptureFPSLevels;
- (id)cameraCaptureResolutionLevels;
- (id)videoEncodeFPSLevels;
- (id)videoEncodeResolutionLevels;
- (id)videoEncodeBitrateLevels;
- (id)WeEffect_faceAlignmentSettingsLevels;
- (id)WeEffect_faceAlignmentItemLevels;
- (id)WeEffect_occlusionSegmentItemLevels;
- (id)faceSkinBeautyLevels;
- (id)faceShapeBeautyLevels;
- (id)PAGFrameRateLevels;
- (id)blurPowerModeAdjustParamLevels;
- (void).cxx_destruct;
@end
