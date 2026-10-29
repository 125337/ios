@interface MMEmoticonStoreDownloadLogic : MMEmoticonStoreBaseDownloadLogic <EmoticonStoreDownloadViewDelegate>
{
    long long _scene; // +0x8
    long long _downloadType; // +0x10
    id <MMEmoticonStoreDownloadLogicDelegate> _delegate; // +0x18
    MMEmoticonStoreDownloadViewConfig * _config; // +0x20
    UIImageView * _downloadedCheck; // +0x28
    EmoticonStoreDownloadView * _downloadView; // +0x30
    double _staticBtnWidth; // +0x38
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
- (void)onDownloadStatusChangeTo:(unsigned long long)arg1;
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
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)downloadType;
- (void)setDownloadType:(long long)arg1;
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

