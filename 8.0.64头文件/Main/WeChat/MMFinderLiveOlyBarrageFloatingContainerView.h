@interface MMFinderLiveOlyBarrageFloatingContainerView : UIView
{
    MMLiveTaskId * _taskId; // +0x8
    NSMutableArray * _floatingBarragePubbleRouteList; // +0x10
    CGSize _currSelfSize; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)addBarragePubbleCell:(id)arg1 presentFrame:(CGRect)arg2 barrageTravel:(id)arg3;
- (void)notifyOtherPubbleRoutesEndFloatingExcept:(id)arg1;
- (id)requestBarrageHitTestViewWithConvertedPoint:(CGPoint)arg1;
- (void)clearBarragePubbles;
- (id)floatingBarragePubbleRouteList;
- (BOOL)isContainPubbleCell:(id)arg1 barrageTravel:(id)arg2;
- (id)getFinderLiveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setFloatingBarragePubbleRouteList:(id)arg1;
- (CGSize)currSelfSize;
- (void)setCurrSelfSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
