@interface MMFinderLiveGoodsCell : MMFinderLiveGoodsBaseCell <MMFinderLiveGoodsViewModelDelegate, MMFinderLiveProductVisibleItem>
{
    MMFinderLiveTaskId * _taskId; // +0x40
    MMFinderLiveGoodsViewModel * _goodsViewModel; // +0x48
    UIView * _topSeparatorLine; // +0x50
    UIView * _bottomSeparatorLine; // +0x58
    MMFinderLiveECHotSaleLikeAnimationMaskView * _hotSaleLikeAnimationMaskView; // +0x60
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)addHotSaleLikeAnimationMaskView;
- (void)onGoodsViewModelUpdateByAppMessage:(id)arg1;
- (void)receiveHintAnimationInfo:(id)arg1;
- (BOOL)isDuringHintAnimation;
- (void)shine;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)goodsViewModel;
- (void)setGoodsViewModel:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (id)hotSaleLikeAnimationMaskView;
- (void)setHotSaleLikeAnimationMaskView:(id)arg1;
- (void).cxx_destruct;
@end
