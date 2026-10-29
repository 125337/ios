@interface YTCameraRiskHelper : NSObject
{
    NSDictionary * realWhiteBalanceMap; // +0x8
    BOOL hasZoomRisk; // +0x10
    BOOL hasExposureRisk; // +0x11
    BOOL hasWhiteBalanceRisk; // +0x12
    BOOL _needRestoreExposureToAuto; // +0x13
    BOOL _isRestoringParams; // +0x14
    unsigned int _whiteColor; // +0x18
    NSMutableArray * _cameraRiskDataList; // +0x20
    NSMutableArray * _cameraRiskOriginalDataList; // +0x28
    NSMutableArray * _changeColor; // +0x30
    unsigned long long _supportType; // +0x38
    long long _clientDefaultDelayMs; // +0x40
    double _originalTemperature; // +0x48
}
+ (id)sharedInstance;
- (id)init;
- (void)setupInitialValues;
- (unsigned int)getColorMatrixColorFilter;
- (id)getStageIntValue:(id)arg1;
- (void)resetCameraParams:(BOOL)arg1;
- (void)changeCameraParams:(id)arg1;
- (id)getCurrentStateRiskData:(id)arg1;
- (id)getCameraRiskDataList;
- (id)getCameraRiskOriginalDataList;
- (void)resetCameraRiskData;
- (BOOL)transformRiskData:(id)arg1;
- (void)makeRiskRealData;
- (void)restoreExposureToAuto;
- (void)lockExposure;
- (void)recordOriginalTemperature;
- (void)restoreOriginalTemperatureWithCompletion:(id /* block */)arg1;
- (void)sendCameraConfigBlock:(id /* block */)arg1;
- (BOOL)hasExposureRisk;
- (id)cameraRiskDataList;
- (void)setCameraRiskDataList:(id)arg1;
- (id)cameraRiskOriginalDataList;
- (void)setCameraRiskOriginalDataList:(id)arg1;
- (id)changeColor;
- (void)setChangeColor:(id)arg1;
- (unsigned int)whiteColor;
- (void)setWhiteColor:(unsigned int)arg1;
- (unsigned long long)supportType;
- (void)setSupportType:(unsigned long long)arg1;
- (BOOL)needRestoreExposureToAuto;
- (void)setNeedRestoreExposureToAuto:(BOOL)arg1;
- (long long)clientDefaultDelayMs;
- (void)setClientDefaultDelayMs:(long long)arg1;
- (double)originalTemperature;
- (void)setOriginalTemperature:(double)arg1;
- (BOOL)isRestoringParams;
- (void)setIsRestoringParams:(BOOL)arg1;
- (void).cxx_destruct;
@end
