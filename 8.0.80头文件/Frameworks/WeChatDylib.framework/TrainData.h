@interface TrainData : NSObject
{
    Ptr<cv::ml::TrainData> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::TrainData>)arg1;
+ (id)getSubVector:(id)arg1 idx:(id)arg2;
+ (id)getSubMatrix:(id)arg1 idx:(id)arg2 layout:(int)arg3;
+ (id)create:(id)arg1 layout:(int)arg2 responses:(id)arg3 varIdx:(id)arg4 sampleIdx:(id)arg5 sampleWeights:(id)arg6 varType:(id)arg7;
+ (id)create:(id)arg1 layout:(int)arg2 responses:(id)arg3 varIdx:(id)arg4 sampleIdx:(id)arg5 sampleWeights:(id)arg6;
+ (id)create:(id)arg1 layout:(int)arg2 responses:(id)arg3 varIdx:(id)arg4 sampleIdx:(id)arg5;
+ (id)create:(id)arg1 layout:(int)arg2 responses:(id)arg3 varIdx:(id)arg4;
+ (id)create:(id)arg1 layout:(int)arg2 responses:(id)arg3;
- (id)initWithNativePtr:(Ptr<cv::ml::TrainData>)arg1;
- (int)getLayout;
- (int)getNTrainSamples;
- (int)getNTestSamples;
- (int)getNSamples;
- (int)getNVars;
- (int)getNAllVars;
- (void)getSample:(id)arg1 sidx:(int)arg2 buf:(float)arg3;
- (id)getSamples;
- (id)getMissing;
- (id)getTrainSamples:(int)arg1 compressSamples:(BOOL)arg2 compressVars:(BOOL)arg3;
- (id)getTrainSamples:(int)arg1 compressSamples:(BOOL)arg2;
- (id)getTrainSamples:(int)arg1;
- (id)getTrainSamples;
- (id)getTrainResponses;
- (id)getTrainNormCatResponses;
- (id)getTestResponses;
- (id)getTestNormCatResponses;
- (id)getResponses;
- (id)getNormCatResponses;
- (id)getSampleWeights;
- (id)getTrainSampleWeights;
- (id)getTestSampleWeights;
- (id)getVarIdx;
- (id)getVarType;
- (id)getVarSymbolFlags;
- (int)getResponseType;
- (id)getTrainSampleIdx;
- (id)getTestSampleIdx;
- (void)getValues:(int)arg1 sidx:(id)arg2 values:(float)arg3;
- (id)getDefaultSubstValues;
- (int)getCatCount:(int)arg1;
- (id)getClassLabels;
- (id)getCatOfs;
- (id)getCatMap;
- (void)setTrainTestSplit:(int)arg1 shuffle:(BOOL)arg2;
- (void)setTrainTestSplit:(int)arg1;
- (void)setTrainTestSplitRatio:(double)arg1 shuffle:(BOOL)arg2;
- (void)setTrainTestSplitRatio:(double)arg1;
- (void)shuffleTrainTest;
- (id)getTestSamples;
- (void)getNames:(id)arg1;
- (Ptr<cv::ml::TrainData>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
