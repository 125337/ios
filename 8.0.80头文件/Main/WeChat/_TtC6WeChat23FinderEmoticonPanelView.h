@interface _TtC6WeChat23FinderEmoticonPanelView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
     reportFeedID; // +0x8
     reportCommentScene; // +0x18
    void * onInsertText; // +0x20
    void * onDelete; // +0x30
    void * onSend; // +0x40
     wechatBoard; // +0x50
     pages; // +0x58
     wechatTab; // +0x60
     emojiTab; // +0x68
     emojiRedDot; // +0x70
     sendButton; // +0x78
     deleteButton; // +0x80
     emojiPage; // +0x88
     grid; // +0x90
     groups; // +0x98
     availableEmoji; // +0xa0
     recentEmoji; // +0xa8
     selectedEmoticons; // +0xb0
     emojiSections; // +0xb8
     selectedPage; // +0xc0
     pendingEmojiPosition; // +0xc8
     pendingWechatPosition; // +0xf0
     lastLayoutSize; // +0x118
     lastLayoutInsets; // +0x128
     isPresented; // +0x148
     isWechatPresented; // +0x149
}
- (void)reportSend:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (void)onSendButtonClicked;
- (void)setReportFeedID:(id)arg1 commentScene:(int)arg2;
- (BOOL)showsEntranceRedDot;
- (void)didClickEntrance;
- (id /* block */)onInsertText;
- (void)setOnInsertText:(id /* block */)arg1;
- (id /* block */)onDelete;
- (void)setOnDelete:(id /* block */)arg1;
- (id /* block */)onSend;
- (void)setOnSend:(id /* block */)arg1;
- (double)preferredHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateActionsWithCanSend:(BOOL)arg1 canDelete:(BOOL)arg2;
- (void)setPresented:(BOOL)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)selectWechat;
- (void)selectEmoji;
- (void)send;
- (void)deleteText;
- (void).cxx_destruct;
@end
