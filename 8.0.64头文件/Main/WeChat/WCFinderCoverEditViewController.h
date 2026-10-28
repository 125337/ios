@interface WCFinderCoverEditViewController : MMUIViewController <WCFinderCoverBasePreviewViewDelegate, EditImageTextInputDelegate, WCEditImageOperationDelegate, MMImagePickerManagerDelegate, WCActionSheetDelegate>
{
    int _selectCoverStyle; // +0x70
    WCFinderEditTextWidgetStateArray * _coverTextWidgetState; // +0x78
    id <WCFinderCoverEditViewControllerDelegate> _delegate; // +0x80
    WCFinderContact * _fromContact; // +0x88
    WCFinderPreviewEditVideoCompositionTask * _compositionTask; // +0x90
    WCFinderCoverEditOptionModel * _optionModel; // +0x98
    UILabel * _naviTitleLabel; // +0xa0
    UILabel * _naviDescLabel; // +0xa8
    UIButton * _previewBtn; // +0xb0
    WCFinderCoverVideoPreviewView * _finderVideoPreviewView; // +0xb8
    MJClipBundleCoverPreviewView * _mjVideoPreviewView; // +0xc0
    WCFinderCoverPhotoPreviewView * _photoPreviewView; // +0xc8
    MMUIButton * _modeSwitchBtn; // +0xd0
    MMUIButton * _addTextWidgetBtn; // +0xd8
    EditImageTextToolV2 * _currEditTextWidget; // +0xe0
    WCFinderVideoSliderView * _finderSliderView; // +0xe8
    MJClipBundleThumbnailSliderView * _mjSliderView; // +0xf0
    WCFinderCoverSelectAlbumView * _selectAlbumView; // +0xf8
    UIButton * _finishBtn; // +0x100
    MMUIButton * _cancelButton; // +0x108
    id /* block */ _chooseBlock; // +0x110
    WCEditImageSafeAreaScrollView * _eIScrollView; // +0x118
    NSURL * _photoCoverURL; // +0x120
    WCFinderCropRectModel * _cropRectModel; // +0x128
    UIImageView * _editPencilImageView; // +0x130
    MMUIView * _pencilCloseBtn; // +0x138
    WCFinderCoverSelectAlbumView * _selectVideoView; // +0x140
    WCFinderCoverBackGroundView * _gestureHandleView; // +0x148
}
+ (id)getCurPlayUrlWithDataItem:(id)arg1;
- (void)dealloc;
- (id)initWithParamsModel:(id)arg1;
- (BOOL)shouldShowPreviewBtn;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupNaviBarView;
- (id)naviTitleLabel;
- (id)naviDescLabel;
- (void)setSelectCoverStyle:(int)arg1;
- (void)_layoutTopSubivews;
- (void)_layoutBottomSubviews;
- (id)getBottomAreaMinYView;
- (void)_layoutContentSubviews;
- (void)layoutAllSubviews;
- (id)pencilCloseBtn;
- (id)editPencilImageView;
- (id)previewBtn;
- (id)videoPreviewView;
- (id)mjVideoPreviewView;
- (id)finderVideoPreviewView;
- (id)photoPreviewView;
- (id)finishBtn;
- (id)cancelButton;
- (id)sliderView;
- (id)mjSliderView;
- (id)finderSliderView;
- (id)selectAlbumView;
- (id)selectVideoView;
- (id)modeSwitchBtn;
- (id)addTextWidgetBtn;
- (id)genPostDataReportDict;
- (id)genBtn;
- (id)eIScrollView;
- (void)_updateModeSwitchBtn:(id)arg1;
- (void)loadCoverInfoByVideoURL:(id)arg1 specialImage:(id)arg2 photoCoverUrl:(id)arg3 coverTimeStamp:(double)arg4 compositionTask:(id)arg5 modeStyle:(int)arg6 cropRectModel:(id)arg7 chooseBlock:(id /* block */)arg8;
- (void)updateEditScrollArea;
- (void)openSelectPhotoAlbum;
- (void)updateSearchAssetPOIInfo:(id)arg1;
- (id)gestureHandleView;
- (void)setPhotoCoverURL:(id)arg1;
- (void)onClickModeSwitchAction;
- (id)currentPreviewView;
- (void)onClickAddTextWidgetAction;
- (id)getCoverEditImageResult;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (void)onClickFinishAction;
- (void)onClickCancelAction;
- (int)getModeCardShowStyle;
- (id)getCurSelectCoverPreviewModel;
- (void)cancelEditText:(id)arg1;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)editImageShowTextInputView:(id)arg1 displayStr:(id)arg2 lineColor:(id)arg3 textStyle:(unsigned long long)arg4;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (int)feedViewControllerScene;
- (BOOL)loadMediaInfoSuc;
- (CGRect)getAssetPreviewFrame;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)dismissAllPresentedViewControllers;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)clickPreviewBtn;
- (void)clickEditPencilImageView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateVideoPreviewViewWithCoverTimeStamp:(double)arg1;
- (BOOL)isUseMJMoviePlayerSeekVideoFramePrevious;
- (BOOL)_isMJCompositionTask;
- (void)_shutdownMJCompositionPlayback;
- (void)_startupMJCompositionPlaybackWithStartTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (id)coverTextWidgetState;
- (void)setCoverTextWidgetState:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fromContact;
- (void)setFromContact:(id)arg1;
- (id)compositionTask;
- (void)setCompositionTask:(id)arg1;
- (id)optionModel;
- (void)setOptionModel:(id)arg1;
- (void)setNaviTitleLabel:(id)arg1;
- (void)setNaviDescLabel:(id)arg1;
- (void)setPreviewBtn:(id)arg1;
- (void)setFinderVideoPreviewView:(id)arg1;
- (void)setMjVideoPreviewView:(id)arg1;
- (void)setPhotoPreviewView:(id)arg1;
- (void)setModeSwitchBtn:(id)arg1;
- (int)selectCoverStyle;
- (void)setAddTextWidgetBtn:(id)arg1;
- (id)currEditTextWidget;
- (void)setCurrEditTextWidget:(id)arg1;
- (void)setFinderSliderView:(id)arg1;
- (void)setMjSliderView:(id)arg1;
- (void)setSelectAlbumView:(id)arg1;
- (void)setFinishBtn:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (id /* block */)chooseBlock;
- (void)setChooseBlock:(id /* block */)arg1;
- (void)setEIScrollView:(id)arg1;
- (id)photoCoverURL;
- (id)cropRectModel;
- (void)setCropRectModel:(id)arg1;
- (void)setEditPencilImageView:(id)arg1;
- (void)setPencilCloseBtn:(id)arg1;
- (void)setSelectVideoView:(id)arg1;
- (void)setGestureHandleView:(id)arg1;
- (void).cxx_destruct;
@end
