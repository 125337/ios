@interface WSSimilarEmoticonListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, MMRefreshTableFooterDelegate, MMRefreshTableFooterDelegate, WebSearchMgrDelegate, WSSimilarEmotCellDelegate, SharePreConfirmViewDelegate, SharePreConfirmSheetViewDelegate, IStoreEmotionSingleDownloadMgrExt, WCActionSheetDelegate, EmoticonCustomManageAddLogicDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    BOOL _usedForEmoticonBoardView; // +0x68
    unsigned int _interactionMode; // +0x6c
    int _cgiStatus; // +0x70
    unsigned int _requestType; // +0x74
    unsigned int _pageNumber; // +0x78
    NSString * _chatName; // +0x80
    id <WSSimilarEmoticonListViewControllerDelegate> _delegate; // +0x88
    CEmoticonWrap * _emoticonWrap; // +0x90
    WSSImilarPageModel * _defaultModel; // +0x98
    NSString * _webSearchSessionId; // +0xa0
    NSMutableArray * _similarItems; // +0xa8
    NSMutableDictionary * _similarDic; // +0xb0
    NSMutableArray * _downloadMd5Tasks; // +0xb8
    double _cacheItemWidth; // +0xc0
    double _cacheItemGap; // +0xc8
    long long _cacheItemCountPerLine; // +0xd0
    NSString * _searchId; // +0xd8
    long long _offset; // +0xe0
    FTSWebSearchMgr * _webSearchMgr; // +0xe8
    EmoticonCustomManageAddLogic * _emoticonAddLogic; // +0xf0
    CMessageWrap * _sendingMsg; // +0xf8
    WSEmoticonModel * _sendingModel; // +0x100
    MMTableView * _tableView; // +0x108
    WCTimeLineFooterView * _footerView; // +0x110
    SharePreConfirmView * _confirmView; // +0x118
    SharePreConfirmSheetView * _confirmSheetView; // +0x120
    NSString * _lastRequestId; // +0x128
    long long _lastExposeMaxNum; // +0x130
    long long _maxExposeItemNum; // +0x138
    WSEmoticonModel * _longPressItem; // +0x140
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x148
    unsigned long long _scene; // +0x150
    NSString * _searchQuery; // +0x158
}
- (id)initWithOriEmoticon:(id)arg1 searchMgr:(id)arg2 sessionId:(id)arg3 data:(id)arg4;
- (id)initWithEmojiInfoList:(id)arg1;
- (id)initWithQuery:(id)arg1 searchMgr:(id)arg2 sessionId:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reportExposeItemsIfNeeded;
- (void)reportSimilarEmotExposeItems17368;
- (void)reportSearchedEmotExposeItems14057;
- (void)configData;
- (void)initTableView;
- (void)exchangeSearchType:(id)arg1;
- (void)initTableViewHeader;
- (void)initTableViewFooterView;
- (BOOL)canBecomeFirstResponder;
- (id)emoticonAddLogicController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cancelModalView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)fetchNextPage;
- (void)fetchNextSimilarPage;
- (void)fetchNextSearchPage;
- (void)setFooterViewSuccessText;
- (void)setFooterViewFailedText;
- (id)pickUpCellEmoticonsWith:(unsigned int)arg1;
- (void)doForwardEmot;
- (unsigned int)checkModelPos:(id)arg1;
- (void)onSearchSimilarEmoticon:(id)arg1;
- (void)handleItemClick:(id)arg1 model:(id)arg2;
- (void)handleItemLongPress:(id)arg1 model:(id)arg2;
- (void)onCollect:(id)arg1;
- (id)emoticonMsgWith:(id)arg1 toUser:(id)arg2;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewError:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)asyncDownloadAllEmoticon;
- (BOOL)isStoreEmoticon:(id)arg1;
- (BOOL)isCustomEmoticon:(id)arg1;
- (void)loadEmotData:(id)arg1;
- (void)asyncDownloadCustomEmoticon:(id)arg1;
- (void)onDownloadCustomEmoticonFinishWithData:(id)arg1 model:(id)arg2;
- (void)onDownloadCustomEmoticonFail;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)updateImageWith:(id)arg1 imageData:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doExchangeProcess;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(BOOL)arg2;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (id)getViewController;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)interactionMode;
- (void)setInteractionMode:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)defaultModel;
- (void)setDefaultModel:(id)arg1;
- (id)webSearchSessionId;
- (void)setWebSearchSessionId:(id)arg1;
- (id)similarItems;
- (void)setSimilarItems:(id)arg1;
- (id)similarDic;
- (void)setSimilarDic:(id)arg1;
- (id)downloadMd5Tasks;
- (void)setDownloadMd5Tasks:(id)arg1;
- (double)cacheItemWidth;
- (void)setCacheItemWidth:(double)arg1;
- (double)cacheItemGap;
- (void)setCacheItemGap:(double)arg1;
- (long long)cacheItemCountPerLine;
- (void)setCacheItemCountPerLine:(long long)arg1;
- (int)cgiStatus;
- (void)setCgiStatus:(int)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (long long)offset;
- (void)setOffset:(long long)arg1;
- (unsigned int)requestType;
- (void)setRequestType:(unsigned int)arg1;
- (unsigned int)pageNumber;
- (void)setPageNumber:(unsigned int)arg1;
- (id)webSearchMgr;
- (void)setWebSearchMgr:(id)arg1;
- (id)emoticonAddLogic;
- (void)setEmoticonAddLogic:(id)arg1;
- (id)sendingMsg;
- (void)setSendingMsg:(id)arg1;
- (id)sendingModel;
- (void)setSendingModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)confirmView;
- (void)setConfirmView:(id)arg1;
- (id)confirmSheetView;
- (void)setConfirmSheetView:(id)arg1;
- (BOOL)usedForEmoticonBoardView;
- (void)setUsedForEmoticonBoardView:(BOOL)arg1;
- (id)lastRequestId;
- (void)setLastRequestId:(id)arg1;
- (long long)lastExposeMaxNum;
- (void)setLastExposeMaxNum:(long long)arg1;
- (long long)maxExposeItemNum;
- (void)setMaxExposeItemNum:(long long)arg1;
- (id)longPressItem;
- (void)setLongPressItem:(id)arg1;
- (void)setEmoticonAddLogicController:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;
- (void).cxx_destruct;
@end

