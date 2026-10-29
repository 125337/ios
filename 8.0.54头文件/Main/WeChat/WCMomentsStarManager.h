@interface WCMomentsStarManager : NSObject <WCFacadeExt>
{
    MyWCDB * _database; // +0x8
}
- (id)init;
- (void)willDisplayStarGuideForDataItem:(id)arg1 inScene:(long long)arg2;
- (void)didClickStarGuideForDataItem:(id)arg1 inScene:(long long)arg2;
- (void)markStarGuideActionRecordForDetailPageWithDataItem:(id)arg1 action:(long long)arg2;
- (BOOL)hasStarGuideActionRecordForDetailPageWithDataItem:(id)arg1;
- (BOOL)updateActionRecordFromLocalDataItem:(id)arg1 toServerDataItem:(id)arg2;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (id)database;
- (void)setDatabase:(id)arg1;
- (void).cxx_destruct;
@end

