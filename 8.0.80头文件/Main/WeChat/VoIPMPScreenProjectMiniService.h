@interface VoIPMPScreenProjectMiniService : NSObject <IMinimizeTaskDelegateInterface, IMinimizeTaskExt>
{
    BOOL _isActive; // +0x8
    BOOL _isReceiver; // +0x9
    id /* block */ _onExtendRequest; // +0x10
    id /* block */ _onCloseRequest; // +0x18
    MinimizeTaskData * _minimizeTaskData; // +0x20
    VoIPMPScreenProjectMiniView * _miniView; // +0x28
    VoIPMPScreenProjectMiniContentSender * _senderContent; // +0x30
    VoIPMPScreenProjectMiniContentReceiver * _receiverContent; // +0x38
    VoIPMPFlutterTextureManager * _attachedTextureManager; // +0x40
}
+ (id)sharedService;
- (id)init;
- (void)launchWithLastFrame:(id)arg1 isReceiver:(BOOL)arg2 textureManager:(id)arg3 expectedSenderMemberId:(int)arg4;
- (void)cleanupMiniResources;
- (void)cleanupMiniResourcesWithKickAsync:(BOOL)arg1;
- (void)dismiss;
- (void)dismissForRestore;
- (void)_dismissWithKickAsync:(BOOL)arg1;
- (id)currentSenderLastFrameImage;
- (id)currentContentSnapshotView;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (void)onAbsorbFloatingViewEndResultMoveTo:(CGPoint)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isReceiver;
- (void)setIsReceiver:(BOOL)arg1;
- (id /* block */)onExtendRequest;
- (void)setOnExtendRequest:(id /* block */)arg1;
- (id /* block */)onCloseRequest;
- (void)setOnCloseRequest:(id /* block */)arg1;
- (id)minimizeTaskData;
- (void)setMinimizeTaskData:(id)arg1;
- (id)miniView;
- (void)setMiniView:(id)arg1;
- (id)senderContent;
- (void)setSenderContent:(id)arg1;
- (id)receiverContent;
- (void)setReceiverContent:(id)arg1;
- (id)attachedTextureManager;
- (void)setAttachedTextureManager:(id)arg1;
- (void).cxx_destruct;
@end
