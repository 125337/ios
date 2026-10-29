@interface CameraScanBlackScreenPredictManager : NSObject
{
    BOOL _modelLoadAttempted; // +0x8
    CameraScanBSPredictResult * _lastPredictResult; // +0x10
    CameraScanBlackScreenFeatureCollector * _featureCollector; // +0x18
    CameraScanBlackScreenPredictor * _predictor; // +0x20
    NSObject<OS_dispatch_queue> * _modelQueue; // +0x28
}
- (id)init;
- (void)_loadModelAsync;
- (void)_loadModel;
- (BOOL)isModelReady;
- (id)modelVersion;
- (BOOL)hasPredictResult;
- (void)prepareWithAuthorizeAlert:(BOOL)arg1;
- (void)setEstimatedFirstFrameCost:(long long)arg1;
- (void)predictShouldRecoverOnShortTimeout:(id /* block */)arg1;
- (void)recordSessionResult:(BOOL)arg1 firstFrameCost:(long long)arg2 errorType:(long long)arg3 pressType:(long long)arg4 didRecover:(BOOL)arg5;
- (id)lastPredictResult;
- (void)setLastPredictResult:(id)arg1;
- (id)featureCollector;
- (void)setFeatureCollector:(id)arg1;
- (id)predictor;
- (void)setPredictor:(id)arg1;
- (BOOL)modelLoadAttempted;
- (void)setModelLoadAttempted:(BOOL)arg1;
- (id)modelQueue;
- (void)setModelQueue:(id)arg1;
- (void).cxx_destruct;
@end
