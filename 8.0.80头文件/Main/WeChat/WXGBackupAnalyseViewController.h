@interface WXGBackupAnalyseViewController : MMUIViewController
{
    UITextView * _infoTextView; // +0x70
    NSString * _infoString; // +0x78
}
- (void)viewDidLoad;
- (void)showAnalyseInfo;
- (void)sendDataToFileHelper;
- (id)infoTextView;
- (void)setInfoTextView:(id)arg1;
- (id)infoString;
- (void)setInfoString:(id)arg1;
- (void).cxx_destruct;
@end
