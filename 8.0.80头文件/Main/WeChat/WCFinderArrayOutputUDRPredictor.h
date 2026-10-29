@interface WCFinderArrayOutputUDRPredictor : NSObject
{
    BOOL _isWork; // +0x8
    NSMutableArray * _featuresIndex; // +0x10
    NSString * _modelMd5; // +0x18
    FinderTfLiteSinglePredict * _basePredict; // +0x20
    NSString * _udrResourceId; // +0x28
    NSString * _detailName; // +0x30
    NSString * _modelName; // +0x38
    NSString * _gCachedDetailsJsonStr; // +0x40
    long long _gCachedDetailsJsonLength; // +0x48
    NSDictionary * _detailsDictionary; // +0x50
    double _detailsDictionaryTimestamp; // +0x58
}
- (id)initWithUDRResourceId:(id)arg1 detailName:(id)arg2 modelName:(id)arg3;
- (BOOL)isWorking;
- (void)clear;
- (id)getPredictor;
- (void)autoFetchUDRSourceCheck;
- (BOOL)initPredictor;
- (BOOL)checkMd5;
- (id)getMd5FromDetails;
- (BOOL)initInputIndex;
- (id)getOutputIndexFromDetails;
- (id)getFeaturesIndexFromDetails;
- (long long)getOutputSizeFromDetails;
- (id)getDetailsDictionary;
- (long long)getBusinessIndexFromPath:(id)arg1;
- (long long)getBusinessTypeFromIndex:(long long)arg1;
- (id)featuresIndex;
- (void)setFeaturesIndex:(id)arg1;
- (id)modelMd5;
- (void)setModelMd5:(id)arg1;
- (BOOL)isWork;
- (void)setIsWork:(BOOL)arg1;
- (id)basePredict;
- (void)setBasePredict:(id)arg1;
- (id)udrResourceId;
- (void)setUdrResourceId:(id)arg1;
- (id)detailName;
- (void)setDetailName:(id)arg1;
- (id)modelName;
- (void)setModelName:(id)arg1;
- (id)gCachedDetailsJsonStr;
- (void)setGCachedDetailsJsonStr:(id)arg1;
- (long long)gCachedDetailsJsonLength;
- (void)setGCachedDetailsJsonLength:(long long)arg1;
- (id)detailsDictionary;
- (void)setDetailsDictionary:(id)arg1;
- (double)detailsDictionaryTimestamp;
- (void)setDetailsDictionaryTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
