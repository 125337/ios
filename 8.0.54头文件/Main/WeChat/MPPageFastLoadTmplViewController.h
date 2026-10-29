@interface MPPageFastLoadTmplViewController : MMUIViewController <MMTableViewInfoDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, IMPPageFastLoadExtensionEvent>
{
    BOOL _isInDownloadProcess; // +0x68
    NSArray * _arrTmplNum; // +0x70
    MMTableViewInfo * _tableViewInfo; // +0x78
    MPPageFastLoadEventMgr * _pageFastLoadEventMgr; // +0x80
    NSURLSession * _urlSession; // +0x88
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)initNavigationBarItem;
- (void)onReturn;
- (void)initView;
- (void)initTableView;
- (void)buildTableViewData;
- (void)reBuildDownloadInfoSection;
- (void)reBuildWebComptPkgLibSection;
- (id)currentDevTmplSection;
- (id)currentTmplInfoSection;
- (id)currentTmplDownloadStateSection;
- (id)currentWebComptPkgSession;
- (id)mpFastLoadDebugSession;
- (void)onMPFastLoadTimeoutDisableChanged:(id)arg1;
- (void)onTmplInfoCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onTmplDevInfoCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onClearTmplDevCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onDownloadInfoCellSelected:(id)arg1 indexPath:(id)arg2;
- (void)onDownloadDeubugWebComptPkgCellSelected:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showUpTemplateVersionWithTemplateInfo:(id)arg1;
- (void)onResponseHTTPCheckTmplInfo:(id)arg1 data:(id)arg2 error:(id)arg3 templateType:(unsigned int)arg4;
- (void)requestDebugWebComptPkgLib;
- (void)deleteDebugWebComptPkgLib;
- (void)onResponseHTTPDownloadWebComptDebugPkgLib:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)onTemplateType:(unsigned int)arg1 downloadStateChanged:(unsigned int)arg2 checkTmplInfo:(id)arg3 templateInfo:(id)arg4;
- (void)onTemplateType:(unsigned int)arg1 downloadEndWithEvent:(unsigned int)arg2 checkTmplInfo:(id)arg3 templateInfo:(id)arg4 descMsg:(id)arg5;
- (id)__detailNameFromPageFastTmplDownloadState:(unsigned int)arg1;
- (id)__detailDescFrinPageFastTmplDownloadEndEvent:(unsigned int)arg1;
- (id)arrTmplNum;
- (void)setArrTmplNum:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)pageFastLoadEventMgr;
- (void)setPageFastLoadEventMgr:(id)arg1;
- (BOOL)isInDownloadProcess;
- (void)setIsInDownloadProcess:(BOOL)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (void).cxx_destruct;
@end

