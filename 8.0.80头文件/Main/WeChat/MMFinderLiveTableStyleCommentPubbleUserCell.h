@interface MMFinderLiveTableStyleCommentPubbleUserCell : MMFinderLiveTableStyleCommentPubbleCell
{
    BOOL _disablePAGAnimation; // +0x8
    UIImageView * _barrageBackgroundImgView; // +0x10
    UIView * _barrageBackgroundMaskView; // +0x18
    NSArray * _textGradientCGColorArray; // +0x20
    unsigned long long _badgeSignCnt; // +0x28
    MMLiveHeadImageView * _headImageView; // +0x30
    MMHeadImageView * _chatRoomHeadImageView; // +0x38
    CAGradientLayer * _barrageBorderGradientLayer; // +0x40
    UIImageView * _barrageSignIconView; // +0x48
    MMFinderLiveProductQuestionSignView * _barrageProductQueSignView; // +0x50
    MMUILabel * _signLabel; // +0x58
    MMUIView * _signBackView; // +0x60
    MMFinderLiveProductQuestionSignView * _productQuestionSignView; // +0x68
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x70
    MMFinderLiveMemberSignView * _memberSignView; // +0x78
    MMFinderLiveNormalTextSignView * _shopMemberSignView; // +0x80
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x88
    MMFinderLiveGameRankSignView * _gameRankSignView; // +0x90
    MMFinderLiveGameEsportSignView * _gameEsportSignView; // +0x98
    MMFinderLiveGameBadgeSignView * _gameGuessSignView; // +0xa0
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0xa8
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0xb0
    MMFinderLiveNormalTextSignView * _buySignView; // +0xb8
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0xc0
    MMFinderLiveNormalTextSignView * _followerSignView; // +0xc8
    NSMutableArray * _signViewArraryForLayout; // +0xd0
    UIImageView * _arrowImageView; // +0xd8
    UIImageView * _barrageLeadingImageView; // +0xe0
    UIImageView * _barrageTrailingImageView; // +0xe8
    PAGView * _barrageLeadingPAGView; // +0xf0
    PAGView * _barrageTrailingPAGView; // +0xf8
    CGPoint _textGradientStartPoint; // +0x100
    CGPoint _textGradientEndPoint; // +0x110
    CGSize _lastTextGradientSize; // +0x120
}
- (id)initWithCellFrame:(id)arg1;
- (BOOL)isUITypeValid;
- (double)maxCornerRadius;
- (void)layoutUI;
- (void)updateBackGroundColor;
- (id)signText;
- (void)layoutBarrageBorderGradientLayer;
- (void)layoutPaidBarrageViews;
- (CGRect)borderGradientLayerFrame;
- (double)getBorderGradientLineWidth;
- (BOOL)isPaidBarrage;
- (void)setDisablePAGAnimation:(BOOL)arg1;
- (unsigned int)getCurrentPaidBarrageLevel;
- (BOOL)needDisplayBorderForPaidBarrage;
- (void)updateBorderGradientLayerMask;
- (void)layoutBarrageBackgroundImgView;
- (void)layoutBarrageBackgroundMaskView;
- (void)layoutHeadImageView;
- (void)layoutChatRoomHeadImageView;
- (void)layoutBarrageSignIconView;
- (void)layoutBarrageProductQueSignView;
- (void)layoutSignLabel;
- (void)layoutGlobalRankSignView;
- (void)layoutMemberSignView;
- (void)layoutMysteriousSignView;
- (void)layoutProductQuestionSignView;
- (void)layoutLiveRoleSignView;
- (void)layoutShopMemberSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGameEsportSignView;
- (void)layoutGameGuessSignView;
- (void)layoutGameRankSignView;
- (void)layoutBuySignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutFollowerSignView;
- (void)updateHeaderImageOrigin;
- (void)updateChatRoomHeadImageOrigin;
- (void)updateBarrageBorderLayerColor;
- (void)updateBarrageBackgroundImage;
- (void)updateBarrageSignIconImage;
- (void)updateBarrageSignIconFrame;
- (void)layoutNameLabel;
- (void)layoutCommentLabel;
- (void)updateTextGradientIfNeeded;
- (void)updateTextLabelOnGradientConfigFinished;
- (void)updateNameLabelOrigin;
- (void)updateCommentLabelOrigin;
- (void)updateSignViewOrigins;
- (void)updateSignLabelOrigins;
- (void)prepareForReuse;
- (BOOL)reuseWithCellFrame:(id)arg1;
- (BOOL)needSignLabel;
- (id)signViewArraryForLayout;
- (id)getSelfAccessibility;
- (BOOL)isPubbleCellTapActionNeedJumpPOI:(id)arg1;
- (BOOL)isPubbleCellTapActionNeedJumpPOIAtPoint:(CGPoint)arg1;
- (id)getPOILinkRectList;
- (BOOL)isPubbleCellTapActionNeedJumpGoodsPanel:(id)arg1;
- (BOOL)isPubbleCellTapActionNeedJumpGoodsPanelAtPoint:(CGPoint)arg1;
- (id)getQuestionProductLinkRectList;
- (BOOL)isPubbleCellTapActionNeedShowKtvSongPanel:(id)arg1;
- (id)barrageBackgroundImgView;
- (void)setBarrageBackgroundImgView:(id)arg1;
- (id)barrageBackgroundMaskView;
- (void)setBarrageBackgroundMaskView:(id)arg1;
- (id)textGradientCGColorArray;
- (void)setTextGradientCGColorArray:(id)arg1;
- (CGPoint)textGradientStartPoint;
- (void)setTextGradientStartPoint:(CGPoint)arg1;
- (CGPoint)textGradientEndPoint;
- (void)setTextGradientEndPoint:(CGPoint)arg1;
- (BOOL)disablePAGAnimation;
- (unsigned long long)badgeSignCnt;
- (void)setBadgeSignCnt:(unsigned long long)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)chatRoomHeadImageView;
- (void)setChatRoomHeadImageView:(id)arg1;
- (id)barrageBorderGradientLayer;
- (void)setBarrageBorderGradientLayer:(id)arg1;
- (id)barrageSignIconView;
- (void)setBarrageSignIconView:(id)arg1;
- (id)barrageProductQueSignView;
- (void)setBarrageProductQueSignView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (id)signBackView;
- (void)setSignBackView:(id)arg1;
- (id)productQuestionSignView;
- (void)setProductQuestionSignView:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)memberSignView;
- (void)setMemberSignView:(id)arg1;
- (id)shopMemberSignView;
- (void)setShopMemberSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)gameRankSignView;
- (void)setGameRankSignView:(id)arg1;
- (id)gameEsportSignView;
- (void)setGameEsportSignView:(id)arg1;
- (id)gameGuessSignView;
- (void)setGameGuessSignView:(id)arg1;
- (id)roleSignView;
- (void)setRoleSignView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)buySignView;
- (void)setBuySignView:(id)arg1;
- (id)frequentWatchSignView;
- (void)setFrequentWatchSignView:(id)arg1;
- (id)followerSignView;
- (void)setFollowerSignView:(id)arg1;
- (void)setSignViewArraryForLayout:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (CGSize)lastTextGradientSize;
- (void)setLastTextGradientSize:(CGSize)arg1;
- (id)barrageLeadingImageView;
- (void)setBarrageLeadingImageView:(id)arg1;
- (id)barrageTrailingImageView;
- (void)setBarrageTrailingImageView:(id)arg1;
- (id)barrageLeadingPAGView;
- (void)setBarrageLeadingPAGView:(id)arg1;
- (id)barrageTrailingPAGView;
- (void)setBarrageTrailingPAGView:(id)arg1;
- (void).cxx_destruct;
@end
