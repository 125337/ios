@interface MMFinderLiveFeedStreamBarrageItem : NSObject
{
    BOOL _stoppedByUser; // +0x8
    MMFinderLiveFeedStreamBarrageItemView * _itemView; // +0x10
    MMLiveCommentDataItem * _commentDataItem; // +0x18
    double _barrageContainerWidth; // +0x20
    double _barrageMoveDuration; // +0x28
}
+ (id)itemWithInfo:(id)arg1;
- (double)getBarrageMoveDurationWithConfig:(id)arg1;
- (double)getBarrageMoveSpeedWithWidth:(double)arg1 config:(id)arg2;
- (BOOL)supportLikeAction;
- (BOOL)supportCopyAction;
- (id)copyString;
- (id)itemView;
- (void)setItemView:(id)arg1;
- (id)commentDataItem;
- (void)setCommentDataItem:(id)arg1;
- (double)barrageContainerWidth;
- (void)setBarrageContainerWidth:(double)arg1;
- (double)barrageMoveDuration;
- (void)setBarrageMoveDuration:(double)arg1;
- (BOOL)stoppedByUser;
- (void)setStoppedByUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
