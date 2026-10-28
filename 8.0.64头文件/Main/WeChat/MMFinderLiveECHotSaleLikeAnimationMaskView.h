@interface MMFinderLiveECHotSaleLikeAnimationMaskView : UIView <WCFinderLiveLogReportValueProvider, MMFinderLiveECHotSaleLikeAnimationViewDelegate>
{
    BOOL _isDuringHintAnimation; // +0x8
    BOOL _hasAnimationViewEnter; // +0x9
    MMFinderLiveTaskId * _taskID; // +0x10
    unsigned long long _productID; // +0x18
    FinderLiveProductHintAnimationInfo * _currentInfo; // +0x20
    NSArray * _history; // +0x28
    MMFinderLiveECHotSaleLikeAnimationView * _currentAnimationView; // +0x30
    CGPoint _margin; // +0x38
}
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)receiveHintAnimationInfo:(id)arg1;
- (void)onShouldFinishAnimationView:(id)arg1;
- (id)numberAnimationLogic;
- (CGPoint)margin;
- (void)setMargin:(CGPoint)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (BOOL)isDuringHintAnimation;
- (void)setIsDuringHintAnimation:(BOOL)arg1;
- (id)currentInfo;
- (void)setCurrentInfo:(id)arg1;
- (id)history;
- (void)setHistory:(id)arg1;
- (BOOL)hasAnimationViewEnter;
- (void)setHasAnimationViewEnter:(BOOL)arg1;
- (id)currentAnimationView;
- (void)setCurrentAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
