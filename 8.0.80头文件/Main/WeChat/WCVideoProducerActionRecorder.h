@interface WCVideoProducerActionRecorder : NSObject <NSCopying>
{
    BOOL _isMJAppInstalled; // +0x8
    unsigned int _activityEventType; // +0xc
    long long _scene; // +0x10
    long long _state; // +0x18
    NSString * _boundSessionId; // +0x20
    WCMomentsPickerActionRecorder * _pickerActionRecorder; // +0x28
    NSString * _videoProducerId; // +0x30
    MJAnalyticsMovieSession * _recommendationAnalytics; // +0x38
    NSString * _extInfoJson; // +0x40
    SightDraftItem * _sightDraftItem; // +0x48
    MJVideoTemplate * _exportedTemplate; // +0x50
    OMJMusicInfo * _exportedMusic; // +0x58
    double _videoProducerStartTime; // +0x60
    double _videoProducerEndTime; // +0x68
    NSMutableDictionary * _operationContextMap; // +0x70
}
+ (void)reportUserOperationWithSessionId:(id)arg1 recorderList:(id)arg2;
+ (id)_generateMediaDetailStrFromRecorderList:(id)arg1;
+ (id)_generateEditDetailStrFromRecorderList:(id)arg1;
+ (void)reportRecommendationWithRecorder:(id)arg1;
+ (long long)_convertTemplateSourceFromMJVideotemplateSource:(long long)arg1;
+ (long long)_convertTemplateSourceFromSourceType:(int)arg1;
+ (long long)_convertMusicSourceFromSourceType:(int)arg1;
+ (long long)_timeMSFromStart:(double)arg1 toEnd:(double)arg2;
+ (long long)_timeMSFromCMTime:(struct)arg1;
+ (long long)_validTimeMSFromTimeInterval:(double)arg1;
+ (id)_safeJSONStringWithObject:(id)arg1;
+ (id)_safeStringWithString:(id)arg1;
- (long long)_getTemplatePlayCount;
- (long long)_getMusicPlayCount;
- (BOOL)_hasLaunchMJAppShowed;
- (long long)_getLastLaunchMJRegularChoice;
- (BOOL)_hasClickedLaunchMJApp;
- (long long)_getCreationScene;
- (long long)_getLaunchMJAppResult;
- (long long)_getExportTemplateSource;
- (long long)_getExportMusicSource;
- (id)_getExposeMusicIdListForTemplateId:(id)arg1;
- (id)_getTemplateAnalyticsById:(id)arg1;
- (id)_getTemplateSeqFromPreviewTemplateAnalytics:(id)arg1;
- (id)_getMusicSeqFromPreviewMusicAnalyticsList:(id)arg1;
- (id)_getMusicSearchActsForTemplateId:(id)arg1;
- (unsigned long long)_getExtRecommendRequestIDForTemplateId:(id)arg1;
- (id)_getTemplateEditDetailListFromTemplateOperation:(id)arg1;
- (id)_getTemplateEditDetailFromEditSegmentOperation:(id)arg1;
- (id)_genReportStrForExtInfo;
- (id)_genReportStrForEGDetailFromBelonger:(long long)arg1;
- (id)_genReportStrForFinishAction;
- (id)_genReportStrForRecommendMediaDetail;
- (id)_genReportStrForTemplateEditDetail;
- (id)_genReportStrForReceivedTemplateIdList;
- (id)_genReportStrForExposeTemplateIdListFromBelonger:(long long)arg1;
- (id)_genReportStrForAllPreviewTemplateSeq;
- (id)_genReportStrForPreviewTemplateSeqFromBelonger:(long long)arg1;
- (id)initWithPickerActionRecorder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)videoProducerDidInit:(unsigned int)arg1;
- (void)videoProducerDidStartWithId:(id)arg1 forScene:(long long)arg2 bindSessionId:(id)arg3;
- (void)videoProducerDidStopWithResult:(BOOL)arg1;
- (void)videoProducerDidTerminate;
- (void)videoProducerDidCheckMJAppInstallation:(BOOL)arg1;
- (void)videoProducerDidAnalysisRecommendation:(id)arg1;
- (void)videoProducerDidExport:(id)arg1 byTemplate:(id)arg2 music:(id)arg3;
- (void)videoProducerDidPassExtInfoJson:(id)arg1;
- (id)operationCtxFromBelonger:(long long)arg1;
- (id)getAllProvidedTemplateList;
- (id)getAllShowedTemplateList;
- (id)getAllTemplateOperationList;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)boundSessionId;
- (void)setBoundSessionId:(id)arg1;
- (id)pickerActionRecorder;
- (void)setPickerActionRecorder:(id)arg1;
- (id)videoProducerId;
- (void)setVideoProducerId:(id)arg1;
- (id)recommendationAnalytics;
- (void)setRecommendationAnalytics:(id)arg1;
- (id)extInfoJson;
- (void)setExtInfoJson:(id)arg1;
- (BOOL)isMJAppInstalled;
- (void)setIsMJAppInstalled:(BOOL)arg1;
- (id)sightDraftItem;
- (void)setSightDraftItem:(id)arg1;
- (id)exportedTemplate;
- (void)setExportedTemplate:(id)arg1;
- (id)exportedMusic;
- (void)setExportedMusic:(id)arg1;
- (double)videoProducerStartTime;
- (void)setVideoProducerStartTime:(double)arg1;
- (double)videoProducerEndTime;
- (void)setVideoProducerEndTime:(double)arg1;
- (unsigned int)activityEventType;
- (id)operationContextMap;
- (void)setOperationContextMap:(id)arg1;
- (void).cxx_destruct;
@end
