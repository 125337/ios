@interface MMFinderLiveTableStyleCommentPubbleUserCell : MMFinderLiveTableStyleCommentPubbleCell
{
    BOOL _disablePAGAnimation; // +0x8
    UIImageView * _barrageBackgroundImgView; // +0x10
    UIView * _barrageBackgroundMaskView; // +0x18
    NSArray * _textGradientCGColorArray; // +0x20
    unsigned long long _badgeSignCnt; // +0x28
    MMHeadImageView * _headImageView; // +0x30
    CAGradientLayer * _barrageBorderGradientLayer; // +0x38
    UIImageView * _barrageSignIconView; // +0x40
    MMFinderLiveProductQuestionSignView * _barrageProductQueSignView; // +0x48
    MMUILabel * _signLabel; // +0x50
    MMUIView * _signBackView; // +0x58
    MMFinderLiveProductQuestionSignView * _productQuestionSignView; // +0x60
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x68
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x70
    MMFinderLiveGameRankSignView * _gameRankSignView; // +0x78
    MMFinderLiveGameEsportSignView * _gameEsportSignView; // +0x80
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0x88
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x90
    MMFinderLiveNormalTextSignView * _buySignView; // +0x98
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0xa0
    MMFinderLiveNormalTextSignView * _followerSignView; // +0xa8
    NSMutableArray * _signViewArraryForLayout; // +0xb0
    UIImageView * _arrowImageView; // +0xb8
    UIImageView * _barrageLeadingImageView; // +0xc0
    UIImageView * _barrageTrailingImageView; // +0xc8
    PAGView * _barrageLeadingPAGView; // +0xd0
    PAGView * _barrageTrailingPAGView; // +0xd8
    CGPoint _textGradientStartPoint; // +0xe0
    CGPoint _textGradientEndPoint; // +0xf0
    CGSize _lastTextGradientSize; // +0x100
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
- (void)layoutBarrageSignIconView;
- (void)layoutBarrageProductQueSignView;
- (void)layoutSignLabel;
- (void)layoutGlobalRankSignView;
- (void)layoutMysteriousSignView;
- (void)layoutProductQuestionSignView;
- (void)layoutLiveRoleSignView;
- (void)layoutFansGroupSignView;
- (void)layoutGameEsportSignView;
- (void)layoutGameRankSignView;
- (void)layoutBuySignView;
- (void)layoutFrequentWatchSignView;
- (void)layoutFollowerSignView;
- (void)updateHeaderImageOrigin;
- (void)updateBarrageBorderLayerColor;
- (void)updateBarrageBackgroundImage;
- (void)updateBarrageSignIconImage;
- (void)updateBarrageSignIconFrame;
- (void)layoutCommentLabel;
- (void)updateTextGradientIfNeeded;
- (void)updateTextLabelOnGradientConfigFinished;
- (void)updateCommentLabelOrigin;
- (void)updateSignViewOrigins;
- (BOOL)reuseWithCellFrame:(id)arg1;
- (BOOL)needSignLabel;
- (id)signViewArraryForLayout;
- (id)getSelfAccessibility;
- (BOOL)isPubbleCellTapActionNeedJumpPOI:(id)arg1;
- (BOOL)isPubbleCellTapActionNeedJumpPOIAtPoint:(CGPoint)arg1;
- (id)getPOILinkRectList;
- (id)getPOIIconRectList;
- (BOOL)isPubbleCellTapActionNeedJumpGoodsPanel:(id)arg1;
- (BOOL)isPubbleCellTapActionNeedJumpGoodsPanelAtPoint:(CGPoint)arg1;
- (id)getQuestionProductLinkRectList;
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
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)gameRankSignView;
- (void)setGameRankSignView:(id)arg1;
- (id)gameEsportSignView;
- (void)setGameEsportSignView:(id)arg1;
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

