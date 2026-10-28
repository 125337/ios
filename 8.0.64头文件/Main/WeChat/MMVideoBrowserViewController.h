@interface MMVideoBrowserViewController : MMMediaBrowserViewController <RecentForwardScrollViewDelegate, WCActionSheetDelegate>
{
    WCActionSheet * _saveActionSheet; // +0x70
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (BOOL)onSingleTap;
- (void)setupScrollActionSheet;
- (void)addActionSheetItem:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (BOOL)showActionSheetBeforeSaveToAlbum;
- (void)handleSaveVideoToAlbum;
- (void)saveVideoWithAsset:(id)arg1;
- (void)saveVideoWithFilePath:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)saveActionSheet;
- (void)setSaveActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
