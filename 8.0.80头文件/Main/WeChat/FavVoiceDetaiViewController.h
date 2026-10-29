@interface FavVoiceDetaiViewController : FavBaseDetailViewController <FavActionSheetDelegate, IContactMgrExt, WCActionSheetDelegate>
{
    MMUIView * m_contentView; // +0x80
    FavAudioPlayerController * m_audioPlayerCtrl; // +0x88
}
- (id)initWithFavItem:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)onAction:(id)arg1;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void).cxx_destruct;
@end
