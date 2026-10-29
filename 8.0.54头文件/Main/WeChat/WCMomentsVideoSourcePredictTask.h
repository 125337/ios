@interface WCMomentsVideoSourcePredictTask : WCMomentsPredictTask <_TtP6WeChat30IKaraMomentsVideoPredictionExt_>
{
    WCDataItem * _dataItem; // +0x8
    WCMediaItem * _mediaItem; // +0x10
    NSNumber * _customPredictionConfidence; // +0x18
    NSDate * _datetime; // +0x20
    NSNumber * _positive; // +0x28
}
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (id)taskID;
- (void)main;
- (void)momentsProphetDidPredictWithDataItem:(id)arg1 mediaItem:(id)arg2 positive:(id)arg3;
- (id)dataItem;
- (id)mediaItem;
- (id)customPredictionConfidence;
- (void)setCustomPredictionConfidence:(id)arg1;
- (id)datetime;
- (void)setDatetime:(id)arg1;
- (id)positive;
- (void)setPositive:(id)arg1;
- (void).cxx_destruct;
@end

