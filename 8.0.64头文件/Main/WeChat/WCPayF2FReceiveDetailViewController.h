@interface WCPayF2FReceiveDetailViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayNoticeBannerDelegate>
{
    double kRecordTableCellHeight; // +0x98
    double kLeftMargin; // +0xa0
    double kTopMargin; // +0xa8
    double kSpeechSynthesizeViewTopMargin; // +0xb0
    double kSpeechSynthesizeViewLeftMargin; // +0xb8
    double kSpeechSynthesizeViewBottomMargin; // +0xc0
    double kSpeechSynthesizeViewImageLabelMargin; // +0xc8
    double kSpeechSynthesizeViewLabelSwitchMargin; // +0xd0
    double kBottomMargin; // +0xd8
    BOOL _bIsLoadingMore; // +0xe0
    BOOL _bIsRecordLoadEnd; // +0xe1
    BOOL _bIsSpeechSwitchViewShow; // +0xe2
    id <WCPayF2FReceiveDetailViewControllerDelegate> _delegate; // +0xe8
    MMTableView * _tableView; // +0xf0
    Announce * _m_announcement; // +0xf8
    WCPayF2FReceiveDetailSummaryItem * _curSummaryItem; // +0x100
    NSMutableArray * _recordList; // +0x108
    UISwitch * _openSwitch; // +0x110
    UIImageView * _switchImageView; // +0x118
}
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setSpeechSwitchViewShow:(BOOL)arg1;
- (void)setupData;
- (void)refreshControllerWithAnnounce:(id)arg1;
- (void)refreshControllerWithRecordSummaryItem:(id)arg1 recordListData:(id)arg2;
- (void)refreshControllerWithLoadRecordFail;
- (void)refreshControllerAfterDeleteRecordWithSummaryItem:(id)arg1 bIsDeleteSuccess:(BOOL)arg2;
- (void)viewControllerBack;
- (void)rightBarButtonPress;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupHeaderAndContentView;
- (id)makeEmptyTipsView;
- (id)makeSpeechSynthsizeSwtichView;
- (void)updateSwitchStatus;
- (void)areaButtonClick:(id)arg1;
- (id)makeReceiveDetailHeaderView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeRecordCellContentView:(id)arg1 recordData:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)genTableFooterView;
- (BOOL)isSummaryItemNeedUpdate:(id)arg1;
- (id)getBannerView;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)showSetPushSoundResultSuccess:(BOOL)arg1 soundStatus:(BOOL)arg2;
- (void)showOpenSystemPushSoundTips;
- (id)delegate;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)m_announcement;
- (void)setM_announcement:(id)arg1;
- (id)curSummaryItem;
- (void)setCurSummaryItem:(id)arg1;
- (id)recordList;
- (void)setRecordList:(id)arg1;
- (BOOL)bIsLoadingMore;
- (void)setBIsLoadingMore:(BOOL)arg1;
- (BOOL)bIsRecordLoadEnd;
- (void)setBIsRecordLoadEnd:(BOOL)arg1;
- (id)openSwitch;
- (void)setOpenSwitch:(id)arg1;
- (id)switchImageView;
- (void)setSwitchImageView:(id)arg1;
- (BOOL)bIsSpeechSwitchViewShow;
- (void)setBIsSpeechSwitchViewShow:(BOOL)arg1;
- (void).cxx_destruct;
@end
