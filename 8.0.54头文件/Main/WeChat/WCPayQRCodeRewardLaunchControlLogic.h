@interface WCPayQRCodeRewardLaunchControlLogic : WCPayControlLogic <WCPayQRCodeRewardSetupViewControllerDelegate, WCPayQRCodeRewardGenCodeCgiDelegate, WCPayQRCodeRewardReceiverDetailViewControllerDelegate, WCPayQRCodeRewardGetCodeCgiDelegate, WCPayQRCodeRewardSetPhotoOrWordCgiDelegate, ICdnComMgrExt>
{
    WCPayQRCodeRewardGetCodeCgi * _getRewardCodeCgi; // +0x38
    WCPayQRCodeRewardGenCodeCgi * _genRewardCodeCgi; // +0x40
    WCPayQRCodeRewardSetPhotoOrWordCgi * _setPhotoOrWordCgi; // +0x48
    WCPayQRCodeRewardReceiverDetailViewController * _detailViewController; // +0x50
    NSString * _currentSettingWord; // +0x58
    NSString * _currentCdnClientID; // +0x60
    long long _downloadCodeImgScene; // +0x68
    MMWebViewController * _uploadIdWebView; // +0x70
}
- (id)initWithData:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)onSetupViewControllerBack;
- (void)onSetupViewControllerConfirmGenCodeWithAmountList:(id)arg1 rewardDesc:(id)arg2 hasChangeDefaultAmount:(BOOL)arg3;
- (void)onReceiverDetailViewControllerBack;
- (void)onRecevierDetailViewControllerClickSetupBtn;
- (void)onReceiverDetailViewControllerClickRewardSettingBtn;
- (void)onReceiverDetailViewControllerUserSetPhotoWording:(id)arg1;
- (void)onReceiverDetailViewControllerUserRemovePhotoWording;
- (void)sendGetCodeCgi;
- (void)webViewReturn:(id)arg1;
- (void)onGetQRCodeRewardGetCodeResp:(id)arg1;
- (void)onGetQRCodeRewardSetCodeResp:(id)arg1;
- (void)onGetQRCodeRewardSetPhotoOrWordCgiResp:(id)arg1;
- (void)saveGetQRCodeRewardCacheToFile;
- (BOOL)hasLocalCodeImageCache;
- (id)getCodeViewCdnDownloadClientId;
- (void)downloadCodeImageView;
- (void)OnCdnDownload:(id)arg1;
- (void)handleEventAfterDownloadCodeImage;
- (id)getRewardCodeCgi;
- (void)setGetRewardCodeCgi:(id)arg1;
- (id)genRewardCodeCgi;
- (void)setGenRewardCodeCgi:(id)arg1;
- (id)setPhotoOrWordCgi;
- (void)setSetPhotoOrWordCgi:(id)arg1;
- (id)detailViewController;
- (void)setDetailViewController:(id)arg1;
- (id)currentSettingWord;
- (void)setCurrentSettingWord:(id)arg1;
- (id)currentCdnClientID;
- (void)setCurrentCdnClientID:(id)arg1;
- (long long)downloadCodeImgScene;
- (void)setDownloadCodeImgScene:(long long)arg1;
- (id)uploadIdWebView;
- (void)setUploadIdWebView:(id)arg1;
- (void).cxx_destruct;
@end

