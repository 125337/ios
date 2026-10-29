@interface MMFinderLiveGroupedBadgeView : UIView
{
    BOOL _isFinderUser; // +0x8
    NSMutableArray * _signViewArrayForLayout; // +0x10
    NSArray * _badgeInfos; // +0x18
    double _maxWidth; // +0x20
    long long _style; // +0x28
    long long _darkModeStyle; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
    UIImageView * _finderIconImageView; // +0x40
}
- (id)initWithLiveTaskId:(id)arg1 darkModeStyle:(long long)arg2;
- (void)updateWithBadgeInfos:(id)arg1 badgeStyle:(long long)arg2;
- (void)updateWithBadgeInfos:(id)arg1 isFinderUser:(BOOL)arg2 badgeStyle:(long long)arg3;
- (void)sizeToFitWithMaxWidth:(double)arg1;
- (void)reloadSignViewArray;
- (id)loadAnonymousSignViewIfCan;
- (id)loadMysteriousSignViewIfCan;
- (id)loadGlobalRankSignViewIfCan;
- (id)loadMemberSignViewIfCan;
- (id)loadFansGroupSignViewIfCan;
- (BOOL)onlyDark;
- (id)finderLiveTask;
- (id)boldFontForNumericText;
- (id)mediumFontForMixedText;
- (id)signViewArrayForLayout;
- (void)setSignViewArrayForLayout:(id)arg1;
- (id)badgeInfos;
- (void)setBadgeInfos:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (long long)darkModeStyle;
- (void)setDarkModeStyle:(long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (BOOL)isFinderUser;
- (void)setIsFinderUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
