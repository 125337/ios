@interface EditVideoLogicItem : MMObject <EditVideoInitialViewDelegate>
{
    EditVideoAttr * _videoAttr; // +0x8
    UIImage * _thumbImage; // +0x10
    MMAsset * _asset; // +0x18
    EditVideoInitialView * _editVideoInitialView; // +0x20
    EditImageAttr * _originImageAttr; // +0x28
    struct _videoDuration; // +0x30
    struct _editedTimeRange; // +0x48
    struct _originalTimeRange; // +0x78
    BOOL _isEmoticonBoardSearchEnabled; // +0xa8
    BOOL _hideVideoOriginalSound; // +0xa9
    AVAsset * _avAsset; // +0xb0
    id <EditVideoLogicItemDelegate> _delegate; // +0xb8
    id <EditVideoOptionsDelegate> _optionsDelegate; // +0xc0
    unsigned long long _entranceType; // +0xc8
    unsigned long long _editImageUIStyle; // +0xd0
    NSString * _title; // +0xd8
    WCEditViewControllerUIConfig * _uiConfig; // +0xe0
}
- (id)init;
- (void)dealloc;
- (void)onEditVideo:(id)arg1 onView:(id)arg2;
- (void)onEditVideoAtPath:(id)arg1 andThumbImage:(id)arg2 onView:(id)arg3;
- (void)getEditedResult:(id /* block */)arg1;
- (void)setEditImageToolBarHidden:(BOOL)arg1;
- (id)getEditVideoAttr;
- (void)resetEditVideoAttr;
- (void)clearMusic;
- (void)hideVideoOriginalSound:(BOOL)arg1;
- (void)onEditVideoFinish;
- (void)showEditVideoViewOn:(id)arg1;
- (void)loadDurationComplete:(id /* block */)arg1;
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
- (id /* block */)onWillClickEditVideoDoneButton;
- (void)onClickEditVideoDoneButton;
- (void)onClickSaveEditVideoToAlbumActionSheet:(id /* block */)arg1;
- (struct)getEditedVideoTimeRange;
- (id)getVideoAttr;
- (CGSize)getImageRatioSize;
- (id)getThumbImage;
- (id)getAssetUrl;
- (id)getAssetId;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (void)willMoveToWindow:(id)arg1;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)optionsDelegate;
- (void)setOptionsDelegate:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (BOOL)hideVideoOriginalSound;
- (void)setHideVideoOriginalSound:(BOOL)arg1;
- (void).cxx_destruct;
@end
