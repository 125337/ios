@interface MMLiveMagicEnginePerformanceRecordTask : NSObject
{
    BOOL _recordMemoryIncrease; // +0x8
    NSString * _giftName; // +0x10
    NSString * _productId; // +0x18
    NSMutableArray * _recentPlaySceneRecordList; // +0x20
    NSMutableArray * _recentEditorSceneRecordList; // +0x28
    MMLiveMagicEnginePerformanceRecord * _currPerformanceRecord; // +0x30
    unsigned long long _currentRecordScene; // +0x38
    MMLiveMetricsInfoRecordInfo * _baseMetricsRecord; // +0x40
    id /* block */ _onPerformanceRecordScencChangeCallback; // +0x48
    MMLiveMagicEnginePerformanceRecord * _playMedianMemoryIncreaseRecord; // +0x50
    MMLiveMagicEnginePerformanceRecord * _playMedianCPUIncreaseRecord; // +0x58
    MMLiveMagicEnginePerformanceRecord * _playMedianGPUIncreaseRecord; // +0x60
    MMLiveMagicEnginePerformanceRecord * _editorMedianMemoryIncreaseRecord; // +0x68
    MMLiveMagicEnginePerformanceRecord * _editorMedianCPUIncreaseRecord; // +0x70
    MMLiveMagicEnginePerformanceRecord * _editorMedianGPUIncreaseRecord; // +0x78
}
- (id)initWithGiftName:(id)arg1 productId:(id)arg2;
- (void)initDefaultData;
- (BOOL)startPerformanceRecord:(unsigned long long)arg1 withBaseMetrics:(id)arg2;
- (BOOL)stopPerformanceRecord:(unsigned long long)arg1;
- (BOOL)cancelPerformanceRecord:(unsigned long long)arg1;
- (void)recordPerformanceWithMetricsInfo:(id)arg1;
- (void)tagRecordMemoryIncrease:(BOOL)arg1;
- (void)extractMedianRecords;
- (void)extractMemoryIncreaseMedianRecord;
- (void)extractCPUIncreaseMedianRecord;
- (void)extractGPUIncreaseMedianRecord;
- (id)getPerformanceRecordArrFilterMemoryNullValue:(id)arg1;
- (id)getPerformanceRecordArrFilterCPUNullValue:(id)arg1;
- (id)getPerformanceRecordArrFilterGPUNullValue:(id)arg1;
- (void)updateRecordScene:(unsigned long long)arg1;
- (void)cacheCurrPerformanceRecord;
- (void)createCurrPerformanceRecordIfNeed;
- (id)description;
- (id)giftName;
- (void)setGiftName:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)recentPlaySceneRecordList;
- (void)setRecentPlaySceneRecordList:(id)arg1;
- (id)recentEditorSceneRecordList;
- (void)setRecentEditorSceneRecordList:(id)arg1;
- (id)currPerformanceRecord;
- (void)setCurrPerformanceRecord:(id)arg1;
- (unsigned long long)currentRecordScene;
- (void)setCurrentRecordScene:(unsigned long long)arg1;
- (id)baseMetricsRecord;
- (void)setBaseMetricsRecord:(id)arg1;
- (BOOL)recordMemoryIncrease;
- (void)setRecordMemoryIncrease:(BOOL)arg1;
- (id /* block */)onPerformanceRecordScencChangeCallback;
- (void)setOnPerformanceRecordScencChangeCallback:(id /* block */)arg1;
- (id)playMedianMemoryIncreaseRecord;
- (void)setPlayMedianMemoryIncreaseRecord:(id)arg1;
- (id)playMedianCPUIncreaseRecord;
- (void)setPlayMedianCPUIncreaseRecord:(id)arg1;
- (id)playMedianGPUIncreaseRecord;
- (void)setPlayMedianGPUIncreaseRecord:(id)arg1;
- (id)editorMedianMemoryIncreaseRecord;
- (void)setEditorMedianMemoryIncreaseRecord:(id)arg1;
- (id)editorMedianCPUIncreaseRecord;
- (void)setEditorMedianCPUIncreaseRecord:(id)arg1;
- (id)editorMedianGPUIncreaseRecord;
- (void)setEditorMedianGPUIncreaseRecord:(id)arg1;
- (void).cxx_destruct;
@end
