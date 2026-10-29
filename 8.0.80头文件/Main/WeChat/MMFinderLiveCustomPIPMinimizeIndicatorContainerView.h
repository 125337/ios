@interface MMFinderLiveCustomPIPMinimizeIndicatorContainerView : UIView
{
    MMLiveTaskId * _liveTaskId; // +0x8
    MMFinderLivePIPMinimizeIndicatorView * _ktvIndicatorView; // +0x10
    MMFinderLivePIPMinimizeIndicatorView * _chatRoomIndicatorView; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)configBasicAttributes;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutKTVIndicatorView;
- (void)layoutChatRoomIndicatorView;
- (void)createKTVIndicatorView;
- (void)createChatRoomIndicatorView;
- (void)displayKTVIndicator;
- (void)displayChatRoomIndicator;
- (void)hideIndicators;
- (void)forceRefreshUI;
- (id)getDisplayingCustomContentView;
- (void)hideIndicatorsExcept:(id)arg1;
- (void)removeAllSubViews;
- (void)hideKTVIndicator;
- (void)hideChatRoomIndicator;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)ktvIndicatorView;
- (void)setKtvIndicatorView:(id)arg1;
- (id)chatRoomIndicatorView;
- (void)setChatRoomIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end
