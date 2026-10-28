@interface WCAdDynamicLayoutLogic : WCAdvertiseOperationLogicBase <WCAdDynamicFeedEmptyLayoutViewDelegate, ILinkEventExt>
{
    BOOL _didOnExposedAnimationsShow; // +0x8
    BOOL _didEnterBackground; // +0x9
    id <WCAdDynamicLayoutLogicDelegate> _delegate; // +0x10
    WCDataItem * _dataItem; // +0x18
    UIView * _dynamicLayoutView; // +0x20
    WCAdDynamicFeedElementInfo * _latestClickedElementInfo; // +0x28
    NSMutableDictionary * _animationInfos; // +0x30
    NSMutableDictionary * _animationViews; // +0x38
    NSMutableArray * _viewsWithClickIndex; // +0x40
}
+ (id)getDynamicLayoutLogicWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
+ (id)getDynamicLayoutLogicWithDataItem:(id)arg1 scene:(unsigned long long)arg2 reloadData:(BOOL)arg3;
+ (void)tryToReloadDynamicInfoWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)dealloc;
- (id)dynamicLayoutView;
- (void)addClickEventRecursivelyForView:(id)arg1;
- (void)onButtonElementClicked:(id)arg1;
- (id)fetchDynamicLayoutView;
- (double)fetchDynamicLayoutViewHeightForWidth:(double)arg1;
- (void)onElementClickedWithInfo:(id)arg1 viewTag:(long long)arg2;
- (void)onElementClickedWithInfo:(id)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(id)arg4;
- (unsigned int)fetchLatestTransitioningType;
- (void)onDynamicFeedLayoutClicked:(id)arg1 viewTag:(long long)arg2;
- (void)onDynamicFeedLayoutClicked:(id)arg1 viewTag:(long long)arg2 index:(unsigned long long)arg3 originView:(id)arg4;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)postExtraClickWithType:(long long)arg1 url:(id)arg2 rect:(CGRect)arg3;
- (void)postExtraClickWithType:(long long)arg1 url:(id)arg2 rect:(CGRect)arg3 view:(id)arg4;
- (id)animationInfos;
- (id)animationViews;
- (void)appendAnimationableView:(id)arg1 attachAnimations:(id)arg2;
- (void)startAnimationsWithEventType:(id)arg1;
- (void)contentItemBecomeInvisible;
- (void)applyAnimation:(id)arg1 toView:(id)arg2;
- (void)applyCommonAnimation:(id)arg1 toView:(id)arg2;
- (void)delayApplyCommonAnimation:(id)arg1;
- (BOOL)containTransitionProperty:(id)arg1;
- (void)doAnimationWithTranslation:(id)arg1;
- (void)applyCommonAnimationProperties:(id)arg1 toView:(id)arg2 isFromValue:(BOOL)arg3;
- (CATransform3D)transformFromProperty:(id)arg1 toView:(id)arg2 isFromValue:(BOOL)arg3;
- (id)copyViewFrom:(id)arg1;
- (void)applySpecialAnimation:(id)arg1 toView:(id)arg2;
- (void)delaySpecialCommonAnimation:(id)arg1;
- (void)applySpecialAnimationProperties:(id)arg1 toView:(id)arg2 isFromValue:(BOOL)arg3;
- (void)resetAnimationsWithEventType:(id)arg1;
- (void)resetAnimation:(id)arg1 toView:(id)arg2;
- (id)fetchValidProperties:(id)arg1 isSpecial:(BOOL)arg2;
- (id)fetchValidProperties:(id)arg1 isSpecial:(BOOL)arg2 containTranslate:(BOOL)arg3;
- (unsigned long long)getAnimationOptionsForAnimation:(id)arg1;
- (id)modeForAnimationObject:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setDynamicLayoutView:(id)arg1;
- (id)latestClickedElementInfo;
- (void)setLatestClickedElementInfo:(id)arg1;
- (void)setAnimationInfos:(id)arg1;
- (void)setAnimationViews:(id)arg1;
- (BOOL)didOnExposedAnimationsShow;
- (void)setDidOnExposedAnimationsShow:(BOOL)arg1;
- (id)viewsWithClickIndex;
- (void)setViewsWithClickIndex:(id)arg1;
- (BOOL)didEnterBackground;
- (void)setDidEnterBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
