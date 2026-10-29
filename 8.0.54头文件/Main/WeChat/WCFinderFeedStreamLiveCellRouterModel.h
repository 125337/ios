@interface WCFinderFeedStreamLiveCellRouterModel : NSObject
{
    MMLiveEnterRoomActionModel * _enterActionModel; // +0x8
    FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive * _feedStreamJoinLiveStyleInfo; // +0x10
    MMFinderLiveFeedTransferLogic * _transferCtx; // +0x18
    unsigned long long _fromSource; // +0x20
}
- (id)enterActionModel;
- (void)setEnterActionModel:(id)arg1;
- (id)feedStreamJoinLiveStyleInfo;
- (void)setFeedStreamJoinLiveStyleInfo:(id)arg1;
- (id)transferCtx;
- (void)setTransferCtx:(id)arg1;
- (unsigned long long)fromSource;
- (void)setFromSource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

