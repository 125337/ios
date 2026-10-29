@interface GCChatBaseCell : GCBaseCollectionViewCell <GCChatCellPublishBottomViewDelegate>
{
    MMWebImageView * _headImgView; // +0x8
    UIView * _nameLineView; // +0x10
    UIView * _headLineView; // +0x18
    UIView * _bubbleView; // +0x20
    UIView * _midContentContainerView; // +0x28
    UIView * _subClassContentView; // +0x30
    UILabel * _nameLabel; // +0x38
    UILabel * _tagLabel; // +0x40
    GCRoleInfoView * _roleInfoView; // +0x48
    MMWebImageView * _roleIcon; // +0x50
    MMUIActivityIndicatorView * _loadingView; // +0x58
    UIImageView * _sendFailView; // +0x60
    UIView * _statusBgView; // +0x68
    MMWebImageView * _statusIcon; // +0x70
    UILabel * _debugLabel; // +0x78
    GCChatCellVoteView * _voteView; // +0x80
    UIButton * _channelBtn; // +0x88
    GCChatCellPublishBottomView * _publishBottomView; // +0x90
    UITapGestureRecognizer * _singleTapOnHead; // +0x98
    UITapGestureRecognizer * _doubleTapOnHead; // +0xa0
    PAGView * _pagView; // +0xa8
    UIView * _headTickleMaskView; // +0xb0
}
+ (void)updateiPadCellWidth:(double)arg1;
+ (void)calculateLayoutIfNeed:(id)arg1;
+ (void)onCalculatLayoutInfo:(id)arg1;
+ (CGSize)ceilSize:(CGSize)arg1;
+ (double)maxNameWidth;
+ (double)maxContentWidth;
+ (double)spaceBetweenTagAndRole;
+ (CGSize)sizeForStr:(id)arg1 font:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)handleChannelLabelTap;
- (id)chatBaseCellModel;
- (void)onHeadImgTap;
- (id)tickleLastTimeKey;
- (id)lastStrongTickleMeDateKey:(id)arg1;
- (void)someoneTickleAtMeBy:(id)arg1;
- (void)onHeadImgDoubleClick;
- (void)addMaskWhenTickleAnimation;
- (void)showStrongTickleAnimation;
- (void)showNormalTickleAnimation;
- (void)onRoleInfoTap;
- (double)getCornerRadius;
- (void)onUserDataDictUpdate:(id)arg1;
- (id)getBubbleViewColor:(id)arg1;
- (void)endHighLightAnimation;
- (void)configureSubClassContentView:(id)arg1;
- (void)configureWithCellModel:(id)arg1;
- (void)configurePublishChoosenView:(id)arg1 leftStartX:(double)arg2;
- (BOOL)shouldBubbleViewClipsToBounds;
- (void)configureVoteView:(id)arg1;
- (void)onRightLightImageClick;
- (void)configureRightView:(id)arg1 show:(BOOL)arg2;
- (void)showFailView:(BOOL)arg1;
- (void)onSendFailImgTap;
- (void)showLoadingView:(BOOL)arg1;
- (void)innerShowLoadingView:(BOOL)arg1;
- (void)choosenBarDidClickJumpUrl;
- (void)choosenBarDidClickPublish;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)nameLineView;
- (void)setNameLineView:(id)arg1;
- (id)headLineView;
- (void)setHeadLineView:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)midContentContainerView;
- (void)setMidContentContainerView:(id)arg1;
- (id)subClassContentView;
- (void)setSubClassContentView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)roleInfoView;
- (void)setRoleInfoView:(id)arg1;
- (id)roleIcon;
- (void)setRoleIcon:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)sendFailView;
- (void)setSendFailView:(id)arg1;
- (id)statusBgView;
- (void)setStatusBgView:(id)arg1;
- (id)statusIcon;
- (void)setStatusIcon:(id)arg1;
- (id)debugLabel;
- (void)setDebugLabel:(id)arg1;
- (id)voteView;
- (void)setVoteView:(id)arg1;
- (id)channelBtn;
- (void)setChannelBtn:(id)arg1;
- (id)publishBottomView;
- (void)setPublishBottomView:(id)arg1;
- (id)singleTapOnHead;
- (void)setSingleTapOnHead:(id)arg1;
- (id)doubleTapOnHead;
- (void)setDoubleTapOnHead:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)headTickleMaskView;
- (void)setHeadTickleMaskView:(id)arg1;
- (void).cxx_destruct;
@end

