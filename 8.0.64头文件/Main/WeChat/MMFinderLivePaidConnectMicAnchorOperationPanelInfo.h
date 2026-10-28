@interface MMFinderLivePaidConnectMicAnchorOperationPanelInfo : NSObject
{
    unsigned long long _serviceCount; // +0x8
    FinderJumpInfo * _historyJumpInfo; // +0x10
    FinderJumpInfo * _ratingJumpInfo; // +0x18
    double _serviceRating; // +0x20
    NSArray * _connectedUserList; // +0x28
    NSArray * _applyingUserList; // +0x30
}
+ (id)fromPurchaseMicInfoResp:(id)arg1 allMicUsersList:(id)arg2;
- (unsigned long long)serviceCount;
- (void)setServiceCount:(unsigned long long)arg1;
- (id)historyJumpInfo;
- (void)setHistoryJumpInfo:(id)arg1;
- (id)ratingJumpInfo;
- (void)setRatingJumpInfo:(id)arg1;
- (double)serviceRating;
- (void)setServiceRating:(double)arg1;
- (id)connectedUserList;
- (void)setConnectedUserList:(id)arg1;
- (id)applyingUserList;
- (void)setApplyingUserList:(id)arg1;
- (void).cxx_destruct;
@end
