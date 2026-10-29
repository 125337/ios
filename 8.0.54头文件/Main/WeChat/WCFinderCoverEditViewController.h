@interface WCFinderCoverEditViewController : MMUIViewController <WCFinderCoverBasePreviewViewDelegate, EditImageTextInputDelegate, WCEditImageOperationDelegate, MMImagePickerManagerDelegate, WCActionSheetDelegate>
{
    BOOL _xlabShowSelectAlbumCover; // +0x68
    BOOL _xlabShowPreviewBtn; // +0x69
    int _selectCoverStyle; // +0x6c
    WCFinderEditTextWidgetStateArray * _coverTextWidgetState; // +0x70
    id <WCFinderCoverEditViewControllerDelegate> _delegate; // +0x78
    WCFinderContact * _fromContact; // +0x80
    WCFinderCoverEditOptionModel * _optionModel; // +0x88
    UILabel * _naviTitleLabel; // +0x90
    UILabel * _naviDescLabel; // +0x98
    UIButton * _previewBtn; // +0xa0
    WCFinderCoverVideoPreviewView * _videoPreviewView; // +0xa8
    WCFinderCoverPhotoPreviewView * _photoPreviewView; // +0xb0
    MMUIButton * _modeSwitchBtn; // +0xb8
    MMUIButton * _addTextWidgetBtn; // +0xc0
    EditImageTextToolV2 * _currEditTextWidget; // +0xc8
    WCFinderVideoSliderView * _sliderView; // +0xd0
    WCFinderCoverSelectAlbumView * _selectAlbumView; // +0xd8
    UIButton * _finishBtn; // +0xe0
    MMUIButton * _cancelButton; // +0xe8
    id /* block */ _chooseBlock; // +0xf0
    WCEditImageSafeAreaScrollView * _eIScrollView; // +0xf8
    NSURL * _photoCoverURL; // +0x100
    WCFinderCropRectModel * _cropRectModel; // +0x108
    UIImageView * _editPencilImageView; // +0x110
    MMUIView * _pencilCloseBtn; // +0x118
    WCFinderCoverSelectAlbumView * _selectVideoView; // +0x120
    WCFinderCoverBackGroundView * _gestureHandleView; // +0x128
}
+ (id)getCurPlayUrlWithDataItem:(id)arg1;
- (id)initWithParamsModel:(id)arg1;
- (void)_loadSwitchConfig;
- (BOOL)shouldShowSelectAlbumCover;
- (BOOL)shouldShowPreviewBtn;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupNaviBarView;
- (id)naviTitleLabel;
- (id)naviDescLabel;
- (void)setSelectCoverStyle:(int)arg1;
- (void)layoutAllSubviews;
- (id)pencilCloseBtn;
- (id)editPencilImageView;
- (id)previewBtn;
- (id)videoPreviewView;
- (id)photoPreviewView;
- (id)finishBtn;
- (id)cancelButton;
- (id)sliderView;
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
- (id)coverTextWidgetState;
- (void)setCoverTextWidgetState:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fromContact;
- (void)setFromContact:(id)arg1;
- (id)optionModel;
- (void)setOptionModel:(id)arg1;
- (BOOL)xlabShowSelectAlbumCover;
- (void)setXlabShowSelectAlbumCover:(BOOL)arg1;
- (BOOL)xlabShowPreviewBtn;
- (void)setXlabShowPreviewBtn:(BOOL)arg1;
- (void)setNaviTitleLabel:(id)arg1;
- (void)setNaviDescLabel:(id)arg1;
- (void)setPreviewBtn:(id)arg1;
- (void)setVideoPreviewView:(id)arg1;
- (void)setPhotoPreviewView:(id)arg1;
- (void)setModeSwitchBtn:(id)arg1;
- (int)selectCoverStyle;
- (void)setAddTextWidgetBtn:(id)arg1;
- (id)currEditTextWidget;
- (void)setCurrEditTextWidget:(id)arg1;
- (void)setSliderView:(id)arg1;
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

