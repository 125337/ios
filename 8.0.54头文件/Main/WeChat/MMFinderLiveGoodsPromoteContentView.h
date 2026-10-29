@interface MMFinderLiveGoodsPromoteContentView : MMFinderLiveBaseGoodsPromoteContentView
{
    MMFinderLiveTaskId * _taskID; // +0x8
    MMFinderLiveECHotSaleLikeAnimationMaskView * _hotSaleLikeAnimationMaskView; // +0x10
    MMUILabel * _serialNumLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)serialNumLabel;
- (void)layoutSubviews;
- (void)refreshData;
- (BOOL)isDuringHintAnimation;
- (void)receiveHintAnimationInfo:(id)arg1;
- (id)currentHintAnimationInfo;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)hotSaleLikeAnimationMaskView;
- (void)setHotSaleLikeAnimationMaskView:(id)arg1;
- (void)setSerialNumLabel:(id)arg1;
- (void).cxx_destruct;
@end

