@interface FavRecordDetailViewController : FavBaseDetailViewController <BaseScanLogicDelegate, IFavCdnDownloadMgrExt, FavActionSheetDelegate, ChatViewModelDelegate, WCActionSheetDelegate, scrollViewDelegate, FavRecordNodeViewDelegate, ViewLocationDelegate, FavForwardLogicDelegate>
{
    unsigned int m_uiLongPressedIndex; // +0x78
    BOOL m_hasIllegalData; // +0x7c
    NSString * m_chatDate; // +0x80
    int m_chatDatePrefix; // +0x88
    ForwardMessageLogicController * m_forwardLogic; // +0x90
    NSArray * m_dataList; // +0x98
    BOOL m_isFavHomePage; // +0xa0
    FavImagePreView * m_longPressView; // +0xa8
    FavActionSheet * m_favActionSheet; // +0xb0
    MMRichTextCoverView * m_richTextCoverView; // +0xb8
    MMMsgMenuReporter * m_menuReporter; // +0xc0
    FavoritesItemDataField * _scrollToData; // +0xc8
    NSMutableDictionary * _dataWrapList; // +0xd0
}
- (id)initWithFavItem:(id)arg1;
- (id)initWithDataWrap:(id)arg1;
- (void)initCommonData;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)updateChatDate;
- (void)viewDidLoad;
- (double)offsetHeight;
- (double)getTableFooterHeight;
- (void)reloadFooterView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)scrollToIndex:(long long)arg1 atScrollPosition:(long long)arg2 needHighlight:(BOOL)arg3 animation:(BOOL)arg4;
- (void)highlightRowAtIndexPath:(id)arg1;
- (void)unhighlightRowAtIndexPath:(id)arg1;
- (void)makeCellSelectionSyleNoneAtIndexPath:(id)arg1;
- (id)dataWrapAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (id)getThumbImageViewWithFavDataItemWrap:(id)arg1;
- (BOOL)canShowConvertToNoteActionSheet;
- (void)onAction:(id)arg1;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)onFavActionSheetWillDismiss;
- (void)onForwardFavDataWrap2Msg;
- (void)onForwardFavDataWrap2MsgToUser:(id)arg1;
- (void)onForwardFavDataWrap2WC;
- (void)onSaveFavDataImg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)tryHandleMenu:(long long)arg1 withDataSource:(id)arg2;
- (void)onClickOnImgNode:(id)arg1 DataIndex:(unsigned int)arg2;
- (void)onClickOnImgNode:(id)arg1 needEdit:(BOOL)arg2;
- (void)onWillLongPressImgNode:(id)arg1 imageView:(id)arg2;
- (void)onLongPressImgNode:(id)arg1;
- (void)onFavViewSizeDidChange:(id)arg1 withFavData:(id)arg2;
- (void)favRecordNodeView:(id)arg1 onClickOnNode:(id)arg2;
- (BOOL)shouldShowTopicText;
- (void)onClickWeAppMPShortLinkWithUrl:(id)arg1 withFavData:(id)arg2;
- (void)onClickReferViewInNodeView:(id)arg1;
- (id)getRichTextCoverView;
- (void)setRichTextCoverView:(id)arg1;
- (id)getMMMsgMenuReporter;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (id)getFavForawrdViewController;
- (void)onJumpToUrl:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onFavSightSizeDidChange:(id)arg1;
- (BOOL)canShowOperationMenu;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)reloadVisibleNodeWithCellView:(id)arg1;
- (CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (void)updateTableContentOffsetAnimated:(BOOL)arg1 OffsetDelta:(double)arg2;
- (id)getTableView;
- (id)getViewController;
- (id)getInputToolView;
- (id)getMenuReporter;
- (BOOL)isLastTranslateAvailableMsg:(id)arg1 includeSelf:(BOOL)arg2;
- (id)firstMsgAfterEnterSession;
- (id)findNodeViewWithMsgSvrId:(long long)arg1;
- (id)scrollToData;
- (void)setScrollToData:(id)arg1;
- (id)dataWrapList;
- (void)setDataWrapList:(id)arg1;
- (void).cxx_destruct;
@end

