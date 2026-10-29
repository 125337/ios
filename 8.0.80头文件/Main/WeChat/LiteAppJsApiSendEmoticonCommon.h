@interface LiteAppJsApiSendEmoticonCommon : LiteAppJsApi <IStoreEmotionSingleDownloadMgrExt, MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate>
{
    BOOL _shouldCloseXiaoweiEmoji; // +0x20
    BOOL _shouldJumpToChat; // +0x21
    NSString * _pendingUserName; // +0x28
    CMessageWrap * _pendingMessageWrap; // +0x30
    EmoticonCustomManageAddLogic * _emoticonAddLogic; // +0x38
    NSString * _pendingEmojiSearchSessionId; // +0x40
    NSString * _pendingAiEmojiSessionId; // +0x48
}
- (id)getViewController;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)emojiInfoObjWithMd5:(id)arg1 emojiInfoBufBase64:(id)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(BOOL)arg2;
- (void)openChatSceneForUserName:(id)arg1;
- (BOOL)submitEmoticonMessage:(id)arg1 toUserName:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)recordXiaoweiRecentUseForMd5:(id)arg1 usedTime:(unsigned int)arg2;
- (void)failWithReason:(id)arg1;
- (id)pendingUserName;
- (void)setPendingUserName:(id)arg1;
- (id)pendingMessageWrap;
- (void)setPendingMessageWrap:(id)arg1;
- (id)emoticonAddLogic;
- (void)setEmoticonAddLogic:(id)arg1;
- (BOOL)shouldCloseXiaoweiEmoji;
- (void)setShouldCloseXiaoweiEmoji:(BOOL)arg1;
- (BOOL)shouldJumpToChat;
- (void)setShouldJumpToChat:(BOOL)arg1;
- (id)pendingEmojiSearchSessionId;
- (void)setPendingEmojiSearchSessionId:(id)arg1;
- (id)pendingAiEmojiSessionId;
- (void)setPendingAiEmojiSessionId:(id)arg1;
- (void).cxx_destruct;
@end
