@interface MJShootDraftRouterViewController : MMUIViewController <MJShootComposingViewControllerReeditProtocol, MMLiteAppExt, MJMovieComposingViewControllerDelegate>
{
    BOOL _didStartOpeningDraft; // +0x70
    id /* block */ _openCompletion; // +0x78
    NSString * _draftID; // +0x80
    MJPublisher * _publisher; // +0x88
    id <MJMovieComposingViewControllerDelegate> _movieComposingDelegate; // +0x90
    NSString * _currentReeditTemplateName; // +0x98
    UIImageView * _coverImageView; // +0xa0
    UIVisualEffectView * _coverBlurView; // +0xa8
    MJMovieComposingReeditCoordinator * _reeditCoordinator; // +0xb0
    MJShootComposingDraft * _draft; // +0xb8
}
- (long long)currentEnterSceneForTemplateReedit;
- (long long)currentSourceEnterSceneForTemplateReedit;
- (id)initWithDraftID:(id)arg1 publisher:(id)arg2 delegate:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)setupDraftCoverPlaceholder;
- (void)updateDraftCoverPlaceholderWithDraft:(id)arg1;
- (id)coverImageWithDraft:(id)arg1;
- (id)coverImageCandidatePathsWithDraft:(id)arg1;
- (void)startOpeningDraftIfNeeded;
- (void)openMovieComposingWithDraft:(id)arg1;
- (id)clipbundleFilePathWithAIGCDraft:(id)arg1;
- (void)openMovieComposingWithDraft:(id)arg1 taskID:(id)arg2 queryResponse:(id)arg3 clipbundleFilePath:(id)arg4;
- (void)restorePublisherContextWithAIGCDraft:(id)arg1 taskID:(id)arg2;
- (void)buildReeditEntryParamsWithAIGCDraft:(id)arg1 taskID:(id)arg2 queryResponse:(id)arg3 aigcAssetInfos:(id)arg4 completion:(id /* block */)arg5;
- (void)fetchTemplateAndBuildReeditEntryParamsWithDraft:(id)arg1 taskID:(id)arg2 originAssetInfos:(id)arg3 aigcAssetInfos:(id)arg4 aigcAssetURLs:(id)arg5 completion:(id /* block */)arg6;
- (id)reeditEntryParamsWithDraft:(id)arg1 taskID:(id)arg2 templateItem:(id)arg3 originAssetInfos:(id)arg4 aigcAssetInfos:(id)arg5 aigcAssetURLs:(id)arg6;
- (void)openTemplateReeditCreationPageWithEntryParams:(id)arg1;
- (void)applyTemplateReeditResultWithEntryParams:(id)arg1 resourceRefreshTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)reopenMovieComposingForTemplateReeditWithEntryParams:(id)arg1 completion:(id /* block */)arg2;
- (id)currentPresentedMovieComposingViewController;
- (void)dismissMovieComposingForReedit:(id)arg1 completion:(id /* block */)arg2;
- (void)openTemplateReeditCreationPage;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (void)handleTemplateReeditLiteAppDidDisappearWithExtraData:(id)arg1;
- (void)finishWithSucceed:(BOOL)arg1;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishShootTemplateWithInfo:(id)arg2;
- (void)composingViewControllerDidClearShootTemplate:(id)arg1;
- (id /* block */)openCompletion;
- (void)setOpenCompletion:(id /* block */)arg1;
- (id)draftID;
- (void)setDraftID:(id)arg1;
- (id)publisher;
- (void)setPublisher:(id)arg1;
- (id)movieComposingDelegate;
- (void)setMovieComposingDelegate:(id)arg1;
- (BOOL)didStartOpeningDraft;
- (void)setDidStartOpeningDraft:(BOOL)arg1;
- (id)currentReeditTemplateName;
- (void)setCurrentReeditTemplateName:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)coverBlurView;
- (void)setCoverBlurView:(id)arg1;
- (id)reeditCoordinator;
- (void)setReeditCoordinator:(id)arg1;
- (id)draft;
- (void)setDraft:(id)arg1;
- (void).cxx_destruct;
@end
