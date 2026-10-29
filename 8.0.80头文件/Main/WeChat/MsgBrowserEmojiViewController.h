@interface MsgBrowserEmojiViewController : MsgBrowserBaseViewController <EmojiBrowseViewDelegate>
{
    EmojiBrowseView * m_emojiBrowseView; // +0x70
    NSMutableDictionary * m_dicEmojiSearchResultsByTitle; // +0x78
    NSMutableDictionary * m_dicEmojiSearchMatchResults; // +0x80
    NSMutableArray * m_arrEmojiMsgs; // +0x88
    NSMutableArray * m_arrSectionTitle; // +0x90
    BOOL m_sliderInitialized; // +0x98
    UIView * m_noResultView; // +0xa0
    CMessageWrap * m_wxMenuMsg; // +0xa8
}
- (void)initContentView;
- (void)layoutContentView;
- (id)sliderTargetScrollView;
- (void)sliderFullscreenStateChanged:(BOOL)arg1;
- (void)sliderWillEnterFullscreen;
- (void)sliderWillExitFullscreen;
- (id)sliderDateTextForScrollPosition;
- (void)reloadData;
- (void)didLoadNextPage:(id)arg1;
- (void)rebuildEmojiMsgWithFirstLoading:(BOOL)arg1;
- (void)updateLoadingState;
- (void)rebuildEmojiMsgData:(id)arg1 searchText:(id)arg2;
- (void)clearEmojiData;
- (void)initEmojiView;
- (void)handleEmojiMsgWithMoreData:(BOOL)arg1 isFirstLoading:(BOOL)arg2;
- (void)clearEmojiView;
- (void)requestMoreEmojiData;
- (id)getEmojiData;
- (id)getEmojiSectionTitles;
- (void)hideKeyboard;
- (void)deleteEmojiAtIndexPath:(id)arg1;
- (void)doDelEmojiMsg:(id)arg1;
- (void)doDelEmojiAtIndexPath:(id)arg1;
- (void)locateEmojiMsg:(id)arg1;
- (void)didSelectEmojiAtIndexPath:(id)arg1;
- (void)didLongPressEmojiAtIndexPath:(id)arg1;
- (id)emojiMsgAtIndexPath:(id)arg1;
- (BOOL)emojiBrowseView:(id)arg1 handleLongPressAtIndexPath:(id)arg2;
- (id)wxMenuItemForActionType:(unsigned long long)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onWXMenuLocate;
- (void)onWXMenuForward;
- (void)onWXMenuFavorite;
- (void)onWXMenuDelete;
- (void)onWXMenuMultiSelect;
- (BOOL)emojiBrowseView:(id)arg1 isItemSelectedAtIndexPath:(id)arg2;
- (void)emojiBrowseView:(id)arg1 didToggleSelectionAtIndexPath:(id)arg2 checked:(BOOL)arg3;
- (void)emojiBrowseViewDidScroll:(id)arg1;
- (void)emojiBrowseViewWillBeginDragging:(id)arg1;
- (void)emojiBrowseViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)removeMsgByLocalID:(unsigned int)arg1;
- (void)showMsgLocationWithMsg:(id)arg1;
- (void).cxx_destruct;
@end
