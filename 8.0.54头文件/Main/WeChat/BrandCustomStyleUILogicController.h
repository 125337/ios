@interface BrandCustomStyleUILogicController : BrandStyleUILogicController <CustomMenuToolViewDelegate, CustomSubMenuFloatViewDelegate, CameraScanLogicDelegate, CameraScanUIDelegate, WCActionSheetDelegate, IBrandCustomReportExt, BrandOpenSpecificViewHandlerDelegate, IUiUtilExt>
{
    CustomMenuToolView * m_menuToolView; // +0x18
    CustomSubMenuFloatView * m_subMenuFloatView; // +0x20
    MMBizMenuInfo * m_menuData; // +0x28
    BOOL m_isInMenuMode; // +0x30
    BOOL m_isMsgReceiving; // +0x31
    BrandOpenSpecificViewHandler * _openSpecificViewHandler; // +0x38
    BOOL m_hasInit; // +0x40
    ClickCommandRequestInfo * m_reportInfo; // +0x48
    BOOL m_hasSendCgiSuccess; // +0x50
    NSMutableArray * m_pickImageMd5List; // +0x58
}
- (id)initWithContact:(id)arg1 WithDelegate:(id)arg2;
- (void)loadMenuData;
- (void)createMenuToolView;
- (void)onSubMenuPresentWithIndex:(long long)arg1 ArrowX:(double)arg2;
- (void)onSubMenuDismiss;
- (void)onChangeToMenuMode:(id)arg1;
- (void)onReportClickEvent:(id)arg1;
- (void)onRecordActionEvent:(id)arg1;
- (void)onJumpToWebView:(id)arg1;
- (BOOL)onJumpToNativeView:(id)arg1;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned int)arg2 btnName:(id)arg3 btnLevel:(unsigned long long)arg4;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned int)arg2;
- (void)onJumpToEcs:(id)arg1;
- (void)onConnectDevice;
- (void)onDisconnectDevice;
- (BOOL)isOpenSpecificView:(id)arg1;
- (BOOL)isWeGoRecommed:(id)arg1;
- (BOOL)isOpenNativeUrl:(id)arg1;
- (void)handleOpenSpecificView:(id)arg1;
- (void)onJumpToScanView:(id)arg1;
- (void)onJumpToPicView:(id)arg1;
- (void)onJumpToPOIView:(id)arg1;
- (void)onJumpToBrandSearchView:(id)arg1;
- (id)getBrandContactUsername;
- (BOOL)shouldObtainScanResult;
- (BOOL)shouldBackToSessionImmediately;
- (void)obtainScanResultDidFinish:(id)arg1;
- (BOOL)shouldDirectShowImagePicker;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)shouldShowChangeModeBtn;
- (void)onClickOpenWeAppButton;
- (void)changeToMenuMode;
- (void)swichToolViewToCustomView;
- (void)finishedChangeToMenuMode;
- (void)onChangeToInputMode;
- (void)finishedChangeToInputMode;
- (void)onReportClickEvent:(id)arg1 toBrand:(id)arg2;
- (void)onReportParentClickEvent:(id)arg1;
- (void)onRecordActionEvent:(id)arg1 toBrand:(id)arg2;
- (id)getCDATAWithJSON:(id)arg1;
- (void)onReportActionEventAndContentXML:(id)arg1;
- (void)startReceiveMsg:(id)arg1;
- (void)SendClickNotify:(id)arg1 ClickCommandRequestInfo:(id)arg2;
- (void)createCameraScanViewController;
- (id)getPickImageMd5List;
- (void)addItem2PickImageMd5List:(id)arg1;
- (void)cleanPickImageMd5List;
- (BOOL)shouldDismissCurrentViewController;
- (void)startReceiveMsg;
- (void)stopReceiveMsg;
- (id)getMenuInfo;
- (id)getSubMenuInfoByIndex:(long long)arg1;
- (id)buttonListFromArr:(id)arg1 isSubMenu:(BOOL)arg2;
- (id)transferMenuEcsData2MpEcsJumpInfo:(id)arg1;
- (BOOL)hasDraft;
- (void)updateFloatContentView;
- (void)onTopBarFrameChanged;
- (BOOL)canReloadViewIfMemoryWarning;
- (BOOL)getLastMenuMode;
- (void)setLastMenuMode:(BOOL)arg1;
- (double)getCustomizedAreaWidth;
- (BOOL)shouldHideOrginInputToolView;
- (void)processImageDidCancel;
- (void)processImageDidFinish;
- (BOOL)shouldSaveAchievedImageMd5;
- (void)saveAchievedImageMd5:(id)arg1;
- (void)processLocationDidFinish;
- (void)addMsgForUsr:(id)arg1;
- (void)updateIfViewWillAppear;
- (void)updateIfViewDidAppear;
- (void)removeCustomToolView;
- (void)updateIfCreateToolView:(id)arg1 inputPresenter:(id)arg2;
- (id)getChangeToMenuButton;
- (id)getOpenWeAppMenuButton;
- (BOOL)isNoNeedShowNormalToolView;
- (id)m_menuToolView;
- (void)setM_menuToolView:(id)arg1;
- (id)m_subMenuFloatView;
- (void)setM_subMenuFloatView:(id)arg1;
- (id)m_menuData;
- (void)setM_menuData:(id)arg1;
- (id)m_reportInfo;
- (void)setM_reportInfo:(id)arg1;
- (id)m_pickImageMd5List;
- (void)setM_pickImageMd5List:(id)arg1;
- (void).cxx_destruct;
@end

