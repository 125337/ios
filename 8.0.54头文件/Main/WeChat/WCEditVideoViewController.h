@interface WCEditVideoViewController : MMUIViewController <WCEditVideoLayoutViewDelegate>
{
    EditImageAttr * _originImageAttr; // +0x68
    BOOL _defaultOriginalSoundMute; // +0x70
    BOOL _shouldHideTopRightEntrance; // +0x71
    BOOL _shouldSkipAutoCrop; // +0x72
    BOOL _isEmoticonBoardSearchEnabled; // +0x73
    NSMutableArray * _assets; // +0x78
    NSMutableArray * _avAssets; // +0x80
    id <WCEditVideoViewControllerDelegate> _delegate; // +0x88
    unsigned long long _entranceType; // +0x90
    unsigned long long _editImageUIStyle; // +0x98
    NSArray * _initialEditWidgetStates; // +0xa0
    WCEditVideoLayoutView * _editVideoLayoutView; // +0xa8
    NSMutableArray * _thumbImages; // +0xb0
    NSMutableArray * _videoPaths; // +0xb8
    EditVideoAttr * _videoAttr; // +0xc0
    long long _cameraPosition; // +0xc8
    RecommendedMusicInfo * _patMusicInfo; // +0xd0
    WCEditViewControllerUIConfig * _uiConfig; // +0xd8
    NSString * _videoMD5String; // +0xe0
    struct _videoDuration; // +0xe8
}
+ (unsigned long long)convertToEntranceFromPickerScene:(int)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithAssets:(id)arg1;
- (id)initWithVideoPath:(id)arg1 thumbImage:(id)arg2;
- (id)initWithVideoPaths:(id)arg1 thumbImages:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)hidesStatusBar;
- (void)dealloc;
- (void)onEditVideoWithAssets:(id)arg1 videoPaths:(id)arg2 thumbImages:(id)arg3;
- (void)onEditVideos:(id)arg1;
- (void)onEditVideoAtPaths:(id)arg1 andThumbImages:(id)arg2;
- (id)asset;
- (id)avAsset;
- (id)thumbImage;
- (id)videoPath;
- (BOOL)isEditingMultiVideo;
- (id)getEditResultMultiVideoComposition;
- (id)getEditVideoAttr;
- (void)resetEditVideoAttr;
- (id)snapshotAtVideoTime:(double)arg1;
- (id)generateWidgetStateList;
- (void)showEditVideoViewOn:(id)arg1;
- (void)loadDurationWithAsset:(id)arg1 path:(id)arg2 complete:(id /* block */)arg3;
- (void)loopPlay;
- (void)cancelLoopPlay;
- (void)onResigned:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (id)currentViewController;
- (void)onCropDone:(struct)arg1;
- (void)onCropCancel;
- (void)onSeekTime:(double)arg1;
- (void)onCropTimeChange:(struct)arg1;
- (void)onChooseVideoBGMDone:(id)arg1;
- (void)onOriginSoundChange:(BOOL)arg1;
- (void)onClickEditVideoCancelButton;
- (void)onClickLaunchMiaoJianButton;
- (void)onClickJumpMoreButton:(id)arg1;
- (void)onClickSecondCutPromotionButton:(long long)arg1 musicId:(id)arg2;
- (void)_realTriggerVideoPreCompose;
- (void)triggerVideoPreCompose;
- (void)cancelVideoPreCompose;
- (void)onClickEditVideoDoneButton;
- (CGRect)getFullScreenRectInScreen;
- (CGRect)getCropRectInScreen;
- (id)horizontalVideoMd5Str;
- (struct)videoLayoutViewGetVideoDuration:(id)arg1;
- (struct)getEditedVideoTimeRange;
- (id)getVideoAttr;
- (CGSize)getOriginalAssetSize;
- (CGSize)getImageRatioSize;
- (id)getThumbImage;
- (id)getAssetUrl;
- (id)getAssetId;
- (struct)editedTimeRange;
- (struct)originalTimeRange;
- (float)getOutputTime;
- (double)getMinDuration;
- (BOOL)isExceedTimelineTimeLimit;
- (void)willMoveToWindow:(id)arg1;
- (void)returnToTimelineOrAlbum;
- (struct)getEditedTimeRange;
- (BOOL)isVideoCompositionEditing;
- (void)debugTap;
- (id)buildVideoCompositionAttr;
- (id)assets;
- (void)setAssets:(id)arg1;
- (id)avAssets;
- (void)setAvAssets:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (id)initialEditWidgetStates;
- (void)setInitialEditWidgetStates:(id)arg1;
- (id)editVideoLayoutView;
- (void)setEditVideoLayoutView:(id)arg1;
- (struct)videoDuration;
- (void)setVideoDuration:(struct)arg1;
- (id)thumbImages;
- (void)setThumbImages:(id)arg1;
- (id)videoPaths;
- (void)setVideoPaths:(id)arg1;
- (id)videoAttr;
- (void)setVideoAttr:(id)arg1;
- (long long)cameraPosition;
- (void)setCameraPosition:(long long)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (BOOL)defaultOriginalSoundMute;
- (void)setDefaultOriginalSoundMute:(BOOL)arg1;
- (BOOL)shouldHideTopRightEntrance;
- (void)setShouldHideTopRightEntrance:(BOOL)arg1;
- (BOOL)shouldSkipAutoCrop;
- (void)setShouldSkipAutoCrop:(BOOL)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (id)videoMD5String;
- (void)setVideoMD5String:(id)arg1;
- (void).cxx_destruct;
@end

