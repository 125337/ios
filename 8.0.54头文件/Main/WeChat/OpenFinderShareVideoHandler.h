@interface OpenFinderShareVideoHandler : OpenFinderBaseHandler <IAppDataExt, WCEditVideoViewControllerDelegate, WCFinderPostViewControllerDelegate, WCFinderCreateCoordinatorDelegate, WCFinderLongVideoChooseHelperDelegate>
{
    NSMutableArray * _mmAssetArray; // +0x8
    NSString * _extLinkUrl; // +0x10
    NSString * _title; // +0x18
    WCFinderCreateCoordinator * _createCoordinator; // +0x20
    unsigned long long _enterEditImageViewTime; // +0x28
    WCFinderJumpInfo * _jumpInfo; // +0x30
}
- (void)createOpenUrl;
- (id)genBlockVC;
- (void)initJumpInfo;
- (void)OnAppInfoChanged:(id)arg1;
- (void)onAuthRejectJumpInfo;
- (void)onAuthDidSuccess;
- (void)startShareVideo;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1 presentAnimated:(BOOL)arg2;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerStartUpload;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)triggerFinderPostActionWith:(id)arg1;
- (void)backTo3rdApp;
- (void)backTo3rdAppWithExtMsg:(id)arg1;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (id)mmAssetArray;
- (void)setMmAssetArray:(id)arg1;
- (id)extLinkUrl;
- (void)setExtLinkUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (unsigned long long)enterEditImageViewTime;
- (void)setEnterEditImageViewTime:(unsigned long long)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

