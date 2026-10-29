@interface WCAdRandomSelectCardPlaygroundView : UIView <WCAdvertiseAnimationDisplayLinkDelegate>
{
    WCAdRandomSelectCardItemsInfo * _cardsInfo; // +0x8
    id <WCAdRandomSelectCardPlaygroundViewDelegate> _delegate; // +0x10
    long long _playgroundStatus; // +0x18
    WCAdRandomSelectCardItemsView * _cardItemsView; // +0x20
    WCAdRandomSelectCardItemsView * _backCardItemsView; // +0x28
    NSMutableArray * _backCardViews; // +0x30
    UIView * _topRightStarView; // +0x38
    UIView * _leftBottomStarView; // +0x40
    WCAdURLImageView * _starDropBackView; // +0x48
    PAGView * _allDonePagView; // +0x50
    WCAdvertiseAnimationDisplayLink * _mediaHolderDisplayLink; // +0x58
}
- (id)initWithFrame:(CGRect)arg1 cardsInfo:(id)arg2;
- (void)generateSubviews;
- (id)cardItemsView;
- (id)backCardItemsView;
- (id)backCardViews;
- (id)topRightStarView;
- (id)leftBottomStarView;
- (id)starDropBackView;
- (id)allDonePagView;
- (id)genBackCardWithItemInfo:(id)arg1 index:(int)arg2;
- (id)genStarViewWithItemInfo:(id)arg1;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void)suspend;
- (id)mediaHolderDisplayLink;
- (void)onAnimationDisplayLinkAnimationDone:(id)arg1;
- (void)onIntroduceAnimationDone;
- (void)onSelectingAnimationDone;
- (void)onPedestalOpacityAnimationDone;
- (void)prepareForIntroduceAnimation;
- (void)startIntroduceAnimation;
- (void)addIntroduceAnimationsToView:(id)arg1 positionYKeyTimes:(CGPoint)arg2;
- (id)introduceAnimationPositionXWithView:(id)arg1;
- (id)introduceAnimationPositionYWithView:(id)arg1 positionYKeyTimes:(CGPoint)arg2;
- (id)introduceAnimationScaleWithView:(id)arg1;
- (id)introduceAnimationOpacityWithView:(id)arg1;
- (void)addIntroduceBackCardAnimationsToView:(id)arg1 positionX:(CGPoint)arg2 backY:(CGPoint)arg3 scale:(double)arg4 index:(int)arg5;
- (void)addIntroduceBackCardBrightnessAnimationsToView:(id)arg1;
- (id)introduceBackCardPositionXWithView:(id)arg1 positionX:(CGPoint)arg2 index:(int)arg3;
- (id)introduceBackCardPositionYWithView:(id)arg1 backY:(CGPoint)arg2;
- (id)introduceBackCardTransformWithView:(id)arg1 scale:(double)arg2;
- (id)introduceBackCardOpacityWithView:(id)arg1;
- (id)introduceBackCardBrightnessWithView:(id)arg1;
- (id)introducePedestalOpacityWithView:(id)arg1;
- (id)introduceStarDropBackPositionYWithView:(id)arg1;
- (id)introduceStarDropBackOpacityWithView:(id)arg1;
- (id)introduceTopRightStarPositionWithView:(id)arg1;
- (id)introduceLeftBottomStarPositionWithView:(id)arg1;
- (id)introduceStarViewOpacityWithView:(id)arg1;
- (id)introduceStarViewTransformWithView:(id)arg1;
- (id)introduceStarViewScaleWithView:(id)arg1;
- (id)animationLabelToHideWithView:(id)arg1;
- (id)animationLabelToShowWithView:(id)arg1;
- (void)addIntroduceAnimationsToOtherContents;
- (void)prepareForSelecting;
- (void)startSelectingAnimation;
- (id)selectingCardItemsAnimationOpacityWithView:(id)arg1;
- (id)selectingCommonAnimationOpacityWithView:(id)arg1 from:(double)arg2 to:(double)arg3 animationKey:(id)arg4;
- (id)selectingAnimationLabelToShowWithView:(id)arg1;
- (void)prepareForAllSelected;
- (void)startAllSelectedAnimation;
- (void)playAllDonePag;
- (id)selectCardInfo;
- (void)pauseAnimations;
- (void)stopAnimations;
- (void)resetAllViewsState;
- (id)pedestalView;
- (id)randomSelectCardLogic;
- (id)labelToHideForIntroduce;
- (id)labelToShowForIntroduce;
- (id)labelToHideForSelecting;
- (id)labelToShowForSelecting;
- (double)randomSelectCardViewHeight;
- (id)fetchSelectedCardIdForLocation:(CGPoint)arg1;
- (id)cardsInfo;
- (void)setCardsInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)playgroundStatus;
- (void)setPlaygroundStatus:(long long)arg1;
- (void)setCardItemsView:(id)arg1;
- (void)setBackCardItemsView:(id)arg1;
- (void)setBackCardViews:(id)arg1;
- (void)setTopRightStarView:(id)arg1;
- (void)setLeftBottomStarView:(id)arg1;
- (void)setStarDropBackView:(id)arg1;
- (void)setAllDonePagView:(id)arg1;
- (void)setMediaHolderDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
