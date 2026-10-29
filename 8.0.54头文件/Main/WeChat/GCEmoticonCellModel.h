@interface GCEmoticonCellModel : GCChatBaseCellModel
{
    ChatroomMsgEmoji * _emojiMsg; // +0x8
    CEmoticonWrap * _emoticonWrap; // +0x10
    CMessageWrap * _messageWrap; // +0x18
    unsigned long long _msgDownloadStatus; // +0x20
}
- (id)initWithChatroomMessage:(id)arg1;
- (Class)bindCellClass;
- (void)onChatroomMessageInitEnd;
- (id)emojiInfoObjFromGCEmojiMsg:(id)arg1;
- (CGSize)measurebubbleViewSize:(CGSize)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)emotionViewClick;
- (void)logStr:(id)arg1;
- (void)logWithForamt:(id)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)startDownloadImageIsFirstTime:(BOOL)arg1;
- (id)emojiMsg;
- (void)setEmojiMsg:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (unsigned long long)msgDownloadStatus;
- (void)setMsgDownloadStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

