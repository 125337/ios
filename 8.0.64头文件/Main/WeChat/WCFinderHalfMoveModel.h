@interface WCFinderHalfMoveModel : NSObject
{
    BOOL _halfScreenIsShow; // +0x8
    NSMutableArray * _halfScreenMoveProgressArray; // +0x10
    double _haflScreenHeightPercent; // +0x18
    NSString * _bindFeedId; // +0x20
}
- (id)init;
- (id)halfScreenMoveProgressArray;
- (double)videoLastHalfScreenMoveProgress;
- (double)videoCurHalfScreenMoveProgress;
- (BOOL)halfScreenProgressArrayIsFull;
- (BOOL)isOnHalfState;
- (BOOL)halfScreenIsShow;
- (void)setHalfScreenIsShow:(BOOL)arg1;
- (void)setHalfScreenMoveProgressArray:(id)arg1;
- (double)haflScreenHeightPercent;
- (void)setHaflScreenHeightPercent:(double)arg1;
- (id)bindFeedId;
- (void)setBindFeedId:(id)arg1;
- (void).cxx_destruct;
@end
