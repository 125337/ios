@interface StoreEmoticonLiteAppDownloadLogic : MMEmoticonStoreBaseDownloadLogic
{
    long long _scene; // +0x8
    long long _downloadType; // +0x10
    EmoticonStoreReportInfo * _reportInfo; // +0x18
    MMUIViewController * _callingVC; // +0x20
    id <StoreEmoticonLiteAppDownloadLogicDelegate> _delegate; // +0x28
}
- (BOOL)doOperation:(long long)arg1;
- (void)onDownloadStatusChangeTo:(unsigned long long)arg1;
- (void)onDownloadProgress:(float)arg1;
- (BOOL)tryDownload;
- (void)tryCancelDownload;
- (void)tryUninstall;
- (void)onTapDownloadActivity;
- (void)onAlertViewQuitDownloadBtnClick;
- (id)curViewController;
- (long long)getLiteAppStatusForStatus:(unsigned long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)downloadType;
- (void)setDownloadType:(long long)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)callingVC;
- (void)setCallingVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

