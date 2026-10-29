@interface WCFinderDiagnosisDataCenter : NSObject
{
    NSMutableDictionary * _recardMap; // +0x8
    NSMutableSet * _alreadyDisplayItems; // +0x10
    NSMutableDictionary * _objectStatusMap; // +0x18
    FinderJumpInfo * _cacheJumpInfoMayBeNull; // +0x20
}
- (id)init;
- (void)queryDataForTidList:(id)arg1;
- (void)update:(id)arg1 forTid:(id)arg2;
- (BOOL)shouldFetchDiagnosisData;
- (long long)fetchDiagnosisDataFlag;
- (id)displayItemForTid:(id)arg1;
- (double)displayDuration;
- (BOOL)showAbnormalIcon:(id)arg1;
- (void)markDiagnosisDataItemRead:(id)arg1;
- (void)reportHitXLab;
- (BOOL)dataItemCouldShowCreaterEnterance:(id)arg1;
- (id)creatorJumpInfoForContentVM:(id)arg1;
- (void)reloadCacheCreatorJumpInfo;
- (id)recardMap;
- (void)setRecardMap:(id)arg1;
- (id)alreadyDisplayItems;
- (void)setAlreadyDisplayItems:(id)arg1;
- (id)objectStatusMap;
- (void)setObjectStatusMap:(id)arg1;
- (id)cacheJumpInfoMayBeNull;
- (void)setCacheJumpInfoMayBeNull:(id)arg1;
- (void).cxx_destruct;
@end
