@interface RecordFileTransferLogic : FileTransferLogic
{
    RecordFileTransferTask * _task; // +0x8
    ShareDataToOpenSDKController * _shareOpenSDKController; // +0x10
}
- (id)initWithTask:(id)arg1;
- (unsigned int)previewType;
- (id)previewLiteappQuery;
- (void)openTaskFile:(id)arg1 fromUserClick:(BOOL)arg2;
- (BOOL)hasMoreNavigationItem;
- (void)onForwardToContact:(id)arg1 inViewController:(id)arg2;
- (BOOL)canAddToFavorites;
- (id)generateFavoriteItem;
- (id)commonReportViewParams;
- (id)task;
- (void)setTask:(id)arg1;
- (id)shareOpenSDKController;
- (void)setShareOpenSDKController:(id)arg1;
- (void).cxx_destruct;
@end
