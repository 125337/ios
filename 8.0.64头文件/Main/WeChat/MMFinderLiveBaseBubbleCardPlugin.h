@interface MMFinderLiveBaseBubbleCardPlugin : MMLiveTaskBaseFunctionPlugin
{
    MMFinderLiveBubbleInfo * _liveBubbleInfo; // +0x8
    MMFinderLiveTask * _finderLiveTask; // +0x10
}
- (id)initWithLiveTask:(id)arg1;
- (void)onBubbleClicked;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)registerExtensions;
- (BOOL)checkCanShowBubbleWithTaskId:(id)arg1 liveBubbleInfo:(id)arg2;
- (void)cancelLastAutoDismissTimer;
- (void)delayDismissBubbleByTimerAfterInterval:(double)arg1;
- (void)delayDismissBubbleByClickAfterInterval:(double)arg1;
- (void)innerShowWithBubbleInfo:(id)arg1;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (id)liveBubbleInfo;
- (void)setLiveBubbleInfo:(id)arg1;
- (id)finderLiveTask;
- (void)setFinderLiveTask:(id)arg1;
- (void).cxx_destruct;
@end
