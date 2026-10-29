@interface FavRecordEmojiNodeView : FavRecordBaseNodeView <MMUIViewControllerDelegate, IStoreEmotionSingleDownloadMgrExt>
{
    MMEmoticonView * _emojiView; // +0x50
    UIImageView * _gameEmojiView; // +0x58
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x60
    CEmoticonWrap * _emoticonWrap; // +0x68
}
- (void)addContentSubView;
- (void)layoutSubviews;
- (void)onTouchUpInside;
- (void)handleLongGesture:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onShowDetailPage:(id)arg1;
- (void)onTakeCameraFollow:(id)arg1;
- (void)showDetailPageWithNeedScrollToBottom:(BOOL)arg1 extrance:(long long)arg2;
- (void)doForward;
- (BOOL)isGameEmoticon;
- (id)getGameImageByContent:(unsigned int)arg1;
- (CGRect)targetRectForMenuControllerForRecordDetail;
- (id)emoticonAddLogicController;
- (id)getViewController;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)gameEmoticonAccessibilityLabel;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (id)emojiView;
- (id)gameEmojiView;
- (void)setEmoticonAddLogicController:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (void).cxx_destruct;
@end

