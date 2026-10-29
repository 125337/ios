@interface WCFinderTemplateVideoEditViewController : MMUIViewController <WCFinderTemplateMusicSelectEntranceViewDelegate, WCFinderMusicSelectViewDelegate, WCFinderMusicSelectViewDataSource, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _exporting; // +0x70
    id <WCFinderTemplateVideoEditVCDelegate> _delegate; // +0x78
    NSString * _templateId; // +0x80
    UIImage * _backGroundThumbImg; // +0x88
    WCFinderTemplateVideoEditViewModel * _viewModel; // +0x90
    NSString * _selectedMusicId; // +0x98
    WCFinderTemplateMusicSelectEntranceView * _musicEntranceView; // +0xa0
    WCFinderMusicSelectView * _musicView; // +0xa8
    UIImageView * _backgroundImgView; // +0xb0
    unsigned long long _enterTime; // +0xb8
    NSString * _traceId; // +0xc0
    unsigned long long _eventId; // +0xc8
}
- (id)initWithAssetInfos:(id)arg1 templateId:(id)arg2 musicId:(id)arg3 eventId:(unsigned long long)arg4 firstVideoPath:(id)arg5;
- (void)viewDidLoad;
- (id)getReportExtInfoWithTemplateId:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)createTemplateVideo;
- (void)setupBackGroundView;
- (void)setupBackGroundImage;
- (void)setupMusicUI;
- (double)getMusicEntranceViewBottom;
- (double)getMusicViewBottom;
- (void)updateMusicUI;
- (void)setupCancelBtn;
- (void)setupNavigationUI;
- (void)onDone;
- (void)onCancel;
- (void)updateOptions;
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (void)finderTemplateMuiscViewDidClickCloseBtn;
- (void)finderTemplateMuiscViewDidClickOstBtn;
- (void)finderTemplateMuiscViewDidClickMusic;
- (void)finderTemplateMuiscViewDidChangeToANewIndex:(unsigned long long)arg1;
- (id)finderTemplateMuiscViewGetViewController;
- (void)finderTemplateMusicViewDidStartSearchMusic;
- (void)finderTemplateMusicViewDidCancelSearchMusic;
- (void)finderTemplateMusicViewDidAddMusicFromSearchModel:(id)arg1;
- (unsigned long long)musicCount;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (BOOL)isOSTMuted;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)backGroundThumbImg;
- (void)setBackGroundThumbImg:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)selectedMusicId;
- (void)setSelectedMusicId:(id)arg1;
- (id)musicEntranceView;
- (void)setMusicEntranceView:(id)arg1;
- (id)musicView;
- (void)setMusicView:(id)arg1;
- (id)backgroundImgView;
- (void)setBackgroundImgView:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (BOOL)isExporting;
- (void)setExporting:(BOOL)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
