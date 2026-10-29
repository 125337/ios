@interface WAMenuScrollActionSheet : MMScrollActionSheet
{
    BOOL _needPreferredActionInReloadAnimation; // +0x8
    unsigned long long _source; // +0x10
    NSString * _userName; // +0x18
    double _averageScore; // +0x20
    WAMenuAboveHeaderView * _topView; // +0x28
    WAMenuHeaderView * _headerView; // +0x30
    WAProfileLogicController * _profileLogicController; // +0x38
}
- (id)initWithUserName:(id)arg1;
- (void)preferredActionInReloadAnimation;
- (void)dismissAnimated:(BOOL)arg1;
- (void)relayoutForUpdate;
- (void)layoutTopView;
- (void)onTopViewTaped;
- (void)setHeaderView:(id)arg1;
- (void)tryUpdateData:(id)arg1;
- (void)updatePageInfo;
- (void)updateComment;
- (void)configHeaderView:(id)arg1 withCommentInfo:(id)arg2;
- (void)updateAverageScore;
- (id)profileLogicController;
- (id)bottomPadddingViewBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)topView;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (double)averageScore;
- (void)setAverageScore:(double)arg1;
- (BOOL)needPreferredActionInReloadAnimation;
- (void)setNeedPreferredActionInReloadAnimation:(BOOL)arg1;
- (void)setTopView:(id)arg1;
- (id)headerView;
- (void)setProfileLogicController:(id)arg1;
- (void).cxx_destruct;
@end

