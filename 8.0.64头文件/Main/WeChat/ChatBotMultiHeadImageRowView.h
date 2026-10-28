@interface ChatBotMultiHeadImageRowView : UIView <ChatBotTalkingAnimationHeadViewDelegate>
{
    BOOL _isRound; // +0x8
    BOOL _blurCircle; // +0x9
    BOOL _showNickName; // +0xa
    BOOL _needRelayout; // +0xb
    NSArray * _chatBotList; // +0x10
    NSMutableArray * _headImageViewList; // +0x18
    ChatBotRoomHeadComponentView * _curTalkingView; // +0x20
    CGSize _headImageSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 chatBotList:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 chatBotList:(id)arg2 headImageSize:(CGSize)arg3 isRound:(BOOL)arg4 blurCircle:(BOOL)arg5 showNickName:(BOOL)arg6;
- (CGSize)getHeadImageSize;
- (void)initHeadImageViews;
- (void)layoutSubviews;
- (id)getTalkingUsername;
- (id)chatBotList;
- (void)setChatBotList:(id)arg1;
- (id)headImageViewList;
- (void)setHeadImageViewList:(id)arg1;
- (id)curTalkingView;
- (void)setCurTalkingView:(id)arg1;
- (BOOL)isRound;
- (void)setIsRound:(BOOL)arg1;
- (BOOL)blurCircle;
- (void)setBlurCircle:(BOOL)arg1;
- (CGSize)headImageSize;
- (void)setHeadImageSize:(CGSize)arg1;
- (BOOL)showNickName;
- (void)setShowNickName:(BOOL)arg1;
- (BOOL)needRelayout;
- (void)setNeedRelayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
