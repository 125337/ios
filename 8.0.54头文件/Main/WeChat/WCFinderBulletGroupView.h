@interface WCFinderBulletGroupView : UIView
{
    WCFinderBulletItem * _lastTapItem; // +0x8
    id <WCFinderBulletGroupViewDelegate> _delegate; // +0x10
    WCFinderBulletConfig * _config; // +0x18
    NSMutableArray * _lines; // +0x20
    double _preWidth; // +0x28
    NSMutableSet * _bulletItemContainSet; // +0x30
    NSMutableArray * _waitingArray; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)layoutSubviews;
- (void)setConfig:(id)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)setPlayRate:(double)arg1;
- (void)configItem:(id)arg1;
- (void)configItemDurations:(id)arg1;
- (void)addItems:(id)arg1;
- (void)tryAddItemAgain:(id)arg1;
- (void)insertItemImmediately:(id)arg1;
- (void)insertItemToWaitingArray:(id)arg1;
- (void)insertWaitingItemsIfPossible;
- (void)deleteItem:(id)arg1;
- (void)clearAllItems;
- (void)stop;
- (void)clearAllShowingItems;
- (void)clearAllAnimations;
- (id)getCache;
- (void)useCache:(id)arg1;
- (void)updateInPoint:(double)arg1;
- (void)addAnimationForItem:(id)arg1 inPoint:(double)arg2;
- (void)onTap:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)getTapBulletTextViewWithPoint:(CGPoint)arg1;
- (void)onLongPress:(id)arg1;
- (void)unSelectLastTapItem;
- (BOOL)isBulletAnimating;
- (id)lastTapItem;
- (void)setLastTapItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (id)lines;
- (void)setLines:(id)arg1;
- (double)preWidth;
- (void)setPreWidth:(double)arg1;
- (id)bulletItemContainSet;
- (void)setBulletItemContainSet:(id)arg1;
- (id)waitingArray;
- (void)setWaitingArray:(id)arg1;
- (void).cxx_destruct;
@end

