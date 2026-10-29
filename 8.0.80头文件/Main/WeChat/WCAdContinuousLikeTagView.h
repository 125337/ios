@interface WCAdContinuousLikeTagView : MMUIView <IWCAdSocialLikeLogicExt>
{
    WCDataItem * _dataItem; // +0x8
    WCAdContinuousLikeTagInfo * _tagInfo; // +0x10
    unsigned long long _contentItemScene; // +0x18
    MMUILabel * _likeNumberTitle; // +0x20
    MMUILabel * _continuousLikeTitle; // +0x28
    MMUILabel * _continuousLikeNumber; // +0x30
    MMUIButton * _jumpLinkButton; // +0x38
    WCAdURLImageView * _jumpLinkIcon; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 tagInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;
- (void)dealloc;
- (void)initView;
- (void)cleanSubViews;
- (void)initNotLikeView;
- (void)initLikedView;
- (void)initContinuousLikingView;
- (void)updateDataItem:(id)arg1;
- (void)updateContinuousLikeNumber:(int)arg1;
- (void)playContinuousLikeNumberAnimation;
- (id)socialLikeLogic;
- (void)onJumpLinkButtonClick:(id)arg1;
- (void)onJumpLinkButtonTouchDown:(id)arg1;
- (void)onJumpLinkButtonTouchUp:(id)arg1;
- (void)resetJumpLinkButtonState;
- (void)onContinuousLikeStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeState:(int)arg3;
- (void)onContinuousLikeCountChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeCount:(int)arg3;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)likeNumberTitle;
- (void)setLikeNumberTitle:(id)arg1;
- (id)continuousLikeTitle;
- (void)setContinuousLikeTitle:(id)arg1;
- (id)continuousLikeNumber;
- (void)setContinuousLikeNumber:(id)arg1;
- (id)jumpLinkButton;
- (void)setJumpLinkButton:(id)arg1;
- (id)jumpLinkIcon;
- (void)setJumpLinkIcon:(id)arg1;
- (void).cxx_destruct;
@end
