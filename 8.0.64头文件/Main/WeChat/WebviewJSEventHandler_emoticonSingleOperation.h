@interface WebviewJSEventHandler_emoticonSingleOperation : WebviewJSEventHandlerBase <IStoreEmotionSingleDownloadMgrExt, MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    int _emotionScene; // +0x8
    NSString * _md5; // +0x10
    EmojiInfoObj * _emojiInfoObj; // +0x18
    long long _opType; // +0x20
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x28
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)startDownloadEmoji;
- (void)realDoAction;
- (void)addWithEmojiInfoObj:(id)arg1 addScene:(int)arg2;
- (void)endWithOK;
- (id)getViewController;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imagePath:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (long long)opType;
- (void)setOpType:(long long)arg1;
- (int)emotionScene;
- (void)setEmotionScene:(int)arg1;
- (id)emoticonAddLogicController;
- (void)setEmoticonAddLogicController:(id)arg1;
- (void).cxx_destruct;
@end
