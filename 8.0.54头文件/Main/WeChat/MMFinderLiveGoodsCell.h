@interface MMFinderLiveGoodsCell : MMFinderLiveGoodsBaseCell <MMFinderLiveGoodsViewModelDelegate, MMFinderLiveProductVisibleItem>
{
    id <MMFinderLiveGoodsCellBaseDelegate> _cellDelegate; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    MMFinderLiveGoodsViewModel * _goodsViewModel; // +0x50
    UIView * _topSeparatorLine; // +0x58
    UIView * _bottomSeparatorLine; // +0x60
    MMFinderLiveECHotSaleLikeAnimationMaskView * _hotSaleLikeAnimationMaskView; // +0x68
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
- (void)receiveHotSaleLikeAnimationMaskView:(id)arg1;
- (void)shine;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
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

