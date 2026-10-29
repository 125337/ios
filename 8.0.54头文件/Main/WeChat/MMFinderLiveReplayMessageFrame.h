@interface MMFinderLiveReplayMessageFrame : NSObject
{
    BOOL _isMicInfoKeyframe; // +0x8
    BOOL _isLiveRoomImagesKeyframe; // +0x9
    NSMutableArray * _commentItems; // +0x10
    FinderLiveMicInfo * _liveMicInfo; // +0x18
    LiveRoomImg * _liveRoomImages; // +0x20
    NSMutableArray * _rewardMessages; // +0x28
}
- (id)initWithFrameItem:(id)arg1 liveTaskId:(id)arg2 referenceLiveMicInfo:(id)arg3 referenceLiveRoomImages:(id)arg4;
- (void)appendCommentItemsWithMessageFrame:(id)arg1;
- (void)mergeWithFrame:(id)arg1;
- (id)fillerFrameFromCurrentKeyframe;
- (id)cloneWithCommentItemsPrepended:(id)arg1;
- (void)initializeCommentItemsWithFrameItem:(id)arg1 liveTaskId:(id)arg2;
- (void)filterCommentDataItems:(id)arg1;
- (void)initializeRewardMessagesWithMessageResponse:(id)arg1;
- (id)computeLiveMicInfoWithReferenceLiveMicInfo:(id)arg1 getLiveMsgResp:(id)arg2;
- (id)cloneOfLiveMicInfo:(id)arg1;
- (id)cloneOfFinderLiveMicPkInfo:(id)arg1;
- (BOOL)handleAudienceConnectingMessage:(id)arg1 forLiveMicInfo:(id)arg2;
- (BOOL)handleAudienceDisconnectingMessage:(id)arg1 forLiveMicInfo:(id)arg2;
- (BOOL)handleAnchorConnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2 sessionId:(id)arg3;
- (BOOL)handleNewAnchorMicConnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2;
- (BOOL)handleNewAnchorMicDisconnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2;
- (BOOL)handleOpposingAnchorLiveRoomImagesChange:(id)arg1 forLiveMicInfo:(id)arg2;
- (BOOL)handleOpposingAudienceConnectingInfo:(id)arg1 forLiveMicInfo:(id)arg2;
- (BOOL)handleOpposingAudienceConnectingList:(id)arg1 forLiveMicPkInfo:(id)arg2;
- (BOOL)handleOpposingAudienceDisconnectingWithSessionId:(id)arg1 forLiveMicInfo:(id)arg2;
- (BOOL)handleOpposingAudienceDisconnectingWithSessionId:(id)arg1 forLiveMicPkInfo:(id)arg2;
- (id)computeLiveRoomImagesWithReferenceLiveRoomImages:(id)arg1 differencingAppMsgList:(id)arg2;
- (id)commentItems;
- (void)setCommentItems:(id)arg1;
- (BOOL)isMicInfoKeyframe;
- (void)setIsMicInfoKeyframe:(BOOL)arg1;
- (BOOL)isLiveRoomImagesKeyframe;
- (void)setIsLiveRoomImagesKeyframe:(BOOL)arg1;
- (id)liveMicInfo;
- (void)setLiveMicInfo:(id)arg1;
- (id)liveRoomImages;
- (void)setLiveRoomImages:(id)arg1;
- (id)rewardMessages;
- (void)setRewardMessages:(id)arg1;
- (void).cxx_destruct;
@end

