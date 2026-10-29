@interface SameRecommendRoomMsgContentViewController : BaseMsgContentViewController <ChatroomProfileViewLayoutDelegate>
{
    MMUIView * m_sameRecommendToolButtonView; // +0x1e0
    MMUIButton * m_moreButton; // +0x1e8
    id <SameRecommendRoomMsgContentViewDelegate> _sameRecommendRoomDelegate; // +0x1f0
    ChatroomProfileView * _chatroomProfileViewInfo; // +0x1f8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initSameRecommendToolButtonView;
- (id)getMoreButton;
- (void)updateTableLayoutAnimateDuration:(double)arg1 Orientation:(long long)arg2;
- (BOOL)canBecomeFirstResponder;
- (void)onTapEnterRoomButton;
- (void)viewChatroomProfile:(id)arg1;
- (double)profileViewHeadLength;
- (void)openContactInfo:(id)arg1;
- (void)showPreViewController:(id)arg1;
- (id)sameRecommendRoomDelegate;
- (void)setSameRecommendRoomDelegate:(id)arg1;
- (id)chatroomProfileViewInfo;
- (void)setChatroomProfileViewInfo:(id)arg1;
- (void).cxx_destruct;
@end
