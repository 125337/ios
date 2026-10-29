@interface WCFinderProfileReporter : NSObject
{
    BOOL _stopReport; // +0x8
    BOOL _isStoreButtonExpose; // +0x9
    BOOL _hadReportNewLife; // +0xa
    WCFinderStreamProfileViewModel * _viewModel; // +0x10
    WCFinderLiveAudienceNoticeReporter * _liveReporter; // +0x18
    unsigned long long _vcSessionInTimeMs; // +0x20
    unsigned long long _vcSessionOutTimeMs; // +0x28
    unsigned long long _leaveInteractionType; // +0x30
    NSMutableSet * _reportedElements; // +0x38
    NSMutableDictionary * _elementReportAction; // +0x40
    NSMutableSet * _exposedMiniAppIds; // +0x48
    NSMutableArray * _atExposeMentionNames; // +0x50
    unsigned long long _exposeTimes; // +0x58
    NSString * _bizInfoId; // +0x60
    NSMutableSet * _exposedRecomendContacts; // +0x68
    unsigned long long _vcSessionStayTimeMs; // +0x70
}
- (id)init;
- (void)recordElement:(unsigned int)arg1 expose:(BOOL)arg2;
- (void)bindPostView:(id)arg1 bindId:(id)arg2;
- (void)bindPostView:(id)arg1 bindId:(id)arg2 viewReportPolicy:(unsigned long long)arg3 dynamicParamsBlock:(id /* block */)arg4;
- (void)reportClickElement:(unsigned int)arg1;
- (void)recordMiniAppIds:(id)arg1;
- (void)cleanAll;
- (void)exposeElementAgain:(id)arg1;
- (void)reportProfileExposed:(id)arg1;
- (void)reportProfileDisappear;
- (id)enterPageReportExtInfo:(id)arg1;
- (void)reportExposeAtEvent;
- (void)reportProfileAction:(unsigned long long)arg1 extInfo:(id)arg2;
- (void)reportChannelProfilePOIWithEventType:(long long)arg1 poiName:(id)arg2;
- (void)reportExposeSignatureExpand:(BOOL)arg1;
- (void)reportClickSignatureExpand:(BOOL)arg1;
- (void)reportBrandEvent:(BOOL)arg1;
- (void)reportWechatKF:(BOOL)arg1;
- (void)reportKFButton:(BOOL)arg1;
- (void)reportOlympicsExpose;
- (id)extBizInfoIdInLog;
- (void)reportNickNameClick;
- (void)reportRecommendFollowExpose:(id)arg1 recommendReason:(id)arg2 idx:(long long)arg3;
- (void)reportRecommendFollowClick:(id)arg1 recommendReason:(id)arg2 idx:(long long)arg3;
- (void)reportRecommendFollowItem:(id)arg1 event:(id)arg2 recommendReason:(id)arg3 idx:(long long)arg4;
- (void)setVcSessionOutTimeMs:(unsigned long long)arg1;
- (unsigned long long)getVcSessionStayTimeMs;
- (void)reportNewLifeProfileSessionIn;
- (void)reportNewLifeProfileSessionOut;
- (BOOL)stopReport;
- (void)setStopReport:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)liveReporter;
- (void)setLiveReporter:(id)arg1;
- (unsigned long long)vcSessionInTimeMs;
- (void)setVcSessionInTimeMs:(unsigned long long)arg1;
- (unsigned long long)vcSessionOutTimeMs;
- (unsigned long long)leaveInteractionType;
- (void)setLeaveInteractionType:(unsigned long long)arg1;
- (BOOL)isStoreButtonExpose;
- (void)setIsStoreButtonExpose:(BOOL)arg1;
- (id)reportedElements;
- (void)setReportedElements:(id)arg1;
- (id)elementReportAction;
- (void)setElementReportAction:(id)arg1;
- (id)exposedMiniAppIds;
- (void)setExposedMiniAppIds:(id)arg1;
- (id)atExposeMentionNames;
- (void)setAtExposeMentionNames:(id)arg1;
- (unsigned long long)exposeTimes;
- (void)setExposeTimes:(unsigned long long)arg1;
- (id)bizInfoId;
- (void)setBizInfoId:(id)arg1;
- (id)exposedRecomendContacts;
- (void)setExposedRecomendContacts:(id)arg1;
- (unsigned long long)vcSessionStayTimeMs;
- (void)setVcSessionStayTimeMs:(unsigned long long)arg1;
- (BOOL)hadReportNewLife;
- (void)setHadReportNewLife:(BOOL)arg1;
- (void).cxx_destruct;
@end
