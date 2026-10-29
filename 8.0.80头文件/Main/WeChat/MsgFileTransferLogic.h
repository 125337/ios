@interface MsgFileTransferLogic : FileTransferLogic
{
    MsgFileTransferTask * _task; // +0x8
    ShareDataToOpenSDKController * _shareOpenSDKController; // +0x10
}
- (id)initWithTask:(id)arg1;
- (unsigned int)previewType;
- (id)previewLiteappQuery;
- (void)openTaskFile:(id)arg1 fromUserClick:(BOOL)arg2;
- (BOOL)hasMoreNavigationItem;
- (BOOL)canAddToFavorites;
- (id)generateFavoriteItem;
- (BOOL)canForwardToDevice;
- (void)onForwardToDevice;
- (void)onOpenBy3rdApp;
- (void)onForwardToContact:(id)arg1 inViewController:(id)arg2;
- (id)commonReportViewParams;
- (id)task;
- (void)setTask:(id)arg1;
- (id)shareOpenSDKController;
- (void)setShareOpenSDKController:(id)arg1;
- (void).cxx_destruct;
@end
