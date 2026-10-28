@interface WCFinderBulletGroupViewModel : NSObject
{
    BOOL _lineUpdating; // +0x8
    BOOL _enableFetch; // +0x9
    WCFinderBulletConfig * _config; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    double _containerWidth; // +0x20
    NSMutableSet * _bulletIds; // +0x28
    NSArray * _lines; // +0x30
    NSMutableSet * _requestCommentIds; // +0x38
    NSMutableArray * _calculatePendingQueue; // +0x40
    UIColor * _strokeColor; // +0x48
}
- (id)init;
- (void)updateConfig:(id)arg1 contentVM:(id)arg2;
- (void)addItems:(id)arg1;
- (void)_resolvedItems:(id)arg1 bulletIds:(id)arg2 lines:(id)arg3;
- (void)addItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)removeAllItems;
- (long long)insertItemToLine:(id)arg1 force:(BOOL)arg2;
- (void)resolvedItemLayoutContext:(id)arg1;
- (void)configItem:(id)arg1 withLength:(double)arg2;
- (id)willAppearItemsForTime:(double)arg1;
- (long long)_insertItem:(id)arg1 atLines:(id)arg2 remainingTimes:(long long)arg3;
- (id)getCache;
- (void)applyCache:(id)arg1;
- (void)fetchDataWithTimestamp:(double)arg1 commentScene:(int)arg2 needCommentIds:(id)arg3;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)bulletIds;
- (void)setBulletIds:(id)arg1;
- (id)lines;
- (void)setLines:(id)arg1;
- (id)requestCommentIds;
- (void)setRequestCommentIds:(id)arg1;
- (BOOL)lineUpdating;
- (void)setLineUpdating:(BOOL)arg1;
- (id)calculatePendingQueue;
- (void)setCalculatePendingQueue:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (BOOL)enableFetch;
- (void)setEnableFetch:(BOOL)arg1;
- (void).cxx_destruct;
@end
