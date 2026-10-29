@interface MMLiveRewardGiftAIGCOperationPanel : MMPageSheetBaseView <UIImagePickerControllerDelegate, UINavigationControllerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, WCActionSheetDelegate, MMFinderLiveAIGCGiftLogicPluginExt>
{
    BOOL _isRecustomize; // +0x8
    BOOL _showAfterGenerationConfirmButton; // +0x9
    BOOL _resultPagLoading; // +0xa
    id <MMLiveRewardGiftAIGCOperationPanelDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveAIGCGiftState * _aigcState; // +0x20
    unsigned long long _currentState; // +0x28
    UIView * _containerView; // +0x30
    UIView * _beforeGenerationContainer; // +0x38
    UIView * _generatingContainer; // +0x40
    UIView * _afterGenerationContainer; // +0x48
    UILabel * _beforeGenerationTitleLabel; // +0x50
    UIView * _placeholderPreviewContainer; // +0x58
    MMWebImageView * _placeholderPreviewImageView; // +0x60
    FixTitleColorButton * _uploadPhotoButton; // +0x68
    MMUIButton * _instructionButton; // +0x70
    MMLiveAIGCGiftProgressView * _progressView; // +0x78
    UILabel * _generatingSubtitleLabel; // +0x80
    MMWebImageView * _uploadedImagePreview; // +0x88
    FixTitleColorButton * _abandonButton; // +0x90
    FixTitleColorButton * _notifyMeButton; // +0x98
    UIView * _resultPreviewContainer; // +0xa0
    PAGView * _resultPreviewPagView; // +0xa8
    PAGFile * _resultPreviewPagFile; // +0xb0
    FixTitleColorButton * _recustomizeButton; // +0xb8
    FixTitleColorButton * _completeButton; // +0xc0
    UIImage * _selectedCoverImage; // +0xc8
    MMLiveResourceFetcherFanoutFlowAction * _resourceFetcher; // +0xd0
    NSMutableArray * _resultPendingCallbacks; // +0xd8
    MMLiveStorageCleanupPinningToken * _resultResourcesPinningToken; // +0xe0
}
- (id)initWithTaskId:(id)arg1 aigcState:(id)arg2;
- (id)giftItem;
- (id)liveTask;
- (long long)overrideUserInterfaceStyle;
- (void)setupUI;
- (id)leftNavButton;
- (void)onLeftButtonTapped;
- (void)setupMainContainer;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)setupBeforeGenerationContainer;
- (void)setupGeneratingContainer;
- (void)setupAfterGenerationContainer;
- (void)layoutSubviews;
- (void)layoutBeforeGenerationContainer;
- (void)layoutGeneratingContainer;
- (void)layoutAfterGenerationContainer;
- (double)contentWidth;
- (double)contentHeight;
- (double)pageSheetContentHeight;
- (void)switchToState:(unsigned long long)arg1;
- (void)resetContainerForReuse;
- (void)updateBeforeGenerationUI;
- (id)getDefaultGiftThumbImage;
- (void)updateGeneratingUI;
- (void)updateAfterGenerationUI;
- (void)updateAIGCState;
- (void)updateUIForStatus:(unsigned long long)arg1;
- (void)uploadPhotoButtonClicked;
- (void)instructionButtonClicked;
- (void)abandonButtonClicked;
- (void)notifyMeButtonClicked;
- (void)recustomizeButtonClicked;
- (void)completeButtonClicked;
- (void)showInstructionAlert;
- (void)mainImageClicked;
- (void)selectCoverImage;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (BOOL)startGenerateWithSelectedImage:(id)arg1 fromCamera:(BOOL)arg2 completeBlock:(id /* block */)arg3;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (BOOL)isFrontCamera;
- (void)onAIGCGiftStatusUpdated:(id)arg1 status:(unsigned long long)arg2;
- (void)loadPagAnimationForResultWithCompleteBlock:(id /* block */)arg1;
- (void)reportAIGCGiftAction:(unsigned long long)arg1 type:(unsigned long long)arg2 sourceType:(int)arg3 imgType:(int)arg4;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)aigcState;
- (void)setAigcState:(id)arg1;
- (unsigned long long)currentState;
- (void)setCurrentState:(unsigned long long)arg1;
- (BOOL)isRecustomize;
- (void)setIsRecustomize:(BOOL)arg1;
- (BOOL)showAfterGenerationConfirmButton;
- (void)setShowAfterGenerationConfirmButton:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)beforeGenerationContainer;
- (void)setBeforeGenerationContainer:(id)arg1;
- (id)generatingContainer;
- (void)setGeneratingContainer:(id)arg1;
- (id)afterGenerationContainer;
- (void)setAfterGenerationContainer:(id)arg1;
- (id)beforeGenerationTitleLabel;
- (void)setBeforeGenerationTitleLabel:(id)arg1;
- (id)placeholderPreviewContainer;
- (void)setPlaceholderPreviewContainer:(id)arg1;
- (id)placeholderPreviewImageView;
- (void)setPlaceholderPreviewImageView:(id)arg1;
- (id)uploadPhotoButton;
- (void)setUploadPhotoButton:(id)arg1;
- (id)instructionButton;
- (void)setInstructionButton:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)generatingSubtitleLabel;
- (void)setGeneratingSubtitleLabel:(id)arg1;
- (id)uploadedImagePreview;
- (void)setUploadedImagePreview:(id)arg1;
- (id)abandonButton;
- (void)setAbandonButton:(id)arg1;
- (id)notifyMeButton;
- (void)setNotifyMeButton:(id)arg1;
- (id)resultPreviewContainer;
- (void)setResultPreviewContainer:(id)arg1;
- (id)resultPreviewPagView;
- (void)setResultPreviewPagView:(id)arg1;
- (id)resultPreviewPagFile;
- (void)setResultPreviewPagFile:(id)arg1;
- (id)recustomizeButton;
- (void)setRecustomizeButton:(id)arg1;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)selectedCoverImage;
- (void)setSelectedCoverImage:(id)arg1;
- (id)resourceFetcher;
- (void)setResourceFetcher:(id)arg1;
- (BOOL)resultPagLoading;
- (void)setResultPagLoading:(BOOL)arg1;
- (id)resultPendingCallbacks;
- (void)setResultPendingCallbacks:(id)arg1;
- (id)resultResourcesPinningToken;
- (void)setResultResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end
