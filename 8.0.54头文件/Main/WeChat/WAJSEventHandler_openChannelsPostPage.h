@interface WAJSEventHandler_openChannelsPostPage : WAJSEventHandler_BaseEvent <WCFinderCreateCoordinatorDelegate, WCFinderPostViewControllerDelegate>
{
    WCFinderCreateCoordinator * _createCoordinator; // +0x8
    MMAsset * _finderAsset; // +0x10
    unsigned long long _enterScene; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)openPostPageWithTitle:(id)arg1 jumpInfo:(id)arg2;
- (void)presentPostVCWith:(id)arg1;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)finderAsset;
- (void)setFinderAsset:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

