@interface TPRichMediaSynchronizerReportPlugin : NSObject <ITPPluginBase>
{
    id <ITPReportWrapper> _beaconReporter; // +0x8
    TPLock * _lock; // +0x10
    NSString * _flowId; // +0x18
    NSString * _url; // +0x20
    NSArray * _features; // +0x28
    long long _selectSeq; // +0x30
    long long _callbackDataSeq; // +0x38
    long long _currentPositionMs; // +0x40
    long long _prepareStartTimeMs; // +0x48
    NSMutableArray * _selectFeatureParams; // +0x50
    NSMutableDictionary * _callbackDataParams; // +0x58
}
- (id)init;
- (void)dealloc;
- (void)onAttatch;
- (void)onDetach;
- (void)onEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (void)onSetUrl:(id)arg1;
- (void)onStartPrepare;
- (void)onPrepared:(id)arg1;
- (void)onStartSelect:(id)arg1;
- (void)onSelectDone:(id)arg1;
- (void)onStartDeselect:(id)arg1;
- (void)onDeselectDone:(id)arg1;
- (void)onReset;
- (void)onRelease;
- (void)onError:(id)arg1;
- (void)onFeatureFailure:(id)arg1;
- (void)onUpdatePosition:(id)arg1;
- (void)finishReportAndClearResourceWithCode:(int)arg1;
- (void)finishReportWithCode:(int)arg1;
- (void)clearResource;
- (void)allFeatureSelectDoneWithCode:(int)arg1;
- (void)allFeatureDataCallbackDoneWithCode:(int)arg1;
- (void)featureSelectDoneWithFeatureIndex:(int)arg1 code:(int)arg2;
- (void)featureDataCallbackDone:(int)arg1 code:(int)arg2;
- (id)featureTypeWithFeatureIndex:(int)arg1;
- (void)reportRichMediaPreparedWithCode:(int)arg1;
- (void)reportFeatureSelect:(id)arg1 featureType:(id)arg2 code:(int)arg3;
- (void)reportFeatureDataCallback:(id)arg1 featureType:(id)arg2 code:(int)arg3;
- (id)commonReportParams;
- (void)reportEvent:(id)arg1 withParams:(id)arg2;
- (id)beaconReporter;
- (void)setBeaconReporter:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)flowId;
- (void)setFlowId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)features;
- (void)setFeatures:(id)arg1;
- (long long)selectSeq;
- (void)setSelectSeq:(long long)arg1;
- (long long)callbackDataSeq;
- (void)setCallbackDataSeq:(long long)arg1;
- (long long)currentPositionMs;
- (void)setCurrentPositionMs:(long long)arg1;
- (long long)prepareStartTimeMs;
- (void)setPrepareStartTimeMs:(long long)arg1;
- (id)selectFeatureParams;
- (void)setSelectFeatureParams:(id)arg1;
- (id)callbackDataParams;
- (void)setCallbackDataParams:(id)arg1;
- (void).cxx_destruct;
@end
