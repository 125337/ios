@interface IntelligentMsgImgFigureBrowseViewController : MMUIViewController <MsgImgFullScreenWindowDelegate, MsgImgFullScreenViewControllerDelegate, IntelligentMsgBrowseViewDelegate, ViewAppMsgControllerDelegate, IFTSIntelligentMessageMgrExt, IntelligentMsgBrowseResultTableViewLogicDelegate, UITableViewDataSource, UITableViewDelegate, IntelligentMsgImgFullScreenMsgImgClickLogicDelegate, IMsgExt>
{
    NSMutableArray * m_arrSearchResultMessageLocalId; // +0x70
    NSMutableArray * m_arrResultMessagr; // +0x78
    IntelligentMsgImgFullScreenMsgImgClickLogic * m_msgImgFullScreenMsgImgClickLogic; // +0x80
    IntelligentMsgBrowseResultTableViewLogic * m_resultTableViewLogic; // +0x88
    IntelligentMsgImgFigureHeaderView * m_figureHeaderView; // +0x90
    unsigned int m_indexStartCursor; // +0x98
    BOOL _showNewUI; // +0x9c
    unsigned int _m_searchType; // +0xa0
    unsigned int _m_categoryDisplayType; // +0xa4
    id <IntelligentMsgImgFigureBrowseViewControllerController> m_delegate; // +0xa8
    NSString * m_nsChatName; // +0xb0
    IntelligentFaceClusterMessageItem * m_faceClusterMessageItem; // +0xb8
    MMTableView * m_tableView; // +0xc0
    MMUIView * m_tableViewHeaderView; // +0xc8
    NSMutableArray * m_arrIntelligentMsgItem; // +0xd0
    IntelligentMessageReport * m_reportInfo; // +0xd8
    NSString * _m_searchText; // +0xe0
}
- (void)dealloc;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (void)initData;
- (id)getFaceClusterItemLabelIdStr;
- (void)initNavBar;
- (void)initView;
- (void)initTableHeaderView;
- (void)initTableView;
- (id)getResultTableViewLogic;
- (void)updateFigureBrowseViewWithImage:(id)arg1 figureCount:(unsigned int)arg2;
- (void)filterIntelligentMsgData;
- (void)doFTSResult;
- (void)analyzeMsgSearchResult;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)onCancel;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (CGRect)getMediaFrameWithMsgWrap:(id)arg1;
- (id)getMsgImgFullScreenMsgInView;
- (void)onIntelligentMsgBrowseResultTableViewGetMoreMsgWithNext:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (id)m_faceClusterMessageItem;
- (void)setM_faceClusterMessageItem:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_tableViewHeaderView;
- (void)setM_tableViewHeaderView:(id)arg1;
- (id)m_arrIntelligentMsgItem;
- (void)setM_arrIntelligentMsgItem:(id)arg1;
- (id)m_reportInfo;
- (void)setM_reportInfo:(id)arg1;
- (id)m_searchText;
- (void)setM_searchText:(id)arg1;
- (unsigned int)m_searchType;
- (void)setM_searchType:(unsigned int)arg1;
- (unsigned int)m_categoryDisplayType;
- (void)setM_categoryDisplayType:(unsigned int)arg1;
- (BOOL)showNewUI;
- (void)setShowNewUI:(BOOL)arg1;
- (void).cxx_destruct;
@end
