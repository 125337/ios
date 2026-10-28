@interface WCAdRandomPickCardItemView : MMUIView <CAAnimationDelegate>
{
    WCAdRandomPickCardItemInfo * _itemInfo; // +0x8
    WCAdRandomPickCardItemsInfo * _itemsInfo; // +0x10
    long long _viewType; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _ellipseImage; // +0x28
    WCAdURLImageView * _backgroundImageView; // +0x30
    WCAdURLImageView * _itemImageView; // +0x38
    UIImageView * _haloImage; // +0x40
    UIView * _flipContainerView; // +0x48
    UIView * _rotateContainerView; // +0x50
    UIView * _cardContainerView; // +0x58
    id <WCAdRandomPickCardItemViewDelegate> _delegate; // +0x60
    MMUIButton * _coverButton; // +0x68
    long long _viewStatus; // +0x70
    long long _simpleFlipStatus; // +0x78
    long long _extAnimationStatus; // +0x80
}
- (id)initWithFrame:(CGRect)arg1 itemInfo:(id)arg2 itemsInfo:(id)arg3 viewType:(long long)arg4 delegate:(id)arg5;
- (void)generateSubviews;
- (void)layoutSubviews;
- (BOOL)needToLayoutSubviews;
- (void)resetCardItemView;
- (id)titleLabel;
- (id)ellipseImage;
- (id)flipContainerView;
- (id)rotateContainerView;
- (id)cardContainerView;
- (id)backgroundImageView;
- (id)itemImageView;
- (id)haloImage;
- (id)coverButton;
- (void)onCoverButtonClicked:(id)arg1;
- (BOOL)isCardItemsViewTypeNarrow;
- (void)setItemImageViewForTransitionBeginning:(BOOL)arg1;
- (void)updateViewStatus:(long long)arg1 animated:(BOOL)arg2;
- (void)prepareSubviewsForIntroduce:(BOOL)arg1;
- (void)showIntroduceOne:(BOOL)arg1;
- (void)showIntroduceTwo:(BOOL)arg1;
- (void)prepareSubviewsForSimpleWave:(BOOL)arg1;
- (void)showSimpleWave:(BOOL)arg1;
- (void)prepareSubviewsForSimpleFlip:(BOOL)arg1;
- (void)showSimpleFlip:(BOOL)arg1;
- (void)prepareSubviewsForQuickSwitch:(BOOL)arg1;
- (void)showQuickSwitch:(BOOL)arg1;
- (void)setToStayPut:(BOOL)arg1;
- (void)dimCardGently;
- (void)brightCardIntensively;
- (void)updateCardLayerMaskSafely:(id)arg1;
- (void)updateExtAnimationsStatus:(long long)arg1 animated:(BOOL)arg2;
- (void)prepareSubviewsForFillUp:(BOOL)arg1;
- (void)showNormalFillUp:(BOOL)arg1;
- (void)showQuickFillUp:(BOOL)arg1;
- (void)showFillUp:(BOOL)arg1 duration:(double)arg2;
- (void)scheduleNormalFillUp;
- (void)onCardViewReadyToFillUp;
- (void)onCardViewFillUpAnimationDone;
- (id)generateKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2 timingFunctions:(id)arg3 values:(id)arg4 keyTimes:(id)arg5;
- (void)addAnimation:(id)arg1 toView:(id)arg2 withInfo:(id)arg3;
- (void)removeAllLayersAnimations;
- (double)fetchContentMaxWidth;
- (CGSize)calcBaseContainerSize;
- (CGSize)calcContentImageSize;
- (void)updateTitleColorWithStatus:(long long)arg1;
- (void)onCardViewQuickSwitchAnimtaionDone;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)itemInfo;
- (void)setItemInfo:(id)arg1;
- (id)itemsInfo;
- (void)setItemsInfo:(id)arg1;
- (long long)viewType;
- (void)setViewType:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setEllipseImage:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setItemImageView:(id)arg1;
- (void)setHaloImage:(id)arg1;
- (void)setFlipContainerView:(id)arg1;
- (void)setRotateContainerView:(id)arg1;
- (void)setCardContainerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCoverButton:(id)arg1;
- (long long)viewStatus;
- (void)setViewStatus:(long long)arg1;
- (long long)simpleFlipStatus;
- (void)setSimpleFlipStatus:(long long)arg1;
- (long long)extAnimationStatus;
- (void)setExtAnimationStatus:(long long)arg1;
- (void).cxx_destruct;
@end
