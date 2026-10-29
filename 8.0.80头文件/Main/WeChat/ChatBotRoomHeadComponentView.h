@interface ChatBotRoomHeadComponentView : UIView <ChatBotTalkingAnimationHeadViewDelegate>
{
    BOOL _enableSingleClick; // +0x8
    BOOL _isRound; // +0x9
    BOOL _blurCircle; // +0xa
    BOOL _showNickName; // +0xb
    id <ChatBotRoomHeadComponentViewDelegate> _delegate; // +0x10
    ChatBotVoIPAIMemberInfo * _memberInfo; // +0x18
    ChatBotTalkingAnimationHeadView * _headImageView; // +0x20
    UILabel * _nicknamelabel; // +0x28
    UIFont * _nicknameFont; // +0x30
    CGSize _headImageSize; // +0x38
}
- (id)initWithMemberInfo:(id)arg1 headImageSize:(CGSize)arg2 nickNameFont:(id)arg3 enableSingleClick:(BOOL)arg4;
- (id)initWithMemberInfo:(id)arg1 headImageSize:(CGSize)arg2 nickNameFont:(id)arg3 enableSingleClick:(BOOL)arg4 isRound:(BOOL)arg5 blurCircle:(BOOL)arg6 showNickName:(BOOL)arg7;
- (id)getNickName;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)layoutHeadImageView;
- (void)applyAiSpeakingInfoEvent;
- (void)setFontColor:(id)arg1;
- (void)layoutNickNameLabel;
- (void)onHeadViewSingleClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)memberInfo;
- (void)setMemberInfo:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknamelabel;
- (void)setNicknamelabel:(id)arg1;
- (CGSize)headImageSize;
- (void)setHeadImageSize:(CGSize)arg1;
- (id)nicknameFont;
- (void)setNicknameFont:(id)arg1;
- (BOOL)enableSingleClick;
- (void)setEnableSingleClick:(BOOL)arg1;
- (BOOL)isRound;
- (void)setIsRound:(BOOL)arg1;
- (BOOL)blurCircle;
- (void)setBlurCircle:(BOOL)arg1;
- (BOOL)showNickName;
- (void)setShowNickName:(BOOL)arg1;
- (void).cxx_destruct;
@end
