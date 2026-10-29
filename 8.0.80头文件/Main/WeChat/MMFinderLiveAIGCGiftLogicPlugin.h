@interface MMFinderLiveAIGCGiftLogicPlugin : MMLiveTaskBaseFunctionPlugin <MMFinderLiveMgrExt>
{
    NSMutableDictionary * _aigcGiftStates; // +0x8
    MMFinderLiveAIGCGiftBubblePendingState * _pendingBubbleState; // +0x10
}
- (id)initWithLiveTask:(id)arg1;
- (id)mmkvID;
- (id)mmkv;
- (BOOL)startAIGCGenerationForGift:(id)arg1 coverImage:(id)arg2 targetSize:(CGSize)arg3 completion:(id /* block */)arg4;
- (BOOL)reCustomizeAIGCGift:(id)arg1 coverImage:(id)arg2 targetSize:(CGSize)arg3 completion:(id /* block */)arg4;
- (void)cancelAIGCGenerationForGift:(id)arg1;
- (void)refreshGiftItems;
- (void)handleAIGCStatusUpdate:(id)arg1 status:(unsigned long long)arg2 aigcInfo:(id)arg3;
- (BOOL)isAIGCGiftGenerated:(id)arg1;
- (BOOL)isAIGCGiftGenerating:(id)arg1;
- (id)getAIGCStateForGiftId:(id)arg1;
- (id)getOrCreateAIGCStateForGift:(id)arg1;
- (id)panelRedDotMMKVKeyForGift:(id)arg1 uploadId:(id)arg2;
- (BOOL)shouldShowPanelRedDotForGift:(id)arg1;
- (BOOL)markNeedShowPanelRedDotForGift:(id)arg1 uploadId:(id)arg2;
- (BOOL)clearPanelRedDotForGift:(id)arg1;
- (BOOL)uploadCoverImage:(id)arg1 forGiftItem:(id)arg2 targetSize:(CGSize)arg3 completion:(id /* block */)arg4;
- (void)generateAIGCGiftWithCoverUrl:(id)arg1 md5:(id)arg2 giftItem:(id)arg3 completion:(id /* block */)arg4;
- (void)handleAIGCError:(id)arg1 errorCode:(unsigned long long)arg2 errorMsg:(id)arg3;
- (void)handleReddotUpdate:(id)arg1 status:(unsigned long long)arg2 aigcInfo:(id)arg3;
- (id)getLocalGenerateSubmitRecordUploadId:(id)arg1;
- (BOOL)updateLocalGenerateSubmitRecord:(id)arg1 uploadId:(id)arg2;
- (void)clearLocalGenerateSubmitRecord:(id)arg1;
- (void)onDataItemUpdated;
- (void)onExtFlagExtUpdated;
- (void)onFinderLiveMgrRefreshAIGCGiftInfoWithLiveTaskId:(id)arg1 giftId:(id)arg2 aigcGiftInfo:(id)arg3 item:(id)arg4;
- (void)addPendingBubbleStateForGift:(id)arg1 generateSuccess:(BOOL)arg2 aigcInfo:(id)arg3;
- (void)clearPendingBubbleStateForGiftId:(id)arg1;
- (void)checkAndShowPendingBubbleIfNeeded;
- (id)aigcGiftStates;
- (void)setAigcGiftStates:(id)arg1;
- (id)pendingBubbleState;
- (void)setPendingBubbleState:(id)arg1;
- (void).cxx_destruct;
@end
