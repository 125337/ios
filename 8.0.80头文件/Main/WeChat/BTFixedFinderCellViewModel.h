@interface BTFixedFinderCellViewModel : BTBaseRecommendAppMsgCellViewModel
{
    NSString * _curRecommendReason; // +0x28
}
+ (BOOL)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (id)itemViewClassName;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
- (void)setCurRecommendReason:(id)arg1;
- (void)resetCacheData;
- (id)finderItemViewModelArr;
- (BOOL)hasOnlyOneVisibleItem;
- (long long)finderItemViewModelArrVisibleCount;
- (void)doCellViewDeleteAnimationWithItemIndex:(long long)arg1;
- (double)viewHeight;
- (id)finderDataWrapper;
- (id)buildFinderModelWithFinderData:(id)arg1;
- (id)curRecommendReason;
- (void).cxx_destruct;
@end
