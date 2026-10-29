@interface ShakeTvViewController : MMUIViewController <MMWebViewDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, SendAppMsgHandleDelegate, MMWebImageViewDelegate, ScanTVDelegate, JSEventExt>
{
    BOOL _canShareToFriend; // +0x68
    BOOL _canShareToWC; // +0x69
    BOOL _canAddToFav; // +0x6a
    BOOL _canEditTag; // +0x6b
    BOOL _canDelete; // +0x6c
    id _userdata; // +0x70
    BOOL _isVideoPlaying; // +0x78
    ScanTVHelper * m_tvHelper; // +0x80
    MMTableView * _tableView; // +0x88
    int m_uiShakeTvViewControllerShowStyle; // +0x90
    BOOL _isModal; // +0x94
    ShakeTvItem * _tvItem; // +0x98
    UIView * _infoView; // +0xa0
    UIButton * _playBtn; // +0xa8
    UIButton * _actionBtn; // +0xb0
    MMWebImageView * _videoThumbImgView; // +0xb8
    MMWebViewController * _videoWebView; // +0xc0
    UILabel * _titleLabel; // +0xc8
    UILabel * _subtitleLabel; // +0xd0
    MMUIActivityIndicatorView * _activityIndicatorView; // +0xd8
    SendAppMsgHandler * _sendAppMsgHandler; // +0xe0
    NSMutableArray * seperatorLines; // +0xe8
    UIView * footerLine; // +0xf0
}
- (id)initWithShakeTvItem:(id)arg1 andModal:(BOOL)arg2 Style:(int)arg3;
- (id)initWithExtContent:(id)arg1 Scence:(unsigned int)arg2;
- (void)dealloc;
- (void)onPlayerEnterFullscreen;
- (void)onPlayerExitFullscreen;
- (void)viewDidLayoutSubviews;
- (id)getCommentId;
- (void)initFooterView;
- (void)initHeaderView:(int)arg1;
- (void)initTableView;
- (void)openPlayUrl;
- (void)initView;
- (void)viewDidLoad;
- (void)startLoadingWebView;
- (void)stopLoadingWebView;
- (void)initNotificationObservers;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setSeperatorHidden:(id)arg1 IndexPath:(id)arg2 Hidden:(BOOL)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onReturn;
- (void)onAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getUpLoadTask:(id)arg1;
- (id)getMessageWrap:(id)arg1;
- (id)getThumbImageData;
- (void)jsSetPageState:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onGetTVItem:(id)arg1 TVItem:(id)arg2;
- (void)onGetTVItemFail:(id)arg1;
- (void)onDeleteTV;
- (void)onEditTVTag;
- (BOOL)canShareToFriend;
- (void)setCanShareToFriend:(BOOL)arg1;
- (BOOL)canShareToWC;
- (void)setCanShareToWC:(BOOL)arg1;
- (BOOL)canAddToFav;
- (void)setCanAddToFav:(BOOL)arg1;
- (BOOL)canEditTag;
- (void)setCanEditTag:(BOOL)arg1;
- (BOOL)canDelete;
- (void)setCanDelete:(BOOL)arg1;
- (id)userdata;
- (void)setUserdata:(id)arg1;
- (void).cxx_destruct;
@end

