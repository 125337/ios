@interface GCMsgSheetCardCellModel : GCChatBaseCellModel
{
    ChatroomMsgSheetCard * _sheetCard; // +0x8
}
- (void)onChatroomMessageInitEnd;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithChatroomMessage:(id)arg1;
- (id)bindMsgSheetCardCell;
- (Class)bindCellClass;
- (id)sheetCard;
- (void)setSheetCard:(id)arg1;
- (void).cxx_destruct;
@end

