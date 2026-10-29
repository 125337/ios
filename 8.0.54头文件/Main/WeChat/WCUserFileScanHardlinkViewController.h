@interface WCUserFileScanHardlinkViewController : MMUIViewController <IUserFileScanServiceExt>
{
    UITextView * _infoTextView; // +0x68
    NSString * _infoString; // +0x70
    UIButton * _scanWithCacheButton; // +0x78
    UIButton * _scanNoCacheButton; // +0x80
}
- (void)viewDidLoad;
- (void)startHardlinkService;
- (void)startHardlinkServiceNoCache;
- (void)sendDataToFileHelper;
- (void)onUserFileScanServiceEnd;
- (id)infoTextView;
- (void)setInfoTextView:(id)arg1;
- (id)infoString;
- (void)setInfoString:(id)arg1;
- (id)scanWithCacheButton;
- (void)setScanWithCacheButton:(id)arg1;
- (id)scanNoCacheButton;
- (void)setScanNoCacheButton:(id)arg1;
- (void).cxx_destruct;
@end

