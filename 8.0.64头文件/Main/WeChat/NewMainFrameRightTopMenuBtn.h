@interface NewMainFrameRightTopMenuBtn : MMBarItemCustomView <MMNewTipsMgrExt, MMConfigMgrExt, WCPayLogicMgrExt, WCLazyInitObjectProtocol>
{
    MMBadgeView * m_showNewView; // +0x8
    RightTopMenuData * m_data; // +0x10
    NSMutableDictionary * m_dicItems; // +0x18
    BOOL haveLazyInit; // +0x20
    MMBarButton * m_addButton; // +0x28
    id <NewMainFrameRightTopMenuBtnDelegate> _delegate; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)goToLazyInitObject;
- (void)onItemAction:(id)arg1;
- (BOOL)isTopRightMenuShowID:(id)arg1;
- (void)updateImageColor:(id)arg1 alpha:(double)arg2 animated:(BOOL)arg3;
- (void)showRightTopMenuBtn;
- (id)checkIfNeedAddOfflinePayItem:(id)arg1;
- (void)saveArchive;
- (void)reloadMenuItems;
- (void)checkRedDot;
- (void)showRedDot:(BOOL)arg1;
- (BOOL)isRedDotShowed;
- (void)reloadAllItems;
- (void)reloadData;
- (void)onMMDynamicConfigUpdated;
- (void)OnGetReceiveOrPayReddotData;
- (void)ReloadWallet;
- (void)ReloadOfflineCodeData;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (BOOL)haveLazyInit;
- (void)setHaveLazyInit:(BOOL)arg1;
- (id)m_addButton;
- (void)setM_addButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
