@interface IntelligentMsgBrowseResultTableViewLogic : MMObject <MMRefreshTableFooterDelegate, IFTSIntelligentMessageMgrExt, UITableViewDataSource, UITableViewDelegate>
{
    SimpleImgInfo * m_curImgInfo; // +0x8
    NSMutableArray * m_arrImgInfo; // +0x10
    unsigned long long m_colNum; // +0x18
    double m_margin; // +0x20
    CGRect m_frame; // +0x28
    NSMutableArray * m_needLoadArray; // +0x48
    double m_scrollOffset; // +0x50
    IntelligentRefreshTableFooterView * m_nextLoadingView; // +0x58
    NSMutableDictionary * m_dicSectionTitle; // +0x60
    NSMutableDictionary * m_dicMsgsByTitle; // +0x68
    NSMutableDictionary * m_dicSectionSelected; // +0x70
    map<NSString *, bool, CompareNSString, std::allocator<std::pair<NSString *const, bool>>> m_dicMsgSelected; // +0x78
    NSMutableDictionary * m_dicWeakMedia; // +0x90
    MMUIView * m_nullDataNextLoadingView; // +0x98
    BOOL _m_bIsShowMenu; // +0xa0
    unsigned int _m_style; // +0xa4
    id <IntelligentMsgBrowseViewDelegate> m_browseViewDelegate; // +0xa8
    MMTableView * m_tableView; // +0xb0
    id <IntelligentMsgBrowseResultTableViewLogicDelegate> _m_delegate; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)initData;
- (void)reSizeFrame:(CGRect)arg1;
- (void)rebuildMsgData:(id)arg1;
- (void)resetData;
- (void)updateLoadinNextMore:(BOOL)arg1;
- (void)updateNextMore:(BOOL)arg1;
- (id)getNextLoadingViewText;
- (void)updateNextLoadingViewText;
- (void)resetNormalNextLoadingView;
- (void)showNullDataNextLoadingView;
- (id)getSimpleMsgFrom:(id)arg1;
- (id)getArrSectionData;
- (CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (id)getMediaViewWithMsgWrap:(id)arg1;
- (BOOL)getIsHadBuildPriorityBuildIndexMsg;
- (BOOL)getIsInitialHadBuildPriorityBuildIndexMsg;
- (BOOL)checkIsHadDelayLoadingStatus;
- (unsigned long long)getArrImgCount;
- (void)clearNextLoadingView;
- (id)getNextLoadingView;
- (void)IntelligentMsgBrowseResultTableViewDidScroll:(id)arg1;
- (void)IntelligentMsgBrowseResultTableViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)IntelligentMsgBrowseResultTableViewDidEndDecelerating:(id)arg1;
- (void)relaodCellWhenScrollViewStop;
- (void)_genImgCell:(id)arg1 indexPath:(id)arg2;
- (void)IntelligentMsgBrowseResultTableViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)IntelligentMsgBrowseResultTableViewWillBeginDragging:(id)arg1;
- (void)setM_scrollOffset:(double)arg1;
- (void)setTableViewContentInset:(UIEdgeInsets)arg1;
- (void)onTransitionToNewSize;
- (void)endHighLightedCurMsg;
- (void)startHighLightedCurMsg;
- (id)getIndexPathOfCurMsg;
- (void)setCurMsgHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (long long)numberOfSectionsInIntelligentMsgBrowseResultTableView:(id)arg1;
- (long long)IntelligentMsgBrowseResultTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)IntelligentMsgBrowseResultTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)IntelligentMsgBrowseResultTableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)IntelligentMsgBrowseResultTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)IntelligentMsgBrowseResultTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)calcImgItemIndex:(long long)arg1 num:(long long)arg2;
- (void)genImgCell:(id)arg1 indexPath:(id)arg2;
- (id)getMsgImageSquareThumbView:(unsigned int)arg1;
- (id)IntelligentMsgBrowseResultTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)IntelligentMsgBrowseResultTableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)IntelligentMsgBrowseResultTableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)onClickMsgSquareThumb:(id)arg1;
- (void)onButtonLongClick:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)m_browseViewDelegate;
- (void)setM_browseViewDelegate:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (unsigned int)m_style;
- (void)setM_style:(unsigned int)arg1;
- (BOOL)m_bIsShowMenu;
- (void)setM_bIsShowMenu:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
