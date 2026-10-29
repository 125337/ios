@interface StoreEmoticonLiteAppDownloadLogic : MMEmoticonStoreBaseDownloadLogic
{
    int _scene; // +0x8
    int _downloadType; // +0xc
    EmoticonStoreReportInfo * _reportInfo; // +0x10
    MMUIViewController * _callingVC; // +0x18
    id <StoreEmoticonLiteAppDownloadLogicDelegate> _delegate; // +0x20
}
- (BOOL)doOperation:(long long)arg1;
- (void)onDownloadStatusChangeTo:(int)arg1;
- (void)onDownloadProgress:(float)arg1;
- (BOOL)tryDownload;
- (void)tryCancelDownload;
- (void)tryUninstall;
- (void)onTapDownloadActivity;
- (void)onAlertViewQuitDownloadBtnClick;
- (id)curViewController;
- (int)getLiteAppStatusForStatus:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)downloadType;
- (void)setDownloadType:(int)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)callingVC;
- (void)setCallingVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
