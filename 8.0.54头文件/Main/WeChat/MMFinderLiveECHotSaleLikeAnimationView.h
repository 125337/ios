@interface MMFinderLiveECHotSaleLikeAnimationView : UIView <MMFinderLiveNumberAnimationLogicObserver>
{
    BOOL _hasFinishedEnter; // +0x8
    MMFinderLiveNumberAnimationLogic * _numberAnimationLogic; // +0x10
    id <MMFinderLiveECHotSaleLikeAnimationViewDelegate> _delegate; // +0x18
    MMGradientView * _backgroundView; // +0x20
    PAGImageView * _pagView; // +0x28
    UILabel * _prefixLabel; // +0x30
    UILabel * _numberLabel; // +0x38
    FinderLiveProductHintAnimationInfo * _animationInfo; // +0x40
    unsigned long long _productID; // +0x48
    MMFinderLiveTaskId * _taskID; // +0x50
}
- (id)initWithAnimationInfo:(id)arg1 taskID:(id)arg2 productID:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)didFinishEnter;
- (void)changeNumberWithLogic:(id)arg1;
- (void)finishWithLogic:(id)arg1;
- (void)didMoveToWindow;
- (id)numberAnimationLogic;
- (void)setNumberAnimationLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)prefixLabel;
- (void)setPrefixLabel:(id)arg1;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg1;
- (id)animationInfo;
- (void)setAnimationInfo:(id)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (BOOL)hasFinishedEnter;
- (void)setHasFinishedEnter:(BOOL)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end

