@interface DeviceRankDetailResonse : MMObject <PBCoding>
{
    BOOL _uiIsFollower; // +0x8
    BOOL _isLikedCover; // +0x9
    BOOL _isLike; // +0xa
    unsigned int _uiDayScore; // +0xc
    unsigned int _myranknum; // +0x10
    unsigned int _likecount; // +0x14
    NSString * _nsCoverUrl; // +0x18
    NSString * _nsMotto; // +0x20
    NSString * _nsDayScoreTitle; // +0x28
    NSArray * _aryRankList; // +0x30
    NSArray * _aryScoreDescList; // +0x38
    NSString * _nsSource; // +0x40
    NSArray * _affectedUserList; // +0x48
    NSString * _shareUrl; // +0x50
    NSString * _shareTitle; // +0x58
    NSArray * _aryStepList; // +0x60
    NSArray * _aryFollowList; // +0x68
    NSArray * _aryButtonList; // +0x70
    NSString * _reportUrl; // +0x78
    NSArray * _arrRecord; // +0x80
    NSArray * _arrLikes; // +0x88
    NSArray * _arrGoal; // +0x90
}
+ (void)PBArrayAdd_nsCoverUrl;
+ (void)PBArrayAdd_nsMotto;
+ (void)PBArrayAdd_nsDayScoreTitle;
+ (void)PBArrayAdd_uiDayScore;
+ (void)PBArrayAdd_aryRankList;
+ (void)PBArrayAdd_aryScoreDescList;
+ (void)PBArrayAdd_nsSource;
+ (void)PBArrayAdd_affectedUserList;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_aryStepList;
+ (void)PBArrayAdd_aryFollowList;
+ (void)PBArrayAdd_uiIsFollower;
+ (void)PBArrayAdd_aryButtonList;
+ (void)PBArrayAdd_isLikedCover;
+ (void)PBArrayAdd_myranknum;
+ (void)PBArrayAdd_reportUrl;
+ (void)PBArrayAdd_arrRecord;
+ (void)PBArrayAdd_arrGoal;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)nsCoverUrl;
- (void)setNsCoverUrl:(id)arg1;
- (id)nsMotto;
- (void)setNsMotto:(id)arg1;
- (id)nsDayScoreTitle;
- (void)setNsDayScoreTitle:(id)arg1;
- (unsigned int)uiDayScore;
- (void)setUiDayScore:(unsigned int)arg1;
- (id)aryRankList;
- (void)setAryRankList:(id)arg1;
- (id)aryScoreDescList;
- (void)setAryScoreDescList:(id)arg1;
- (id)nsSource;
- (void)setNsSource:(id)arg1;
- (id)affectedUserList;
- (void)setAffectedUserList:(id)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)aryStepList;
- (void)setAryStepList:(id)arg1;
- (id)aryFollowList;
- (void)setAryFollowList:(id)arg1;
- (BOOL)uiIsFollower;
- (void)setUiIsFollower:(BOOL)arg1;
- (id)aryButtonList;
- (void)setAryButtonList:(id)arg1;
- (BOOL)isLikedCover;
- (void)setIsLikedCover:(BOOL)arg1;
- (unsigned int)myranknum;
- (void)setMyranknum:(unsigned int)arg1;
- (id)reportUrl;
- (void)setReportUrl:(id)arg1;
- (id)arrRecord;
- (void)setArrRecord:(id)arg1;
- (unsigned int)likecount;
- (void)setLikecount:(unsigned int)arg1;
- (id)arrLikes;
- (void)setArrLikes:(id)arg1;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (id)arrGoal;
- (void)setArrGoal:(id)arg1;
- (void).cxx_destruct;
@end
