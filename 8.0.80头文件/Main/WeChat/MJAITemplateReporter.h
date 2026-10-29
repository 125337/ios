@interface MJAITemplateReporter : NSObject
{
    unsigned long long _reportScene; // +0x8
    NSString * _maasSessionKey; // +0x10
    NSString * _momentsPostSessionID; // +0x18
    unsigned long long _assetCount; // +0x20
    long long _phase; // +0x28
    NSDate * _assetPreparationStartTime; // +0x30
    NSDate * _assetPreparationEndTime; // +0x38
    NSDate * _cdnUploadStartTime; // +0x40
    NSDate * _cdnUploadEndTime; // +0x48
    NSDate * _cdnDownloadStartTime; // +0x50
    NSDate * _cdnDownloadEndTime; // +0x58
    NSString * _aiAssetGeneratingTaskID; // +0x60
    NSDate * _aiAssetGeneratingStartTime; // +0x68
    NSDate * _aiAssetGeneratingEndTime; // +0x70
    NSDate * _templateSwitchingStartTime; // +0x78
    NSDate * _templateSwitchingEndTime; // +0x80
    long long _result; // +0x88
    NSError * _error; // +0x90
    NSString * _templateId; // +0x98
}
- (void)report;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (id)maasSessionKey;
- (void)setMaasSessionKey:(id)arg1;
- (id)momentsPostSessionID;
- (void)setMomentsPostSessionID:(id)arg1;
- (unsigned long long)assetCount;
- (void)setAssetCount:(unsigned long long)arg1;
- (long long)phase;
- (void)setPhase:(long long)arg1;
- (id)assetPreparationStartTime;
- (void)setAssetPreparationStartTime:(id)arg1;
- (id)assetPreparationEndTime;
- (void)setAssetPreparationEndTime:(id)arg1;
- (id)cdnUploadStartTime;
- (void)setCdnUploadStartTime:(id)arg1;
- (id)cdnUploadEndTime;
- (void)setCdnUploadEndTime:(id)arg1;
- (id)cdnDownloadStartTime;
- (void)setCdnDownloadStartTime:(id)arg1;
- (id)cdnDownloadEndTime;
- (void)setCdnDownloadEndTime:(id)arg1;
- (id)aiAssetGeneratingTaskID;
- (void)setAiAssetGeneratingTaskID:(id)arg1;
- (id)aiAssetGeneratingStartTime;
- (void)setAiAssetGeneratingStartTime:(id)arg1;
- (id)aiAssetGeneratingEndTime;
- (void)setAiAssetGeneratingEndTime:(id)arg1;
- (id)templateSwitchingStartTime;
- (void)setTemplateSwitchingStartTime:(id)arg1;
- (id)templateSwitchingEndTime;
- (void)setTemplateSwitchingEndTime:(id)arg1;
- (long long)result;
- (void)setResult:(long long)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (void).cxx_destruct;
@end
