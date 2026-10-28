@interface MMFinderLiveFeedStreamCarouselView : MMFinderLiveFeedStreamWidgetBaseView <MMFinderLiveFeedStreamCarouselCellDelegate>
{
    BOOL _isCarouseling; // +0x8
    BOOL _waitDataToCarousel; // +0x9
    BOOL _isIsAnimation; // +0xa
    BOOL _isDelaying; // +0xb
    id <MMFinderLiveFeedStreamCarouselViewDelegate> _delegate; // +0x10
    MMFinderLiveFeedStreamCarouselConfig * _config; // +0x18
    NSMutableArray * _models; // +0x20
    NSMutableArray * _reuseCellsPool; // +0x28
    MMFinderLiveFeedStreamCarouselCell * _currentCell; // +0x30
    unsigned long long _index; // +0x38
    double _lastCalculateHeight; // +0x40
    double _lastLayoutWidth; // +0x48
    MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> * _waitAnimationFinishToRemovedItem; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)reload:(id)arg1 config:(id)arg2;
- (void)addOrUpdate:(id)arg1;
- (void)replaceModel:(id)arg1 withNewModel:(id)arg2;
- (void)update:(id)arg1;
- (BOOL)isDuplicateAllow:(id)arg1;
- (void)add:(id)arg1;
- (void)_singleItemInsert:(id)arg1;
- (void)removeModel:(id)arg1;
- (void)removeCellType:(unsigned long long)arg1;
- (void)checkDelayRemoveOnAnimationFinish;
- (void)correctedIndex:(id)arg1;
- (void)resetIndex;
- (BOOL)changeToIndex:(unsigned long long)arg1 animation:(BOOL)arg2;
- (void)refreshCurrentCell;
- (void)updateSize;
- (void)updateCellSize:(id)arg1;
- (void)carouselChangeToNext;
- (id)cellWithModel:(id)arg1;
- (void)reuseToPool:(id)arg1;
- (void)startCarousel;
- (void)stopCarousel;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setTaskId:(id)arg1;
- (void)delayCarousel;
- (id)hasNotShownItems;
- (id)currentModel;
- (void)onCarouselViewProductStyleClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
- (void)onCarouselViewTextLineStyleClicked;
- (void)onCarouselViewCommentStyleClicked;
- (void)onCarouselViewBuyTogetherClicked:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)models;
- (void)setModels:(id)arg1;
- (id)reuseCellsPool;
- (void)setReuseCellsPool:(id)arg1;
- (id)currentCell;
- (void)setCurrentCell:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (BOOL)isCarouseling;
- (void)setIsCarouseling:(BOOL)arg1;
- (BOOL)waitDataToCarousel;
- (void)setWaitDataToCarousel:(BOOL)arg1;
- (double)lastCalculateHeight;
- (void)setLastCalculateHeight:(double)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (BOOL)isIsAnimation;
- (void)setIsIsAnimation:(BOOL)arg1;
- (id)waitAnimationFinishToRemovedItem;
- (void)setWaitAnimationFinishToRemovedItem:(id)arg1;
- (BOOL)isDelaying;
- (void)setIsDelaying:(BOOL)arg1;
- (void).cxx_destruct;
@end
