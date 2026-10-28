@interface MMFinderLiveAudioOnlyIndicatorWidgetObj : MMFinderLiveStateTextWidgetObj
{
    WCPIPAudioOnlyIndicatorDescription * _indicatorDescription; // +0x8
}
- (id)initWithIndicatorDescription:(id)arg1 businessId:(id)arg2;
- (id)getSnapshotUserBackImage;
- (double)titleTextTop;
- (CGSize)getMainVideoViewSize;
- (id)getCompositedLeftIconImage:(id)arg1 rightIconImage:(id)arg2 withMaskImage:(id)arg3;
- (double)leftRightIconImageCenterPercent;
- (id)indicatorDescription;
- (void)setIndicatorDescription:(id)arg1;
- (void).cxx_destruct;
@end
