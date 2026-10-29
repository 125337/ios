@interface WCFinderPostDirectUploadDecision : NSObject
{
    unsigned int _networkType; // +0x8
    unsigned long long _predictedAction; // +0x10
    unsigned long long _predictionReason; // +0x18
    unsigned long long _effectiveAction; // +0x20
    unsigned long long _executionReason; // +0x28
    WCFinderPostDirectUploadConfig * _config; // +0x30
    NSString * _compositionTaskId; // +0x38
    WCFinderPostUploadSpeedSnapshot * _uploadSpeedSnapshot; // +0x40
    unsigned long long _originUploadEstimateStatus; // +0x48
    long long _estimatedOriginUploadMs; // +0x50
    WCFinderPostCompressionPrediction * _compressionPrediction; // +0x58
    NSDictionary * _predictionEncodingFields; // +0x60
    NSNumber * _encodingPlanPreparationDurationMs; // +0x68
}
- (id)init;
- (BOOL)hasOriginUploadEstimate;
- (BOOL)shouldDirectUpload;
- (id)reportingFields;
- (id)description;
- (unsigned long long)predictedAction;
- (void)setPredictedAction:(unsigned long long)arg1;
- (unsigned long long)predictionReason;
- (void)setPredictionReason:(unsigned long long)arg1;
- (unsigned long long)effectiveAction;
- (void)setEffectiveAction:(unsigned long long)arg1;
- (unsigned long long)executionReason;
- (void)setExecutionReason:(unsigned long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)compositionTaskId;
- (void)setCompositionTaskId:(id)arg1;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (id)uploadSpeedSnapshot;
- (void)setUploadSpeedSnapshot:(id)arg1;
- (unsigned long long)originUploadEstimateStatus;
- (void)setOriginUploadEstimateStatus:(unsigned long long)arg1;
- (long long)estimatedOriginUploadMs;
- (void)setEstimatedOriginUploadMs:(long long)arg1;
- (id)compressionPrediction;
- (void)setCompressionPrediction:(id)arg1;
- (id)predictionEncodingFields;
- (void)setPredictionEncodingFields:(id)arg1;
- (id)encodingPlanPreparationDurationMs;
- (void)setEncodingPlanPreparationDurationMs:(id)arg1;
- (void).cxx_destruct;
@end
