@interface GCShareLinkCellModel : GCChatBaseCellModel
{
    ChatroomMsgShareLink * _shareLink; // +0x8
}
- (id)initWithChatroomMessage:(id)arg1;
- (Class)bindCellClass;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)shareLink;
- (void)setShareLink:(id)arg1;
- (void).cxx_destruct;
@end

