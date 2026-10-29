@interface GameCenterMsgListNoticeTabViewController : GameCenterMsgListBaseTabViewController
- (void)viewDidLoad;
- (unsigned int)showType;
- (Class)cellClassType;
- (id)cellReuseIdentifier;
- (id)msgListName;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)videoAlbumControllerDidExit;
- (void)videoAlbumControllerDidSkip;
- (void)gameAlbumVideoDidChoose:(id)arg1 extraInfo:(id)arg2;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)openPublishViewControllerWithVideoInfo:(id)arg1 appid:(id)arg2;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
@end
