@interface MMFinderLivePaidConnectMicAnchorInfo : NSObject
{
    double _serviceRating; // +0x8
    FinderJumpInfo * _historyJumpInfo; // +0x10
    FinderJumpInfo * _ratingJumpInfo; // +0x18
}
- (double)serviceRating;
- (void)setServiceRating:(double)arg1;
- (id)historyJumpInfo;
- (void)setHistoryJumpInfo:(id)arg1;
- (id)ratingJumpInfo;
- (void)setRatingJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

