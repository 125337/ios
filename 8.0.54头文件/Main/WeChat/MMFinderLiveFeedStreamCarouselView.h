@interface MMFinderLiveFeedStreamCarouselView : MMFinderLiveFeedStreamWidgetBaseView <MMFinderLiveFeedStreamCarouselCellDelegate>
{
    BOOL _isCarouseling; // +0x8
    BOOL _waitDataToCarousel; // +0x9
    BOOL _isIsAnimation; // +0xa
    BOOL _isDelaying; // +0xb
    id <MMFinderLiveFeedStreamCarouselViewDelegate> _delegate; // +0x10
    FeedsPreviewLiveMultiStyleInfo_StyleSevenTeen * _config; // +0x18
    NSMutableArray * _models; // +0x20
    NSMutableArray * _cells; // +0x28
    unsigned long long _index; // +0x30
    double _lastCalculateHeight; // +0x38
    MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> * _waitAnimationFinishToRemovedItem; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)reload:(id)arg1 config:(id)arg2;
- (void)addOrUpdate:(id)arg1;
- (void)update:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (void)checkDelayRemoveOnAnimationFinish;
- (void)correctedIndex:(id)arg1;
- (void)resetIndex;
- (BOOL)changeToIndex:(unsigned long long)arg1 animation:(BOOL)arg2;
- (void)updateSize;
- (void)updateCellSize:(id)arg1;
- (void)carouselChangeToNext;
- (id)createCellWithModel:(id)arg1;
- (void)startCarousel;
- (void)stopCarousel;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setTaskId:(id)arg1;
- (void)delayCarousel;
- (id)currentModel;
- (id)currentCell;
- (void)onCarouselViewProductStyleClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)models;
- (void)setModels:(id)arg1;
- (id)cells;
- (void)setCells:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (BOOL)isCarouseling;
- (void)setIsCarouseling:(BOOL)arg1;
- (BOOL)waitDataToCarousel;
- (void)setWaitDataToCarousel:(BOOL)arg1;
- (double)lastCalculateHeight;
- (void)setLastCalculateHeight:(double)arg1;
- (BOOL)isIsAnimation;
- (void)setIsIsAnimation:(BOOL)arg1;
- (id)waitAnimationFinishToRemovedItem;
- (void)setWaitAnimationFinishToRemovedItem:(id)arg1;
- (BOOL)isDelaying;
- (void)setIsDelaying:(BOOL)arg1;
- (void).cxx_destruct;
@end

