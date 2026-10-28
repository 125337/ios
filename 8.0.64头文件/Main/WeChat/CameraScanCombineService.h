@interface CameraScanCombineService : MMUserService <IScanGoodsServiceExt, MMResourceMgrExt, MMServiceProtocol>
{
    BOOL _ffeSvrConfigDetectBlock; // +0x8
    BOOL _ffeSvrConfigPreloadBlock; // +0x9
    BOOL _svrFallbackStop; // +0xa
    NSString * _ffeSvrConfigStr; // +0x10
    NSString * _ffeSvrConfigVersion; // +0x18
    long long _ffeSvrConfigModelVersion; // +0x20
    NSString * _ffeSvrConfigInfoGuideText; // +0x28
    NSString * _ffeSvrConfigDetObjGuideText; // +0x30
    long long _ffeSvrConfigReqUploadTimeout; // +0x38
    long long _ffeSvrConfigReqRetrievalTimeout; // +0x40
    long long _ffeSvrConfigReqInteval; // +0x48
    CameraScanCombineModelGetter * _modelGetter; // +0x50
    CameraScanCombineModelInfo * _modelInfo; // +0x58
    NSObject<OS_dispatch_queue> * _modelQueue; // +0x60
    long long _scanBlackCount; // +0x68
    long long _svrFallbackFrameLimit; // +0x70
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearSvrConfig;
- (void)loadSvrConfigFromMMKV;
- (void)loadSvrControlFromConfig:(id)arg1;
- (void)fetchLatestScanCombineSvrConfig;
- (void)onFetchCombineConfigureSuccess:(id)arg1 confVersion:(id)arg2 confGuide:(id)arg3 detObjGuide:(id)arg4 noModelFrameLimit:(unsigned int)arg5;
- (void)onFetchCombineConfigureFail:(long long)arg1 errorMsg:(id)arg2;
- (id)scanCombineSvrConfig;
- (BOOL)canSvrConfigApplyOnEngine;
- (id)scanCombineSvrVersion;
- (BOOL)scanCombineSvrFuckupControl;
- (BOOL)scanCombineSvrPreloadControl;
- (long long)scanCombineSvrRequestInterval;
- (long long)scanCombineSvrRequestMinInterval;
- (long long)scanCombineSvrUploadTimeout;
- (long long)scanCombineSvrRetrievalTimeout;
- (id)scanCombineSvrGuideText;
- (id)scanCombineSvrDetGuideText;
- (void)updateCurrentModelInfo;
- (id)currentModelInfo;
- (BOOL)shouldAlertScanFailForReboot;
- (void)increaseBlockCountAndCheckAlert;
- (void)recordNotRecievingBufferInShortTerm:(BOOL)arg1;
- (void)recordNotRecievingBufferInLongTerm:(BOOL)arg1;
- (void)recordOnRecievedBuffer;
- (void)reportOnAlertForReboot;
- (BOOL)scanCombineDetectByServerFallbak;
- (void)setSvrFallbackStopControl:(BOOL)arg1;
- (long long)getSvrFallbackFrameLimit;
- (id)ffeSvrConfigStr;
- (void)setFfeSvrConfigStr:(id)arg1;
- (id)ffeSvrConfigVersion;
- (void)setFfeSvrConfigVersion:(id)arg1;
- (long long)ffeSvrConfigModelVersion;
- (void)setFfeSvrConfigModelVersion:(long long)arg1;
- (id)ffeSvrConfigInfoGuideText;
- (void)setFfeSvrConfigInfoGuideText:(id)arg1;
- (id)ffeSvrConfigDetObjGuideText;
- (void)setFfeSvrConfigDetObjGuideText:(id)arg1;
- (long long)ffeSvrConfigReqUploadTimeout;
- (void)setFfeSvrConfigReqUploadTimeout:(long long)arg1;
- (long long)ffeSvrConfigReqRetrievalTimeout;
- (void)setFfeSvrConfigReqRetrievalTimeout:(long long)arg1;
- (long long)ffeSvrConfigReqInteval;
- (void)setFfeSvrConfigReqInteval:(long long)arg1;
- (BOOL)ffeSvrConfigDetectBlock;
- (void)setFfeSvrConfigDetectBlock:(BOOL)arg1;
- (BOOL)ffeSvrConfigPreloadBlock;
- (void)setFfeSvrConfigPreloadBlock:(BOOL)arg1;
- (id)modelGetter;
- (void)setModelGetter:(id)arg1;
- (id)modelInfo;
- (void)setModelInfo:(id)arg1;
- (id)modelQueue;
- (void)setModelQueue:(id)arg1;
- (long long)scanBlackCount;
- (void)setScanBlackCount:(long long)arg1;
- (BOOL)svrFallbackStop;
- (void)setSvrFallbackStop:(BOOL)arg1;
- (long long)svrFallbackFrameLimit;
- (void)setSvrFallbackFrameLimit:(long long)arg1;
- (void).cxx_destruct;
@end
