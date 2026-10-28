@interface MMFinderLiveOnlineInfoBar : MMLiveBaseOnlineStateBar <WCFinderHeadImageViewDelegate>
{
    LiveOnlineInfo * _currentUserLiveOnlineInfo; // +0x8
    NSMutableArray * _onlineTopRewarderInfoFacedes; // +0x10
    MMUIView * _topUsersHeadersContainerView; // +0x18
    MMUIView * _backgroundView; // +0x20
    MMUILabel * _onlineCountLabel; // +0x28
    NSMutableArray * _headImageViews; // +0x30
    UIImageView * _arrowImage; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithOnlineBarInfo:(id)arg1;
- (void)updateWithOnlineBarInfo:(id)arg1 customCountStr:(id)arg2;
- (void)updateTopUsersHeadersContainerView;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)finderHeadImageViewLoadUrlImageFailed:(id)arg1 timeConsume:(long long)arg2 errorCode:(long long)arg3;
- (void)updateOnlineCountTitle:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onOnlineStateButtonClicked;
- (id)currentUserLiveOnlineInfo;
- (void)setCurrentUserLiveOnlineInfo:(id)arg1;
- (id)onlineTopRewarderInfoFacedes;
- (void)setOnlineTopRewarderInfoFacedes:(id)arg1;
- (id)topUsersHeadersContainerView;
- (void)setTopUsersHeadersContainerView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)onlineCountLabel;
- (void)setOnlineCountLabel:(id)arg1;
- (id)headImageViews;
- (void)setHeadImageViews:(id)arg1;
- (id)arrowImage;
- (void)setArrowImage:(id)arg1;
- (void).cxx_destruct;
@end
