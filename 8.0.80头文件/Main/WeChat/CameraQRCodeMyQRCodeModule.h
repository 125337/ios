@interface CameraQRCodeMyQRCodeModule : CameraQRCodeModule <CameraQRCodeMyQRCodeModuleViewDelegate, IMMQRCodeExt, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, EditImageForwardAndEditLogicDelegate, FriendAsistSessionExt>
{
    unsigned int _m_uiEntryScene; // +0x8
    unsigned int _newFriendLastEnterTime; // +0xc
    CameraQRCodeMyQRCodeModuleView * _contentView; // +0x10
    NSString * _mySelfUserName; // +0x18
    MMScrollActionSheet * _shareActionSheet; // +0x20
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x28
    unsigned long long _newFriendExposeStartMs; // +0x30
}
- (void)initDataWithDelegate:(id)arg1;
- (double)expandedCellHeightWithContainerWidth:(double)arg1;
- (id)iconImage;
- (id)title;
- (id)subTitle;
- (BOOL)isShowMoreButton;
- (void)onClickMoreButton;
- (id)expandedCellContainView;
- (void)modelContainerWillAppear;
- (void)modelWillExpanded;
- (void)modelWillCloseUp;
- (long long)currentNewFriendCount;
- (id)getCardImage;
- (void)handleDownloadQRCodeFinish:(BOOL)arg1;
- (BOOL)isCodeValid;
- (BOOL)allowInteractivePopGestureWhenExpanded;
- (void)hasQRCodeImageExpose:(BOOL)arg1;
- (void)onClickNewFriendEntry;
- (void)onNewFriendCellDidExpose;
- (id)getModuleTableView;
- (void)updateContainerViewHeight;
- (void)onNewFriendCellHeightChanged;
- (void)updateModuleCellHeight;
- (BOOL)isShowScanQRCode;
- (void)onFriendAssistUnreadCountChanged;
- (void)onFriendAssistAddMsg:(id)arg1;
- (BOOL)isValidNewFriendContact:(id)arg1;
- (void)loadNewFriendData;
- (void)updateNewFriendInfo;
- (void)showShareActionSheet;
- (id)getMenuItemArray;
- (void)onForward;
- (void)forwardToContact:(id)arg1;
- (void)saveImage;
- (void)onShareTimeLine;
- (void)onFav;
- (BOOL)canShareQQ;
- (void)onShareQQ;
- (void)onShareQzone;
- (void)onEdit;
- (void)revokeQRCode;
- (void)onRevokeQRCode;
- (void)scanQRCode;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2 qrcodeStatus:(unsigned int)arg3;
- (unsigned int)m_uiEntryScene;
- (void)setM_uiEntryScene:(unsigned int)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)mySelfUserName;
- (void)setMySelfUserName:(id)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (unsigned int)newFriendLastEnterTime;
- (void)setNewFriendLastEnterTime:(unsigned int)arg1;
- (unsigned long long)newFriendExposeStartMs;
- (void)setNewFriendExposeStartMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
