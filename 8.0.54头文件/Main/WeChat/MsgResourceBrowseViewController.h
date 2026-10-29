@interface MsgResourceBrowseViewController : MMUIViewController <MsgFastBrowseViewDelegate, IChatLogDataMgrExt, WCActionSheetDelegate>
{
    NSMutableArray * m_arrMsg; // +0x68
    vector<std::shared_ptr<ChatLogDataItem>, std::allocator<std::shared_ptr<ChatLogDataItem>>> _arrSelectedData; // +0x70
    shared_ptr<ChatLogSessionItem> m_sessionItem; // +0x88
    MsgFastBrowseView * m_msgFastBrowseView; // +0x98
    UIView * _footerView; // +0xa0
    UIButton * _selectAllButton; // +0xa8
    UIButton * _deleteButton; // +0xb0
    UILabel * _sizeLabel; // +0xb8
    unsigned long long m_eType; // +0xc0
    BOOL m_bFilterSession; // +0xc8
    CMessageWrap * m_curMsgWrap; // +0xd0
    NSString * m_nsChatName; // +0xd8
}
+ (void)PreviewAppNode:(id)arg1 msgWrap:(id)arg2 inNavigationController:(id)arg3 withClickFrame:(CGRect)arg4;
+ (void)PreviewAppNode:(id)arg1 msgWrap:(id)arg2 inNavigationController:(id)arg3 withClickFrame:(CGRect)arg4 msgLocateForFile:(BOOL)arg5;
+ (void)globalClickAppMessage:(id)arg1 inNavigationController:(id)arg2 withClickFrame:(CGRect)arg3;
+ (void)globalClickAppMessage:(id)arg1 inNavigationController:(id)arg2 withClickFrame:(CGRect)arg3 lookDetailMsgRecord:(BOOL)arg4;
- (id)initWithMsgWrap:(id)arg1 type:(unsigned long long)arg2 filter:(BOOL)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)initNavBar;
- (void)initView;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (id)getSelectButtonTitle;
- (unsigned long long)getDataSize:(const void *)arg1;
- (id)getDataSizeShowString:(const void *)arg1;
- (void)viewDidTransitionToNewSize;
- (void)onCancel;
- (void)hanleClickImageMessage:(id)arg1 msgView:(id)arg2;
- (void)handleClickVideoMessage:(id)arg1;
- (void)handleClickBrandMpVideoMessage:(id)arg1;
- (void)handleClickAppMessage:(id)arg1 msgView:(id)arg2;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 atSection:(unsigned long long)arg3;
- (void)onSelecteAll;
- (void)onChatLogDataReloadItem;
- (void)rebuildSelectedData;
- (void)onDeleteSelectedData:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doDeleteData;
- (id)m_curMsgWrap;
- (void)setM_curMsgWrap:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

