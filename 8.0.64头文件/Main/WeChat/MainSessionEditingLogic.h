@interface MainSessionEditingLogic : NSObject <WCActionSheetDelegate, IWCDeviceBrandMgrExt>
{
    id <MainSessionEditingLogicDelegate> _delegate; // +0x8
    NSString * _confirmingSessionName; // +0x10
    UITableView * _tableView; // +0x18
}
+ (void)showDeleteAndHideSessionGuide;
- (void)handleEditing:(long long)arg1 forTableView:(id)arg2 atIndexPath:(id)arg3;
- (void)handleCommitDelete:(id)arg1 atTableView:(id)arg2;
- (void)handleBrandUnsubscribeAtIndexPath:(id)arg1;
- (void)onConfirmDeleteSessionAtIndex:(id)arg1;
- (void)deleteSessionAtIndexPath:(id)arg1;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)handleHideSession:(id)arg1 atCell:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)confirmingSessionName;
- (void)setConfirmingSessionName:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end
