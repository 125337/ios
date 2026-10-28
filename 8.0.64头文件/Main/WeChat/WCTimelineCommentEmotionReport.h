@interface WCTimelineCommentEmotionReport : NSObject
{
    WCDataItem * _dataItem; // +0x8
    NSMutableArray * _clickEmojiIconIdList; // +0x10
    NSMutableArray * _clickEmojiIdList; // +0x18
}
- (id)init;
- (void)report:(unsigned char)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)clickEmojiIconIdList;
- (void)setClickEmojiIconIdList:(id)arg1;
- (id)clickEmojiIdList;
- (void)setClickEmojiIdList:(id)arg1;
- (void).cxx_destruct;
@end
