@interface MMLiveGameJoinTeamShowGiftView : MMUIButton <MMImageLoaderObserver>
{
    BOOL _showReddot; // +0x8
    BOOL _checkStatsShowed; // +0x9
    BOOL _touchDown; // +0xa
    UIView * _backgroundView; // +0x10
    MMUIImageView * _iconView; // +0x18
    MMUILabel * _wordingLable; // +0x20
    MMUIImageView * _rightView; // +0x28
    UIView * _redView; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
    MMFinderLiveGameTeamInfo * _gameTeamInfo; // +0x40
    NSURL * _iconUrl; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)checkStatsShow;
- (void)fetchGameTeamGiftStatus;
- (void)layoutUI;
- (void)updateGameInfo:(id)arg1 gameTeamInfo:(id)arg2;
- (void)sizeToFit;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)onTouchUpOutside;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)wordingLable;
- (void)setWordingLable:(id)arg1;
- (id)rightView;
- (void)setRightView:(id)arg1;
- (id)redView;
- (void)setRedView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)gameTeamInfo;
- (void)setGameTeamInfo:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (void).cxx_destruct;
@end
