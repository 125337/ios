@interface MMFinderLiveBubbleCardManagePlugin : MMLiveTaskBaseFunctionPlugin
{
    long long _currBubbleCardType; // +0x8
    UIView * _currBubbleCardView; // +0x10
}
- (id)initWithLiveTask:(id)arg1;
- (void)registerExtensions;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 extraClientConfigUpdated:(BOOL)arg14 liveGameData:(id)arg15 respContext:(id)arg16;
- (void)dismissLastBubbleCardIfNeed;
- (void)updateCurrBubbleCardType:(long long)arg1;
- (void)updateCurrBubbleCardView:(id)arg1;
- (void)onBubbleCardDisplay:(long long)arg1 bubble:(id)arg2;
- (void)onBubbleCardDismiss:(long long)arg1;
- (long long)currBubbleCardType;
- (void)setCurrBubbleCardType:(long long)arg1;
- (id)currBubbleCardView;
- (void)setCurrBubbleCardView:(id)arg1;
- (void).cxx_destruct;
@end
