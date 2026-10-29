@interface WCFinderBaseCgi : WCBaseCgi <WCFinderCGIPrefetching>
{
    BOOL _needMonitorCGIProfile; // +0x8
    BOOL _attachCGIProfileToResp; // +0x9
    BOOL _cancelTask; // +0xa
    BOOL _reportWithoutSessionBuffer; // +0xb
    int _innerScene; // +0xc
    WXPBGeneratedMessage * _request; // +0x10
    double _startTime; // +0x18
    WCFinderPrefetchCache * _prefetchCache; // +0x20
    unsigned long long _requestId; // +0x28
    NSMutableSet * _baseProcessingToastErrorCodeSet; // +0x30
    NSArray * _objectBaseInfoKeys; // +0x38
    WCFinderCGIProfile * _bizCGIProfile; // +0x40
}
+ (id)genBaseRequest;
+ (unsigned int)getBaseRequestExtFlag;
+ (void)updateBaseInfosForBaseRequest:(id)arg1 tidList:(id)arg2 scene:(int)arg3 extraKey:(id)arg4 useSessionBuffer:(BOOL)arg5;
+ (void)updateExptBufferForBaseRequest:(id)arg1 withCmdId:(unsigned int)arg2;
+ (id)baseJsonDict;
+ (id)baseProcessingToastErrorCodeSet;
+ (id)supportedCodingFormatList;
+ (BOOL)_canUse265;
+ (BOOL)_canUse266;
+ (BOOL)shouldAutoProcessingToastWithErrorCode:(long long)arg1;
+ (unsigned long long)genCurrentTimeStamp;
- (BOOL)checkIfUsePrefetch;
- (BOOL)checkIfPrefetchRequestUseCache;
- (BOOL)checkIfConsumeRequestUseCache:(int)arg1;
- (void)clearPrefetchCache;
- (void)setNeedMonitorCGIProfile:(BOOL)arg1;
- (BOOL)needADDeviceInfo;
- (void)reportDropPrefetchCache:(id)arg1 reason:(unsigned long long)arg2;
- (void)start;
- (void)setRequest:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (void)setFeedIDArray:(id)arg1 scene:(int)arg2;
- (void)setFeedIDArray:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (void)setFeedObjectBaseInfoKeys:(id)arg1 scene:(int)arg2;
- (void)setFeedIDArrayWithoutSessionBuffer:(id)arg1 scene:(int)arg2;
- (void)setFeedObjectBaseInfoKeysWithoutSessionBuffer:(id)arg1 scene:(int)arg2;
- (void)_updateTidInfos;
- (id)additionalUdfKVInfo;
- (unsigned int)additionalExptFlag;
- (void)_updateClientFlagWithScene:(int)arg1;
- (BOOL)shouldAutoProcessingJumpWithError:(id)arg1;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportCGIProfileWithWrap:(id)arg1;
- (void)cancel;
- (void)addObjectBaseInfoWithSessionBufferModel:(id)arg1;
- (void)showToastWithMsg:(id)arg1 cancel:(id)arg2 confirm:(id)arg3 confirmLink:(id)arg4;
- (id)request;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)prefetchCache;
- (void)setPrefetchCache:(id)arg1;
- (BOOL)needMonitorCGIProfile;
- (BOOL)attachCGIProfileToResp;
- (void)setAttachCGIProfileToResp:(BOOL)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (BOOL)isCancelTask;
- (void)setCancelTask:(BOOL)arg1;
- (id)baseProcessingToastErrorCodeSet;
- (void)setBaseProcessingToastErrorCodeSet:(id)arg1;
- (id)objectBaseInfoKeys;
- (void)setObjectBaseInfoKeys:(id)arg1;
- (int)innerScene;
- (void)setInnerScene:(int)arg1;
- (BOOL)reportWithoutSessionBuffer;
- (void)setReportWithoutSessionBuffer:(BOOL)arg1;
- (id)bizCGIProfile;
- (void)setBizCGIProfile:(id)arg1;
- (void).cxx_destruct;
@end
