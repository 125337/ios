@interface CBTAsstSettingViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ICBTAssistVoiceUpdateExt, ICBTAssistModelUpdateExt>
{
    BOOL _hasChanged; // +0x70
    BOOL _hasAppliedInitialEmbeddedOffset; // +0x71
    BOOL _embeddedMode; // +0x72
    int _switchStates; // +0x74
    NSArray * _settingItems; // +0x78
    UIScrollView * _scrollView; // +0x80
    UILabel * _headerLabel; // +0x88
    MMUIView * _voiceEntranceCellView; // +0x90
    UILabel * _voiceTitleLabel; // +0x98
    MMUILabel * _titleLabel; // +0xa0
    MMUIImageView * _rightCell; // +0xa8
    UILabel * _voiceHeaderLabel; // +0xb0
    MMUIView * _modelEntranceCellView; // +0xb8
    UILabel * _modelTitleLabel; // +0xc0
    MMUILabel * _modelLabel; // +0xc8
    MMUIImageView * _modelRightCell; // +0xd0
    NSMutableArray * _dataPermission; // +0xd8
    UIView * _contentView; // +0xe0
    MMTableView * _tableView; // +0xe8
}
- (id)init;
- (id)initWithEmbeddedMode:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)buildScrollView;
- (void)layoutHeaderLabel;
- (void)layoutTableView;
- (void)layoutVoiceSetting;
- (void)layoutModelSetting;
- (void)openSelectVoicePage:(id)arg1;
- (void)openSelectModelPage:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)switchChanged:(id)arg1;
- (int)switchTypeValueForRow:(long long)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)uploadAllSwitchStates;
- (void)fetchData;
- (void)fetchVoiceInfo;
- (void)onUpdateVoice:(id)arg1;
- (void)onUpdateModel:(id)arg1;
- (void)fetchModelInfo;
- (id)settingItems;
- (void)setSettingItems:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (int)switchStates;
- (void)setSwitchStates:(int)arg1;
- (id)voiceEntranceCellView;
- (void)setVoiceEntranceCellView:(id)arg1;
- (id)voiceTitleLabel;
- (void)setVoiceTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rightCell;
- (void)setRightCell:(id)arg1;
- (id)voiceHeaderLabel;
- (void)setVoiceHeaderLabel:(id)arg1;
- (id)modelEntranceCellView;
- (void)setModelEntranceCellView:(id)arg1;
- (id)modelTitleLabel;
- (void)setModelTitleLabel:(id)arg1;
- (id)modelLabel;
- (void)setModelLabel:(id)arg1;
- (id)modelRightCell;
- (void)setModelRightCell:(id)arg1;
- (id)dataPermission;
- (void)setDataPermission:(id)arg1;
- (BOOL)hasChanged;
- (void)setHasChanged:(BOOL)arg1;
- (BOOL)hasAppliedInitialEmbeddedOffset;
- (void)setHasAppliedInitialEmbeddedOffset:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)embeddedMode;
- (void)setEmbeddedMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
