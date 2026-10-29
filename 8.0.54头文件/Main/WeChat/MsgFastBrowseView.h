@interface MsgFastBrowseView : MMUIView <MMRefreshTableFooterDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SimpleImgInfo * m_curImgInfo; // +0x8
    NSMutableArray * m_arrImgInfo; // +0x10
    double m_scrollOffset; // +0x18
    NSMutableDictionary * m_dicSectionTitle; // +0x20
    NSMutableDictionary * m_dicMsgsByTitle; // +0x28
    NSMutableDictionary * m_dicSectionSelected; // +0x30
    map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> m_dicMsgSelected; // +0x38
    MMTableView * m_tableView; // +0x50
    UILabel * m_noImageTip; // +0x58
    id <MsgFastBrowseViewDelegate> fastBrowseViewDelegate; // +0x60
    unsigned long long m_colNum; // +0x68
    double m_margin; // +0x70
    NSMutableArray * m_needLoadArray; // +0x78
    WCTimeLineFooterView * m_nextLoadingView; // +0x80
    WCTimeLineFooterView * m_preLoadingView; // +0x88
    NSMutableDictionary * m_dicWeakMedia; // +0x90
    UIView * m_footerView; // +0x98
    BOOL m_showCheckMark; // +0xa0
    BOOL m_hideSelectAllSection; // +0xa1
    BOOL _m_bNotMainTable; // +0xa2
    id <MsgFastBrowseViewDelegate> m_fastBrowseViewDelegate; // +0xa8
    unsigned long long m_style; // +0xb0
    NSString * _m_nsChatName; // +0xb8
    long long _m_selectionLimit; // +0xc0
}
- (id)initWithMsgWrap:(id)arg1 withDelegate:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 style:(unsigned long long)arg3;
- (void)dealloc;
- (void)reloadData;
- (void)initData;
- (void)rebuildMsgData;
- (void)updateLoading:(BOOL)arg1 NextMore:(BOOL)arg2;
- (void)updatePreMore:(BOOL)arg1 NextMore:(BOOL)arg2;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)relaodCellWhenScrollViewStop;
- (void)_genImgCell:(id)arg1 indexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)initTableView;
- (void)setM_scrollOffset:(double)arg1;
- (void)adjustContentOffset;
- (void)setTableViewContentInset:(UIEdgeInsets)arg1;
- (void)onTransitionToNewSize;
- (void)endHighLightedCurMsg;
- (void)startHighLightedCurMsg;
- (id)getIndexPathOfCurMsg;
- (void)setCurMsgHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)calcImgItemIndex:(long long)arg1 num:(long long)arg2;
- (void)genImgCell:(id)arg1 indexPath:(id)arg2;
- (id)getMsgImageSquareThumbView:(unsigned int)arg1;
- (id)getMsgImageSquareThumbViewWithImgInfo:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)onClickMsgSquareThumb:(id)arg1;
- (void)onLongPressMsgSquareThumb:(id)arg1;
- (BOOL)onSelectMessage:(id)arg1;
- (BOOL)changeSelectOfMessage:(id)arg1;
- (BOOL)changeSelectOfMessage:(id)arg1 fromMsgImageSquareThumbView:(BOOL)arg2;
- (void)onSelectSection:(id)arg1;
- (void)updateSectionHeaderCheckMark:(id)arg1 to:(BOOL)arg2;
- (void)updateSectionHeaderCheckMarkBtn:(id)arg1 isSelected:(BOOL)arg2;
- (id)getSelectedMessages;
- (long long)hasSelectedMessagesCount;
- (void)selectAllMessages;
- (void)unSelectAllMessages;
- (CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (void)setTableFooterView:(id)arg1;
- (id)getFooterView;
- (void)setImgInfoAsSelected:(id)arg1;
- (id)m_fastBrowseViewDelegate;
- (void)setM_fastBrowseViewDelegate:(id)arg1;
- (id)m_curImgInfo;
- (void)setM_curImgInfo:(id)arg1;
- (double)m_scrollOffset;
- (BOOL)m_showCheckMark;
- (void)setM_showCheckMark:(BOOL)arg1;
- (BOOL)m_hideSelectAllSection;
- (void)setM_hideSelectAllSection:(BOOL)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (unsigned long long)m_style;
- (void)setM_style:(unsigned long long)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (BOOL)m_bNotMainTable;
- (void)setM_bNotMainTable:(BOOL)arg1;
- (long long)m_selectionLimit;
- (void)setM_selectionLimit:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

