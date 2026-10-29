@interface WCMicroMerchantFoldMgr : NSObject
{
    NSObject<OS_dispatch_queue> * _dataQueue; // +0x8
    NSObject<OS_dispatch_queue> * _reportSerialQueue; // +0x10
    MyWCDB * _database; // +0x18
    WCMicroMerchantFoldSettings * _foldSettings; // +0x20
    NSMutableDictionary * _unfoldedUsernameInfos; // +0x28
    NSArray * _continueUnfoldInteractionTypes; // +0x30
    NSMutableArray * _reportInfoArr; // +0x38
}
- (id)init;
- (void)resetMicroMerchantDynamicUnfoldDataIfNeeded;
- (id)foldSettings;
- (id)reportInfoArr;
- (void)asyncRecordInteractionWithDataItem:(id)arg1 interactionType:(unsigned long long)arg2 isFolded:(BOOL)arg3 atTime:(id)arg4 scene:(unsigned long long)arg5;
- (void)asyncRegenerateFoldSettings;
- (BOOL)clearAllInteractionRecords;
- (id)fetchUnfoldedUsernamesAtTime:(id)arg1 expiredFoldedUsernames:(id *)arg2 expiredUnfoldedUsernames:(id *)arg3;
- (void)_FoldingFeeds_updateUnfoldedUsernameInfosAtTime:(unsigned long long)arg1 expiredUsernames:(id *)arg2;
- (void)_UnfoldingFeeds_updateUnfoldedUsernameInfosAtTime:(unsigned long long)arg1 expiredUsernames:(id *)arg2;
- (BOOL)_UnfoldingFeeds_hasUnfoldInteractionWithUsername:(id)arg1 minTime:(unsigned long long)arg2 maxTime:(unsigned long long)arg3;
- (id)unfoldedUsernameInfos;
- (void)loadUnfoldedUsernameInfos;
- (void)saveUnfoldedUsernameInfos;
- (void)asyncSaveUnfoldedUsernameInfos;
- (void)asyncReportHitRuleInteractions:(id)arg1 openWSGroupInteractions:(id)arg2 openWSUsernames:(id)arg3 threshold:(unsigned long long)arg4;
- (void)asyncReportWithFoldAgainUsernames:(id)arg1;
- (id)hitRuleInteractions:(id)arg1 usernames:(id)arg2 threshold:(unsigned long long)arg3;
- (void)onTimeLineSessionStart;
- (void)handleTimeLineSessionStart;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void)setFoldSettings:(id)arg1;
- (void)setUnfoldedUsernameInfos:(id)arg1;
- (id)continueUnfoldInteractionTypes;
- (void)setContinueUnfoldInteractionTypes:(id)arg1;
- (void)setReportInfoArr:(id)arg1;
- (void).cxx_destruct;
@end

