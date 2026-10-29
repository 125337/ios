@interface WCCommentBigEmoticonAddHelper : NSObject <IStoreEmotionSingleDownloadMgrExt, MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate>
{
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x8
    MMUIViewController * _currentViewController; // +0x10
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0x18
}
- (void)downloadAndAddEmoticon;
- (void)addEmoticon;
- (void)startDownloadEmoticon;
- (void)dealloc;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)getViewController;
- (id)snsEmojiInfoObj;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)addEmoticonLogic;
- (void)setAddEmoticonLogic:(id)arg1;
- (void).cxx_destruct;
@end
