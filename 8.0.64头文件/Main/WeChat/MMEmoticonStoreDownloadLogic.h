@interface MMEmoticonStoreDownloadLogic : MMEmoticonStoreBaseDownloadLogic <EmoticonStoreDownloadViewDelegate>
{
    int _scene; // +0x8
    int _downloadType; // +0xc
    id <MMEmoticonStoreDownloadLogicDelegate> _delegate; // +0x10
    MMEmoticonStoreDownloadViewConfig * _config; // +0x18
    UIImageView * _downloadedCheck; // +0x20
    EmoticonStoreDownloadView * _downloadView; // +0x28
    double _staticBtnWidth; // +0x30
}
- (id)init;
- (id)initWithConfig:(id)arg1;
- (void)updateConfig:(id)arg1;
- (void)setConfig:(id)arg1;
- (double)calMaxDisplayLength;
- (id)displayView;
- (void)initViewIfNeeded;
- (void)initDownloadViewIfNeeded;
- (void)initDownloadedCheckIfNeeded;
- (void)onDownloadStatusChangeTo:(int)arg1;
- (void)onDownloadProgress:(float)arg1;
- (void)notifyDisplayViewChange;
- (double)staticBtnWidth;
- (BOOL)isLongWeCoinType;
- (void)onTapDownload;
- (void)onTapReward;
- (void)onTapUse;
- (void)onTapUninstall;
- (void)onTapCancelDownload;
- (void)onAlertViewQuitDownloadBtnClick;
- (id)curViewController;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)downloadType;
- (void)setDownloadType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (id)downloadedCheck;
- (void)setDownloadedCheck:(id)arg1;
- (id)downloadView;
- (void)setDownloadView:(id)arg1;
- (void)setStaticBtnWidth:(double)arg1;
- (void).cxx_destruct;
@end
