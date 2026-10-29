@interface MJOneClickFilmReportContext : NSObject
{
    NSString * _attemptID; // +0x8
    NSString * _taskID; // +0x10
    unsigned long long _compositionState; // +0x18
    unsigned long long _initialResult; // +0x20
    unsigned long long _pageEndTime; // +0x28
    unsigned long long _attemptStartTime; // +0x30
    NSString * _sessionID; // +0x38
    unsigned long long _enterScene; // +0x40
    NSDictionary * _pendingTemplateParams; // +0x48
    NSDictionary * _materialParams; // +0x50
    NSString * _defaultTemplateID; // +0x58
    NSString * _templateID; // +0x60
    NSString * _templateName; // +0x68
    NSString * _previousTemplateID; // +0x70
    unsigned long long _templatePosition; // +0x78
    NSMutableArray * _switchIDs; // +0x80
    NSMutableDictionary * _stages; // +0x88
    unsigned long long _loadingStartTime; // +0x90
    unsigned long long _loadingEndTime; // +0x98
    unsigned long long _pageStartTime; // +0xa0
    unsigned long long _abandonPath; // +0xa8
}
+ (id)reportingParamsWithAttemptParams:(id)arg1 templateID:(id)arg2 templatePosition:(unsigned long long)arg3;
+ (id)materialParamsForAssetInfos:(id)arg1;
- (id)initWithSessionID:(id)arg1 enterScene:(unsigned long long)arg2 assetInfos:(id)arg3;
- (void)updateAssetInfos:(id)arg1;
- (void)beginSelectingTemplateID:(id)arg1 name:(id)arg2 position:(unsigned long long)arg3;
- (void)cancelSelectingTemplate;
- (BOOL)selectTemplateWithID:(id)arg1 name:(id)arg2 position:(unsigned long long)arg3;
- (id)params;
- (void)beginStage:(unsigned long long)arg1 composeType:(unsigned long long)arg2 atTime:(unsigned long long)arg3;
- (id)finishStage:(unsigned long long)arg1 result:(unsigned long long)arg2 atTime:(unsigned long long)arg3;
- (void)finishInitialCreationWithResult:(unsigned long long)arg1;
- (void)loadingDidShowAtTime:(unsigned long long)arg1;
- (id)finishLoadingWithReason:(unsigned long long)arg1 atTime:(unsigned long long)arg2;
- (void)pageDidShowAtTime:(unsigned long long)arg1;
- (id)finishPageWithReason:(unsigned long long)arg1 atTime:(unsigned long long)arg2;
- (id)attemptID;
- (void)setAttemptID:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (unsigned long long)compositionState;
- (void)setCompositionState:(unsigned long long)arg1;
- (unsigned long long)initialResult;
- (void)setInitialResult:(unsigned long long)arg1;
- (unsigned long long)pageEndTime;
- (void)setPageEndTime:(unsigned long long)arg1;
- (unsigned long long)attemptStartTime;
- (void)setAttemptStartTime:(unsigned long long)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)pendingTemplateParams;
- (void)setPendingTemplateParams:(id)arg1;
- (id)materialParams;
- (void)setMaterialParams:(id)arg1;
- (id)defaultTemplateID;
- (void)setDefaultTemplateID:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)templateName;
- (void)setTemplateName:(id)arg1;
- (id)previousTemplateID;
- (void)setPreviousTemplateID:(id)arg1;
- (unsigned long long)templatePosition;
- (void)setTemplatePosition:(unsigned long long)arg1;
- (id)switchIDs;
- (void)setSwitchIDs:(id)arg1;
- (id)stages;
- (void)setStages:(id)arg1;
- (unsigned long long)loadingStartTime;
- (void)setLoadingStartTime:(unsigned long long)arg1;
- (unsigned long long)loadingEndTime;
- (void)setLoadingEndTime:(unsigned long long)arg1;
- (unsigned long long)pageStartTime;
- (void)setPageStartTime:(unsigned long long)arg1;
- (unsigned long long)abandonPath;
- (void)setAbandonPath:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
