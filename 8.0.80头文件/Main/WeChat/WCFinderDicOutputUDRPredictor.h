@interface WCFinderDicOutputUDRPredictor : NSObject
{
    BOOL _isWork; // +0x8
    NSString * _ilinkRes; // +0x10
    NSString * _detailName; // +0x18
    NSString * _modelName; // +0x20
    NSMutableArray * _featuresIndex; // +0x28
    NSMutableArray * _outputIndex; // +0x30
    NSString * _modelMd5; // +0x38
    FinderTfLiteMultiClassifyPredict * _basePredict; // +0x40
    NSString * _gCachedDetailsJsonStr; // +0x48
    NSString * _gCachedDetailsJsonPath; // +0x50
    long long _gCachedDetailsJsonLength; // +0x58
    FinderTfLiteSinglePredict * _singlePredict; // +0x60
}
- (id)initWithIlinkRes:(id)arg1 detailName:(id)arg2 modelName:(id)arg3;
- (id)outputIndex;
- (id)featuresIndex;
- (BOOL)isWorking;
- (void)clear;
- (id)getPredictor;
- (id)getUDRResourceId;
- (void)autoFetchUDRSourceCheck;
- (BOOL)initPredictor;
- (BOOL)checkMd5;
- (id)getMd5FromDetails;
- (BOOL)initInputOutputIndex;
- (id)getFeaturesIndexFromDetails;
- (id)getOutputIndexFromDetails;
- (long long)getOutputSizeFromDetails;
- (id)getDetailsJsonStr;
- (id)getBusinessTypeFromPath:(id)arg1;
- (id)ilinkRes;
- (void)setIlinkRes:(id)arg1;
- (id)detailName;
- (void)setDetailName:(id)arg1;
- (id)modelName;
- (void)setModelName:(id)arg1;
- (void)setFeaturesIndex:(id)arg1;
- (void)setOutputIndex:(id)arg1;
- (id)modelMd5;
- (void)setModelMd5:(id)arg1;
- (BOOL)isWork;
- (void)setIsWork:(BOOL)arg1;
- (id)basePredict;
- (void)setBasePredict:(id)arg1;
- (id)gCachedDetailsJsonStr;
- (void)setGCachedDetailsJsonStr:(id)arg1;
- (id)gCachedDetailsJsonPath;
- (void)setGCachedDetailsJsonPath:(id)arg1;
- (long long)gCachedDetailsJsonLength;
- (void)setGCachedDetailsJsonLength:(long long)arg1;
- (id)singlePredict;
- (void)setSinglePredict:(id)arg1;
- (void).cxx_destruct;
@end
