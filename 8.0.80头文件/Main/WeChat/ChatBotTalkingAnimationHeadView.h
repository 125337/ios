@interface ChatBotTalkingAnimationHeadView : UIView <MultiTalkMemberExt, IChatBotVoIPSessionDelegate, MMImageLoaderObserver>
{
    BOOL _applyAiSpeakingInfoEvent; // +0x8
    BOOL _isRound; // +0x9
    BOOL _blurCircle; // +0xa
    BOOL _enableSingleClick; // +0xb
    id <ChatBotTalkingAnimationHeadViewDelegate> _delegate; // +0x10
    ChatBotVoIPAIMemberInfo * _memberInfo; // +0x18
    MMHeadImageView * _headView; // +0x20
    ChatBotAnimatedWaveView * _waveView; // +0x28
    UIImageView * _blurredImageView; // +0x30
}
- (id)initWithMemberInfo:(id)arg1 size:(CGSize)arg2;
- (id)initWithMemberInfo:(id)arg1 size:(CGSize)arg2 isRound:(BOOL)arg3 blurCircle:(BOOL)arg4;
- (void)setDelegate:(id)arg1;
- (id)chatBotIdentifier;
- (void)initViews;
- (void)initHeadView;
- (void)setupBlurredImageView;
- (id)cropCenterOfImage:(id)arg1 scale:(double)arg2;
- (id)blurImage:(id)arg1 radius:(double)arg2;
- (id)createRingMaskWithSize:(CGSize)arg1 ringWidth:(double)arg2;
- (void)updateHeadImage:(id)arg1;
- (void)updateHeadImgWithUrl:(id)arg1;
- (void)initWaveView;
- (void)setWaveExtendWidth:(double)arg1;
- (void)layoutSubviews;
- (void)enableSingleClick:(BOOL)arg1;
- (void)onSingleClick;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onMultiTalkMemberTalking;
- (void)onMultiTalkMemberSilent;
- (void)onUpdateAITAlkingStatusWithTalkingMembers:(id)arg1;
- (void)onRecvAiSpeakingInfo:(id)arg1;
- (id)delegate;
- (BOOL)applyAiSpeakingInfoEvent;
- (void)setApplyAiSpeakingInfoEvent:(BOOL)arg1;
- (BOOL)isRound;
- (void)setIsRound:(BOOL)arg1;
- (BOOL)blurCircle;
- (void)setBlurCircle:(BOOL)arg1;
- (id)memberInfo;
- (void)setMemberInfo:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)waveView;
- (void)setWaveView:(id)arg1;
- (id)blurredImageView;
- (void)setBlurredImageView:(id)arg1;
- (BOOL)enableSingleClick;
- (void)setEnableSingleClick:(BOOL)arg1;
- (void).cxx_destruct;
@end
