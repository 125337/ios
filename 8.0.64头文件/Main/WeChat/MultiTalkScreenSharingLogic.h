@interface MultiTalkScreenSharingLogic : NSObject <MMHalfScreenGuideViewDelegate, WCFileBrowseDelegate, UIDocumentPickerDelegate, MultiTalkScreenSharingPreparationViewControllerDelegate, MultiTalkScreenSharingPresentationViewControllerDelegate>
{
    unsigned int _sessionID; // +0x8
    id <MultiTalkScreenSharingLogicDelegate> _delegate; // +0x10
    MMHalfScreenGuideView * _guideView; // +0x18
    MultiTalkScreenSharingPresentationViewController * _presentingPresentationViewController; // +0x20
}
- (void)cleanUp;
- (void)updateTalkingUsernames:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)group;
- (id)chatroomName;
- (id)reportGroupId;
- (void)dealloc;
- (void)shareFile;
- (BOOL)shouldShowBadge;
- (BOOL)hasShowedGuide;
- (void)didShowGuide;
- (BOOL)showGuideIfNeeded;
- (id)fileDetailLogicControllerWithBrowseInfo:(id)arg1;
- (id)fileDetailLogicControllerWithFileURL:(id)arg1;
- (BOOL)supportsFileTypeForLogicController:(id)arg1;
- (BOOL)supportsPDFFileWithPath:(id)arg1;
- (void)showToastIfFileTypeNotSupported;
- (id)createFileDetailViewControllerWithLogicController:(id)arg1;
- (void)openFileBrowser;
- (void)openDocumentPickerViewController;
- (void)openFilePreparationFromViewController:(id)arg1 withBrowseInfo:(id)arg2;
- (void)openFilePreparationFromViewController:(id)arg1 withFileURL:(id)arg2;
- (void)openFilePresentationFromViewController:(id)arg1 withBrowseInfo:(id)arg2;
- (void)openFilePresentationFromViewController:(id)arg1 withFileURL:(id)arg2;
- (void)shareBlackboard;
- (void)openBlackboardPresentation;
- (void)guideView:(id)arg1 cancelButtonDidClick:(id)arg2;
- (void)guideView:(id)arg1 acceptButtonDidClick:(id)arg2;
- (void)onFileBrowser:(id)arg1 clickFile:(id)arg2;
- (void)onFileBrowseOpeniCloud;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)screenSharingPreparationViewControllerDidStartPresentation:(id)arg1;
- (void)screenSharingPresentationViewController:(id)arg1 didClickPenButton:(BOOL)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 didClickMicrophoneButton:(BOOL)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 didClickSpeakerButton:(BOOL)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 viewWillTransitionToSize:(CGSize)arg2;
- (void)screenSharingPresentationViewController:(id)arg1 viewDidTransitionToSize:(CGSize)arg2;
- (void)screenSharingPresentationViewControllerWillDismiss:(id)arg1;
- (void)screenSharingPresentationViewControllerDidStartSharing:(id)arg1;
- (void)screenSharingPresentationViewControllerDidStopSharing:(id)arg1;
- (void)screenSharingPresentationViewControllerDidPauseSharing:(id)arg1;
- (void)screenSharingPresentationViewControllerDidResumeSharing:(id)arg1;
- (unsigned int)sessionID;
- (id)delegate;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (id)presentingPresentationViewController;
- (void)setPresentingPresentationViewController:(id)arg1;
- (void).cxx_destruct;
@end
