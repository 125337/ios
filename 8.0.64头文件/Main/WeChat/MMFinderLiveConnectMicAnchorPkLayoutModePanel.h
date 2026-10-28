@interface MMFinderLiveConnectMicAnchorPkLayoutModePanel : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMLiveTaskMgrExt>
{
    BOOL _modeChanged; // +0x8
    id <MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    unsigned long long _originalMode; // +0x20
    unsigned long long _selectedMode; // +0x28
    unsigned long long _micLayoutMode; // +0x30
    MMFinderLiveConnectMicModePreviewView * _previewView; // +0x38
    UITableView * _modeSettingTableView; // +0x40
}
- (id)initWithTaskId:(id)arg1 mode:(unsigned long long)arg2;
- (void)setupPageSheetConfig;
- (id)createRightButton;
- (id)dequeueGenericCell;
- (void)updateTableSelection;
- (void)updatePreviewViewWithMicUsersInfo:(id)arg1;
- (id)liveTask;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)dealloc;
- (void)onConfirmed;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)originalMode;
- (void)setOriginalMode:(unsigned long long)arg1;
- (unsigned long long)selectedMode;
- (void)setSelectedMode:(unsigned long long)arg1;
- (unsigned long long)micLayoutMode;
- (void)setMicLayoutMode:(unsigned long long)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)modeSettingTableView;
- (void)setModeSettingTableView:(id)arg1;
- (BOOL)modeChanged;
- (void)setModeChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
