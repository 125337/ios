@interface MMFinderLiveFansGroupAnchorEditPanel : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMFinderLiveFansGroupGiftCustomizationPanelDelegate, MMFinderLiveFansGroupFansNoticeModifyPanelDelegate, MMFinderLiveFansGroupAnchorEditSwitchCellDelegate, MMFinderLiveFansGroupAnchorCardEditPanelDelegate>
{
    BOOL _cardDebugSwitch; // +0x8
    id <MMFinderLiveFansGroupAnchorEditPanelDelegate> _delegate; // +0x10
    id <MMFinderLiveFansGroupOperationReportDelegate> _reportDelegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMFinderLiveFansGroupAnchorEditViewModel * _viewModel; // +0x28
    UITableView * _tableView; // +0x30
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo * _noticeInfo; // +0x38
    NSArray * _sectionTypes; // +0x40
}
- (id)initWithTaskId:(id)arg1 viewModel:(id)arg2;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (double)calcDetailViewHeight;
- (void)updateContentHeightIfNeeded;
- (void)resetSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)giftItemUpdated:(id)arg1 byCustomizationPanel:(id)arg2;
- (void)fansNoticeModifyPanel:(id)arg1 didFinishEditingWithInfo:(id)arg2;
- (void)anchorCardEditPanelDidFinishWithVisiblity:(unsigned long long)arg1;
- (void)toggleAnchorCardEnabled:(BOOL)arg1 visiblity:(unsigned long long)arg2;
- (id)currentLiveTask;
- (BOOL)hasCustomGiftSection;
- (BOOL)hasEditFansNoticeSection;
- (BOOL)hasAnchorCardSection;
- (unsigned long long)getCurrentAnchorCardVisibility;
- (unsigned long long)sectionTypeWithIndex:(long long)arg1;
- (id)sectionIndexFromType:(unsigned long long)arg1;
- (void)setupPageSheetConfig;
- (void)registerReusableComponentsForTableView:(id)arg1;
- (void)preloadCustomGiftAnimations;
- (id)groupNameCellWithName:(id)arg1 forTableView:(id)arg2;
- (id)giftItemCellWithGiftItem:(id)arg1 forTableView:(id)arg2 withIndexPath:(id)arg3;
- (id)fansNoticeCellWithInfo:(id)arg1 forTableView:(id)arg2 withIndexPath:(id)arg3;
- (id)anchorCardCellWithContact:(id)arg1 forTableView:(id)arg2 withIndexPath:(id)arg3;
- (void)configCellCornersAndSepLine:(id)arg1 withIndexPath:(id)arg2 maxRowCount:(unsigned long long)arg3;
- (void)navigateToNameModifyPanel;
- (void)navigateToGiftCustomizationPanelForGift:(id)arg1;
- (void)handleSelectFansNoticeEdit;
- (void)handleSelectAnchorCardEdit;
- (void)_doOpenFansNoticeModifyPanel;
- (BOOL)isCurrentNoticeOn;
- (BOOL)isCurrentCardShow;
- (void)handleNoticeSwitchChange:(BOOL)arg1 cell:(id)arg2;
- (void)handleCardSwitchChange:(BOOL)arg1 cell:(id)arg2;
- (void)fansGroupAnchorEditSwitchCell:(id)arg1 switchValueDidChange:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)sectionTypes;
- (void)setSectionTypes:(id)arg1;
- (BOOL)cardDebugSwitch;
- (void)setCardDebugSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end

