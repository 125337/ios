@interface LiteAppJsApiEmoticonSingleOperation : LiteAppJsApi <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    BOOL _hideOperateOK; // +0x20
    int _emotionScene; // +0x24
    EmojiInfoObj * _emojiInfoObj; // +0x28
    unsigned long long _opType; // +0x30
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x38
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)startDownloadEmoticon:(id)arg1;
- (void)realDoAction;
- (void)addWithEmojiInfoObj:(id)arg1 addScene:(int)arg2;
- (void)forwardEmojiInfo;
- (void)onFollowEmoticonCamera;
- (void)onExpose;
- (void)endWithOK;
- (id)getViewController;
- (id)msgWrapForOperation;
- (id)emoticonAddLogicController;
- (id)extraDataForExpose;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onTakePhotoCancelled;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)arg1;
- (void)onAddEmoticonDetectIfDismissViewController:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (int)emotionScene;
- (void)setEmotionScene:(int)arg1;
- (BOOL)hideOperateOK;
- (void)setHideOperateOK:(BOOL)arg1;
- (void)setEmoticonAddLogicController:(id)arg1;
- (void).cxx_destruct;
@end
