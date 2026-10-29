@interface MMLiveScreenSharingBaseViewController : MMCPUIViewController <UIGestureRecognizerDelegate>
{
    BOOL _blocksSingleTapInContentView; // +0x68
    BOOL _blocksLongPressInContentView; // +0x69
    BOOL _showsCancelBarButtonItem; // +0x6a
    UIViewController * _targetViewController; // +0x70
    UIView * _contentView; // +0x78
    UIView * _contentMaskView; // +0x80
    id _userInfo; // +0x88
    WCFileBrowseInfo * _fileBrowseInfo; // +0x90
    NSURL * _fileURL; // +0x98
    NSURL * _webURL; // +0xa0
    BizAppMsgDetailInfo * _bizArticle; // +0xa8
    UITapGestureRecognizer * _singleTapBlocker; // +0xb0
    UILongPressGestureRecognizer * _longPressBlocker; // +0xb8
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)setTargetViewController:(id)arg1;
- (void)addTargetViewIfNeeded;
- (void)removeTargetViewIfNeeded;
- (void)setShowsCancelBarButtonItem:(BOOL)arg1;
- (void)cancelBarButtonItemDidClick:(id)arg1;
- (void)loadGestureBlockers;
- (void)setBlocksSingleTapInContentView:(BOOL)arg1;
- (void)setBlocksLongPressInContentView:(BOOL)arg1;
- (void)handleSingleTapBlocker:(id)arg1;
- (void)handleLongPressBlocker:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)targetViewController;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)contentMaskView;
- (void)setContentMaskView:(id)arg1;
- (BOOL)blocksSingleTapInContentView;
- (BOOL)blocksLongPressInContentView;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)fileBrowseInfo;
- (void)setFileBrowseInfo:(id)arg1;
- (id)fileURL;
- (void)setFileURL:(id)arg1;
- (id)webURL;
- (void)setWebURL:(id)arg1;
- (id)bizArticle;
- (void)setBizArticle:(id)arg1;
- (BOOL)showsCancelBarButtonItem;
- (id)singleTapBlocker;
- (void)setSingleTapBlocker:(id)arg1;
- (id)longPressBlocker;
- (void)setLongPressBlocker:(id)arg1;
- (void).cxx_destruct;
@end

