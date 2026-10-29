@interface MMLiveScreenSharingLogic : NSObject <MMLiveTaskMgrExt, WCFileBrowseDelegate, UIDocumentPickerDelegate, MMLiveScreenSharingViewControllerDelegate, MMLiveBizArticleListViewControllerDelegate>
{
    id <MMLiveScreenSharingLogicOperationDelegate> _operationDelegate; // +0x8
    id <MMLiveScreenSharingLogicUIDelegate> _UIDelegate; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    MMLiveScreenSharingViewController * _presentationScreenSharingViewController; // +0x20
    NSDate * _currentReportedStartTime; // +0x28
    NSString * _currentReportedFileType; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)clearLive;
- (id)liveTask;
- (id)finderLiveTask;
- (id)operationViewModel;
- (id)bizUserInfo;
- (BOOL)isSharingFiles;
- (void)selectFiles;
- (void)selectActionsWhileSharingFiles;
- (void)stopSharingFiles;
- (id)fileDetailLogicControllerWithBrowseInfo:(id)arg1;
- (id)fileDetailLogicControllerWithFileURL:(id)arg1;
- (BOOL)supportsFileTypeForLogicController:(id)arg1;
- (BOOL)supportsImageTypeForFileURL:(id)arg1;
- (BOOL)supportsPDFFileWithPath:(id)arg1;
- (void)showToastIfFileTypeNotSupported;
- (id)createFileDetailViewControllerWithLogicController:(id)arg1;
- (id)createWebViewPresetUI;
- (id)createWebViewControllerWithWebURL:(id)arg1;
- (id)createWebViewControllerWithBizArticle:(id)arg1 visibleViewController:(id)arg2;
- (void)openFileBrowser;
- (void)openDocumentPickerViewController;
- (void)openBrandArticleListViewController;
- (void)openFilePreparationFromViewController:(id)arg1 withBrowseInfo:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withFileURL:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withDocumentURL:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withImageURL:(id)arg2;
- (void)openFilePreparationFromAssetPickerController:(id)arg1 withAssetInfo:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withWebURL:(id)arg2 title:(id)arg3;
- (void)openFilePreparationFromViewController:(id)arg1 withBizArticle:(id)arg2;
- (void)showAndStartFilePresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartDocumentPresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartImagePresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartAssetPresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartWebPresentationFromPreparationViewController:(id)arg1;
- (void)showAndStartBizArticlePresentationFromPreparationViewController:(id)arg1;
- (void)hideAndStopFilePresentation;
- (BOOL)isGivingFilePresentation;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (void)onFileBrowser:(id)arg1 assetPickerController:(id)arg2 clickAssetInfo:(id)arg3;
- (void)onFileBrowseOpeniCloud;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)brandArticleListViewController:(id)arg1 didSelectWithArticle:(id)arg2;
- (void)brandArticleListViewController:(id)arg1 searchViewController:(id)arg2 didSelectWithArticle:(id)arg3;
- (void)liveScreenSharingViewControllerDidClickStartButton:(id)arg1;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)reportFilePresentationDidStartWithFileType:(id)arg1;
- (void)reportFilePresentationDidStop;
- (id)reportedFileTypeForLogicController:(id)arg1;
- (id)reportedFileTypeForImage;
- (id)reportedFileTypeForAssetInfo:(id)arg1;
- (id)reportedFileTypeForBiz;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)UIDelegate;
- (void)setUIDelegate:(id)arg1;
- (id)taskId;
- (id)presentationScreenSharingViewController;
- (void)setPresentationScreenSharingViewController:(id)arg1;
- (id)currentReportedStartTime;
- (void)setCurrentReportedStartTime:(id)arg1;
- (id)currentReportedFileType;
- (void)setCurrentReportedFileType:(id)arg1;
- (void).cxx_destruct;
@end

