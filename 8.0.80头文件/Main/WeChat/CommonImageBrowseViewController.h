@interface CommonImageBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, WCActionSheetDelegate>
{
    MMImageBrowseView * m_imageView; // +0x70
    UIImage * m_image; // +0x78
    id m_singleTapOnNav; // +0x80
    BOOL m_needDeleteAction; // +0x88
    BOOL m_needActionSheet; // +0x89
    id <CommonImageBrowserDelegate> m_delegate; // +0x90
}
- (void)viewWillLayoutSubviews;
- (void)adjustImageViewRect;
- (void)hideStatusBar;
- (void)showStatusBar;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)addNvGestureRecognizer;
- (void)removeNvGestureRecognizer;
- (void)setFullScreen:(BOOL)arg1;
- (void)exitFullScreen;
- (void)initNavigationBar;
- (void)initImageView;
- (void)initView;
- (void)setNeedActionSheet:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;
- (long long)preferredStatusBarStyle;
- (id)initWithImage:(id)arg1;
- (void)dealloc;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)onOperate;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onSingleTapImageBrowseView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)m_singleTapOnNav;
- (void)setM_singleTapOnNav:(id)arg1;
- (BOOL)needDeleteAction;
- (void)setNeedDeleteAction:(BOOL)arg1;
- (BOOL)needActionSheet;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
