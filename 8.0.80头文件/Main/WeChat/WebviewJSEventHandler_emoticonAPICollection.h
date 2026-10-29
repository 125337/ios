@interface WebviewJSEventHandler_emoticonAPICollection : WebviewJSEventHandlerBase <MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate, IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _showDesignerEntry; // +0x8
    int _operationScene; // +0xc
    EmoticonCustomManageAddLogic * _emoticonAddLogic; // +0x10
    NSString * _md5; // +0x18
    NSData * _imageData; // +0x20
    long long _opType; // +0x28
    long long _silentAction; // +0x30
    EmojiInfoObj * _emojiInfoObj; // +0x38
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)startDownloadEmoji;
- (void)realDoAction;
- (BOOL)decodeImageDataFrom:(id)arg1;
- (BOOL)checkImageDataMd5AndSave:(id)arg1;
- (void)forwardWithMD5:(id)arg1 emojiInfoObj:(id)arg2 imageData:(id)arg3;
- (void)addWithEmojiInfoObj:(id)arg1 addScene:(int)arg2;
- (void)endWithOK;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (id)getViewController;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)emoticonAddLogic;
- (void)setEmoticonAddLogic:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (long long)opType;
- (void)setOpType:(long long)arg1;
- (long long)silentAction;
- (void)setSilentAction:(long long)arg1;
- (int)operationScene;
- (void)setOperationScene:(int)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (BOOL)showDesignerEntry;
- (void)setShowDesignerEntry:(BOOL)arg1;
- (void).cxx_destruct;
@end
