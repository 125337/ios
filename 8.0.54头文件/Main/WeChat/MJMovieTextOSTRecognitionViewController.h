@interface MJMovieTextOSTRecognitionViewController : UIViewController <MJTimelineViewControllerDelegate, MJActionPanelMainMenuViewDelegate, MJMovieTextActionProtocol>
{
    BOOL _isAppearing; // +0x8
    float _recognitionFakeProgress; // +0xc
    id <MJMovieTextOSTRecognitionViewControllerDelegate> _delegate; // +0x10
    unsigned long long _status; // +0x18
    MJTimelineViewController * _timelineVC; // +0x20
    MJTimelineViewModel * _timelineVM; // +0x28
    MJPlaybackViewModel * _playbackVM; // +0x30
    NSString * _currentSessionID; // +0x38
    MMUIView * _backgroundViewInitial; // +0x40
    MMUIImageView * _startRecognitionTipImageView; // +0x48
    MMUILabel * _startRecognitionTipLabel; // +0x50
    MMUIButton * _startRecognitionButton; // +0x58
    MMUIView * _backgroundViewRunning; // +0x60
    WCProgressCircleView * _recognitionProgressView; // +0x68
    MMUILabel * _recognitionProgressLabel; // +0x70
    MMUIButton * _cancelRecognitionButton; // +0x78
    MMTimer * _recognitionFakeProgressTimer; // +0x80
    MMUIView * _backgroundViewSucceed; // +0x88
    MJActionPanelMainMenuView * _menuView; // +0x90
    MJAudioExtractor * _audioExtractor; // +0x98
}
+ (id)genSessionID;
+ (BOOL)isSegmentCaptionExtractable:(id)arg1;
+ (void)extractCaptionItemsFromAudioData:(id)arg1 audioID:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)cachedCaptionsWithMediaFileURL:(id)arg1 timeRange:(struct)arg2;
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;
- (void)viewDidLoad;
- (void)commonInit;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupForWillAppear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setupForWillDisappear;
- (void)setupStatus;
- (void)setupViews;
- (void)setupViewsForInitialStatus;
- (void)setupViewsForRunningStatus;
- (void)setupViewsForSucceedStatus;
- (void)removeViewsIfNeeded;
- (void)bindViews;
- (void)unbindViews;
- (BOOL)enterStatus:(unsigned long long)arg1;
- (BOOL)canEnterStatus:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)syncStatusToTimelineVM;
- (void)setTimelineVC:(id)arg1;
- (void)setIsAppearing:(BOOL)arg1;
- (void)setCurrentSessionID:(id)arg1;
- (BOOL)checkIfSessionExpired:(id)arg1;
- (id)menuItemsEnabled;
- (id)menuItemsDisabled;
- (id)menuItemsWithSegmentVM:(id)arg1 time:(struct)arg2;
- (void)updateMenuWithSegmentVM:(id)arg1;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (void)updateOnSkimTimeDidChange:(struct)arg1;
- (void)updateOnPlaybackTimeDidChange:(struct)arg1;
- (void)updateOnIsPlayingDidChange:(BOOL)arg1;
- (void)showHandleboxForCurrentCaptionSegment;
- (void)reloadData:(id)arg1;
- (void)resetPreview;
- (BOOL)tryFocusOnAndHighlightCurrentCaptionSegment;
- (void)timelineViewControllerDidDoubleTap:(id)arg1;
- (void)timelineViewControllerDidSelectRetryOSTRecognition:(id)arg1;
- (void)startRecognitionButtonDidTouchUpInside:(id)arg1;
- (void)tapOnStartRecognitionButton;
- (void)updateRecognitionFakeProgressByOnePercent;
- (void)startFakeProgressTimer;
- (void)stopFakeProgressTimer;
- (void)startRecognition;
- (void)cancelRecognitionButtonDidTouchUpInside:(id)arg1;
- (void)cancelRecognition;
- (void)menuViewDidSelectRemove;
- (void)menuViewDidSelectEditCaptionText;
- (void)menuViewDidSelectEditCaptionStyle;
- (unsigned long long)numberOfCaptionExtractableSegments;
- (void)extractCaptionsWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)postProcessCaptionsWithClipSegment:(id)arg1 captionGroups:(id)arg2;
- (void)leaveEditingStateIfNeeded;
- (BOOL)isAppearing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)status;
- (id)timelineVC;
- (id)timelineVM;
- (void)setTimelineVM:(id)arg1;
- (id)playbackVM;
- (void)setPlaybackVM:(id)arg1;
- (id)currentSessionID;
- (id)backgroundViewInitial;
- (void)setBackgroundViewInitial:(id)arg1;
- (id)startRecognitionTipImageView;
- (void)setStartRecognitionTipImageView:(id)arg1;
- (id)startRecognitionTipLabel;
- (void)setStartRecognitionTipLabel:(id)arg1;
- (id)startRecognitionButton;
- (void)setStartRecognitionButton:(id)arg1;
- (id)backgroundViewRunning;
- (void)setBackgroundViewRunning:(id)arg1;
- (id)recognitionProgressView;
- (void)setRecognitionProgressView:(id)arg1;
- (id)recognitionProgressLabel;
- (void)setRecognitionProgressLabel:(id)arg1;
- (id)cancelRecognitionButton;
- (void)setCancelRecognitionButton:(id)arg1;
- (float)recognitionFakeProgress;
- (void)setRecognitionFakeProgress:(float)arg1;
- (id)recognitionFakeProgressTimer;
- (void)setRecognitionFakeProgressTimer:(id)arg1;
- (id)backgroundViewSucceed;
- (void)setBackgroundViewSucceed:(id)arg1;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)audioExtractor;
- (void)setAudioExtractor:(id)arg1;
- (void).cxx_destruct;
@end

