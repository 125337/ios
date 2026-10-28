@interface WXGRoamOutBoxService : MMUserService <UIDocumentPickerDelegate, UIDocumentBrowserViewControllerDelegate, MMServiceProtocol>
{
    NSURL * _autoTestUrl; // +0x8
    UIView * _tipsView; // +0x10
    UIView * _tipsPanView; // +0x18
    UIView * _documentView; // +0x20
    NSString * _checkRelativePath; // +0x28
    MMLoadingView * _loadingView; // +0x30
}
- (void)showDocumentPickerViewControllerCheckPermissionWith:(id)arg1 path:(id)arg2;
- (void)showDocumentPickerViewControllerWith:(id)arg1;
- (id)buildAttributedStringWithFont:(id)arg1 prefix:(id)arg2 iconName:(id)arg3 subfix:(id)arg4;
- (void)addTipsViewSecond;
- (void)handlePanGesture:(id)arg1;
- (void)onTapTips;
- (void)writeDataToURL;
- (void)startLoadingView;
- (void)stopLoadingAndHide;
- (void)checkPermissionWith:(id)arg1;
- (void)createBackupMenuWith:(id)arg1;
- (BOOL)isiCloudDirURL:(id)arg1;
- (BOOL)isSMBDirURL:(id)arg1;
- (BOOL)isCloudStorageDirURL:(id)arg1;
- (unsigned long long)checkStorageType:(id)arg1;
- (unsigned int)deviceCountOf:(unsigned long long)arg1;
- (id)getRelativeURLWithAbsoluteUrl:(id)arg1;
- (id)checkDeviceIdWhenInit:(id)arg1;
- (BOOL)checkDeviceIdExist:(id)arg1;
- (id)checkIsDeviceIdExistValid:(id)arg1;
- (id)genNewOutBoxDeviceIdFile:(id)arg1;
- (id)genConcatenatedDataWith:(id)arg1;
- (void)saveBookmarkWith:(id)arg1 url:(id)arg2 isiCloud:(BOOL)arg3;
- (id)getBookmarkWith:(id)arg1;
- (id)getURLStringWith:(id)arg1;
- (void)changeRemarkWith:(id)arg1 remark:(id)arg2;
- (id)getRemarkWith:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)deletePortableDevice:(id)arg1;
- (id)autoTestUrl;
- (void)setAutoTestUrl:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)tipsPanView;
- (void)setTipsPanView:(id)arg1;
- (id)documentView;
- (void)setDocumentView:(id)arg1;
- (id)checkRelativePath;
- (void)setCheckRelativePath:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
