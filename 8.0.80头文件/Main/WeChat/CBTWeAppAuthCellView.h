@interface CBTWeAppAuthCellView : CBTAuthBaseCellView
{
    UIView * _agentContainerView; // +0x8
    WAAgentAuthCardView * _attachedRenderView; // +0x10
    id <NSObject> _notificationToken; // +0x18
}
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (id)createContentView;
- (double)layoutContentView:(id)arg1 y:(double)arg2 width:(double)arg3;
- (void)handleAttachedContentHeightDidChange;
- (void)persistActiveSnapshotIfNeededForViewModel:(id)arg1;
- (void)collapseToTailWithActionKey:(id)arg1 resultCode:(id)arg2;
- (void)reportRemoteActionForActionKey:(id)arg1 viewModel:(id)arg2;
- (void)setupNotificationIfNeeded;
- (void)viewStateChangedNotification:(id)arg1;
- (id)contentCopyableText;
- (id)agentContainerView;
- (void)setAgentContainerView:(id)arg1;
- (id)attachedRenderView;
- (void)setAttachedRenderView:(id)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (void).cxx_destruct;
@end
