@interface MMTemplateMsgAuthScopeSettingViewController : ZZFLEXTableViewController <WAPageSheetDelegate, MessagePageSheetAdapterDelegate>
{
    unsigned int _uiType; // +0x70
    MMTemplateMsgScopeItem * _scopeItem; // +0x78
    id /* block */ _selectedAction; // +0x80
    BrandTemplateMsgAuthSettingPageModel * _pageModel; // +0x88
    WATemplateAudioPlayer * _audioPlayer; // +0x90
}
- (id)initWithScopeItem:(id)arg1 pageModel:(id)arg2 selectedAction:(id /* block */)arg3;
- (id)initWithScopeItem:(id)arg1 pageModel:(id)arg2 uiType:(unsigned int)arg3 selectedAction:(id /* block */)arg4;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setScopeItem:(id)arg1;
- (void)reloadUI;
- (void)resetScope;
- (void)enterHistoryMsgList;
- (void)showDemoView;
- (void)showAudioAlert;
- (void)playAudio;
- (id)audioPlayer;
- (BOOL)isCurrentSceneNeedDataReporter;
- (void)pageSheetWillShow:(id)arg1;
- (void)pageSheetWillClose:(id)arg1;
- (void)pageSheetWillAppear:(id)arg1;
- (id)scopeItem;
- (id /* block */)selectedAction;
- (void)setSelectedAction:(id /* block */)arg1;
- (id)pageModel;
- (void)setPageModel:(id)arg1;
- (unsigned int)uiType;
- (void)setUiType:(unsigned int)arg1;
- (void)setAudioPlayer:(id)arg1;
- (void).cxx_destruct;
@end
