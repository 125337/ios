@interface MMFinderLiveTestLiveInfoConfirmSheet : MMPageSheetBaseViewController
{
    BOOL _isTemporarilyDismissing; // +0x70
    BOOL _hasReportedExpose; // +0x71
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x78
    MMFinderLiveViewController * _fromVC; // +0x80
    id <MMFinderLiveTestLiveInfoConfirmSheetDelegate> _delegate; // +0x88
    UILabel * _headerLabel; // +0x90
    UIScrollView * _cardScrollView; // +0x98
    UIView * _cardView; // +0xa0
    MMUIButton * _startBroadcastButton; // +0xa8
    NSMutableArray * _items; // +0xb0
    NSMutableArray * _rowViews; // +0xb8
    MMFinderLiveTestLiveEditLogic * _editService; // +0xc0
}
- (id)initWithFinderLiveTaskId:(id)arg1 fromVC:(id)arg2;
- (void)setupPageSheetConfig;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)pageSheetDidRotation;
- (BOOL)isLandscapeMode;
- (void)buildDetailView;
- (void)layoutUI;
- (double)cardToButtonMargin;
- (double)buttonBottomMargin;
- (double)buttonAreaHeight;
- (void)layoutScrollView;
- (void)layoutContentView;
- (double)contentWidth;
- (double)headerLabelHeight;
- (double)cardHeight;
- (double)contentHeight;
- (double)pageSheetContentHeight;
- (void)layoutHeaderLabel;
- (void)layoutCardView;
- (void)layoutStartButton;
- (id)buildStartButton;
- (void)rebuildRows;
- (void)onRowTapped:(id)arg1;
- (void)refreshRowForType:(long long)arg1;
- (void)initData;
- (id)itemForType:(long long)arg1;
- (void)updateItemType:(long long)arg1 withEditResult:(id)arg2;
- (void)updateCoverItemWithModifiedValue:(id)arg1 thumbnailImage:(id)arg2 thumbnailURL:(id)arg3;
- (void)applyEditResult:(id)arg1 forType:(long long)arg2;
- (void)onStartBroadcastClicked;
- (void)submitModifications:(id)arg1;
- (id)buildCmdItemForItem:(id)arg1;
- (id)buildSwitchToPublicCmdItem;
- (void)syncLocalStateForItem:(id)arg1 cmdItem:(id)arg2 cmdRet:(id)arg3;
- (void)syncCoverLocalStateForItem:(id)arg1 cmdRet:(id)arg2;
- (void)syncFinderDataItemAndCoverIfNeeded:(BOOL)arg1;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)onCloseAction;
- (id)liveTask;
- (void)syncSwitchToPublicLocalState;
- (void)syncVisibilityLocalStateWithSettingInfo:(id)arg1;
- (void)reportSwitchToPublicLive;
- (id)finderLiveTaskId;
- (id)fromVC;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isTemporarilyDismissing;
- (void)setIsTemporarilyDismissing:(BOOL)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)cardScrollView;
- (void)setCardScrollView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)startBroadcastButton;
- (void)setStartBroadcastButton:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)rowViews;
- (void)setRowViews:(id)arg1;
- (id)editService;
- (void)setEditService:(id)arg1;
- (BOOL)hasReportedExpose;
- (void)setHasReportedExpose:(BOOL)arg1;
- (void).cxx_destruct;
@end
