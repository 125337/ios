@interface WCFinderTemplateProcessViewController : MMUIViewController <WCFinderTemplateChooseViewDelegate, WCFinderMusicSelectViewDelegate, WCFinderTemplateMusicSelectEntranceViewDelegate, WCFinderFullScreenEditVideoViewControllerDelegate, WCFinderFullScreenEditImageViewControllerDelegate, WCFinderMusicSelectViewDataSource>
{
    BOOL _exporting; // +0x70
    id <WCFinderTemplateProcessViewControllerDelegate> _delegate; // +0x78
    UIImage * _backgroundThumbImg; // +0x80
    unsigned long long _enterScene; // +0x88
    UIViewController * _nextPushViewController; // +0x90
    WCFinderTemplateVideoEditViewModel * _viewModel; // +0x98
    WCFinderTemplateChooseView * _templateChooseView; // +0xa0
    WCFinderTemplateProcessVCParams * _params; // +0xa8
    WCFinderTemplateMusicSelectEntranceView * _musicEntranceView; // +0xb0
    WCFinderMusicSelectView * _musicView; // +0xb8
    UIImageView * _backgroundImgView; // +0xc0
    MMUIButton * _doneBtn; // +0xc8
    MMUIButton * _cancelBtn; // +0xd0
    unsigned long long _enterTime; // +0xd8
    NSString * _preSelectedTemplateID; // +0xe0
    NSString * _traceId; // +0xe8
}
- (id)initWithAssetInfos:(id)arg1 firstVideoPath:(id)arg2;
- (id)initWithAssetInfos:(id)arg1 firstVideoPath:(id)arg2 optionalParams:(id)arg3;
- (void)viewDidLoad;
- (id)getReportExtInfoWithTemplateId:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setupNavigationUI;
- (void)enableNavigationUI;
- (void)disableNavigationUI;
- (double)musicViewBottom;
- (double)templateViewBottom;
- (void)setupSubViews;
- (void)setupBackGroundImg;
- (void)_setupBackGroundImage:(id)arg1;
- (unsigned long long)musicSelectViewOption;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)setTopViewHidden:(BOOL)arg1;
- (void)createVideoWithAppointTemplates;
- (void)createVideoAndFetchReccommendTemplates;
- (void)returnToThisVC;
- (void)updateMusicEntranceViewUI;
- (void)updateOptions;
- (void)onDone;
- (void)onCancel;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (id)finderTemplateChooseViewGetViewModel;
- (BOOL)finderTemplateChooseView:(id)arg1 canSelectTemplateAtIndex:(unsigned long long)arg2;
- (void)finderTemplateChooseView:(id)arg1 didSelectTemplateAtIndex:(unsigned long long)arg2;
- (void)finderTemplateChooseView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (id)getExposeAndClickExtInfo;
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
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (void)finderEditVideoVCDidClickDoneBtn;
- (void)finderEditVideoVCDidClickCancelBtn:(id)arg1;
- (void)finderEditImageVCDidClickDoneBtn;
- (void)finderEditImageVCDidClickCancelBtn;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundThumbImg;
- (void)setBackgroundThumbImg:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)nextPushViewController;
- (void)setNextPushViewController:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)templateChooseView;
- (void)setTemplateChooseView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)musicEntranceView;
- (void)setMusicEntranceView:(id)arg1;
- (id)musicView;
- (void)setMusicView:(id)arg1;
- (id)backgroundImgView;
- (void)setBackgroundImgView:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (BOOL)isExporting;
- (void)setExporting:(BOOL)arg1;
- (id)preSelectedTemplateID;
- (void)setPreSelectedTemplateID:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (void).cxx_destruct;
@end
