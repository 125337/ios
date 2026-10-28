@interface WSRedPointCtrlInfo : NSObject <PBCoding>
{
    BOOL _bContentReddotShowedInFindPage; // +0x8
    unsigned int _recommendClearedTimeStamps; // +0xc
    unsigned int _searchClearedTimeStamps; // +0x10
    unsigned int _secondColumnClearedTimeStamps; // +0x14
    unsigned int _recommendThirdColumnClearedTimeStamps; // +0x18
    WSRedPointInfo * _searchRedPointInfo; // +0x20
    WSRedPointInfo * _recommendFirstColumnRedPointInfo; // +0x28
    WSNumberRedPointList * _recommendNumRedPoints; // +0x30
    WSRedPointInfo * _recommendSecondColumnRedPointInfo; // +0x38
    WSRedPointInfo * _settingRedPointInfo; // +0x40
    WSRedPointInfo * _recommendThirdColumnRedPointInfo; // +0x48
}
+ (void)PBArrayAdd_searchRedPointInfo;
+ (void)PBArrayAdd_recommendFirstColumnRedPointInfo;
+ (void)PBArrayAdd_recommendClearedTimeStamps;
+ (void)PBArrayAdd_searchClearedTimeStamps;
+ (void)PBArrayAdd_recommendNumRedPoints;
+ (void)PBArrayAdd_recommendSecondColumnRedPointInfo;
+ (void)PBArrayAdd_settingRedPointInfo;
+ (void)PBArrayAdd_secondColumnClearedTimeStamps;
+ (void)PBArrayAdd_bContentReddotShowedInFindPage;
+ (void)PBArrayAdd_recommendThirdColumnRedPointInfo;
+ (void)PBArrayAdd_recommendThirdColumnClearedTimeStamps;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned int)getClearedTimeStamps:(unsigned long long)arg1;
- (id)searchRedPointInfo;
- (void)setSearchRedPointInfo:(id)arg1;
- (id)recommendFirstColumnRedPointInfo;
- (void)setRecommendFirstColumnRedPointInfo:(id)arg1;
- (unsigned int)recommendClearedTimeStamps;
- (void)setRecommendClearedTimeStamps:(unsigned int)arg1;
- (unsigned int)searchClearedTimeStamps;
- (void)setSearchClearedTimeStamps:(unsigned int)arg1;
- (id)recommendNumRedPoints;
- (void)setRecommendNumRedPoints:(id)arg1;
- (id)recommendSecondColumnRedPointInfo;
- (void)setRecommendSecondColumnRedPointInfo:(id)arg1;
- (unsigned int)secondColumnClearedTimeStamps;
- (void)setSecondColumnClearedTimeStamps:(unsigned int)arg1;
- (id)settingRedPointInfo;
- (void)setSettingRedPointInfo:(id)arg1;
- (BOOL)bContentReddotShowedInFindPage;
- (void)setBContentReddotShowedInFindPage:(BOOL)arg1;
- (id)recommendThirdColumnRedPointInfo;
- (void)setRecommendThirdColumnRedPointInfo:(id)arg1;
- (unsigned int)recommendThirdColumnClearedTimeStamps;
- (void)setRecommendThirdColumnClearedTimeStamps:(unsigned int)arg1;
- (void).cxx_destruct;
@end
