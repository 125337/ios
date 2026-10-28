@interface GCImageCardCellModel : GCChatBaseCellModel
{
    ChatroomMsgImgCard * _imgCard; // +0x8
}
- (id)initWithChatroomMessage:(id)arg1;
- (Class)bindCellClass;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)imgCard;
- (void)setImgCard:(id)arg1;
- (void).cxx_destruct;
@end
