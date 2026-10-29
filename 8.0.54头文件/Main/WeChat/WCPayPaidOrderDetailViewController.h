@interface WCPayPaidOrderDetailViewController : WCPayBaseViewController <WCPayPaidDetailQueryAwardCgiDelegate, WCPayNewPaidOrderDetailViewDelegate, MMTipsViewControllerDelegate, WCBaseControlMgrExt, TextStateBrandLogicDelegate, WAAppTaskMgrExt, ILinkEventExt, IWCPayPaidOrderActivityMgrExt>
{
    id <WCPayPaidOrderDetailViewControllerDelegate> m_delegate; // +0x90
    NSString * m_nsCompleteBtnTitle; // +0x98
    NSString * m_nsCommondTip; // +0xa0
    NSMutableArray * m_arrActivityUrl; // +0xa8
    NSMutableDictionary * m_dicSubscribeSelectedStatus; // +0xb0
    BOOL m_bHandlePoped; // +0xb8
    UIView * m_bottomLogoView; // +0xc0
    RichTextView * richTextView; // +0xc8
    NSString * m_statLinkActivityName; // +0xd0
    BOOL m_bHadStatExpourse; // +0xd8
    BOOL m_bIsNativeRequestReward; // +0xd9
    int nativeRewardResult; // +0xdc
    NSString * nativeResultBtnText; // +0xe0
    BOOL _bNeedQueryActivityAward; // +0xe8
    BOOL _bNeedQueryActivityInNewDetailView; // +0xe9
    BOOL _bHasOpenTinyAppActivity; // +0xea
    BOOL _bIsQueryingTinyAppActivityAward; // +0xeb
    BOOL _isAppTaskLaunchingDuringLive; // +0xec
    WCPaySelectVerifyTypeLogic * _m_realNameLogic; // +0xf0
    long long _curActivityBtnTag; // +0xf8
    NSMutableArray * _activityCellInfoArray; // +0x100
    NSMutableArray * _activityH5AwardIdArray; // +0x108
    WCPayPaidDetailQueryAwardCgi * _queryAwardCgi; // +0x110
    WCPayNewPaidOrderDetailView * _paidOrderDetailViewNew; // +0x118
    NSString * _subscribeBrandUsrname; // +0x120
    MMWebImageView * _tinyAppActivityImgView; // +0x128
    UIButton * _tinyAppActivityBtn; // +0x130
    MMUILabel * _tinyAppActivityTitleLabel; // +0x138
    MMUILabel * _tinyAppActivityDescLabel; // +0x140
    TextStateBrandLogic * _brandLogic; // +0x148
    NSString * _textStatusTransId; // +0x150
}
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)BackHistoryOrderDetail;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)ContinueBackHistoryOrderDetail;
- (void)internalBackHistoryOrderDetail;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)OnHistoryOrderDetailBack;
- (void)OnNextStepBack;
- (void)initNavigationBar;
- (void)OnSelectedAppInfo:(id)arg1;
- (id)getPaidSuccessView;
- (id)getHeaderView;
- (id)getOrderDetailView:(id)arg1;
- (void)makeLinkActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getLinkActivityCell:(id)arg1;
- (void)makeSubscribeCellInfo:(id)arg1 CellInfo:(id)arg2;
- (id)getFlowImageViewWithOrigin:(CGPoint)arg1;
- (void)makeTinyAppInfoCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeTinyAppActivityInfoCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)OnActivityBtnDone:(id)arg1;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setCompleteBtnTitle:(id)arg1;
- (void)showBizSafeTitle:(BOOL)arg1;
- (void)addBottomLogo;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)getFavView;
- (void)onAppTaskWillRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)onAppTaskDidRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)onPayPaidOrderActivityChanged;
- (void)OnNativeActivityBtnClick:(id)arg1;
- (id)getActivityInfoByAwardId:(unsigned long long)arg1;
- (id)getOrderDetailByAwardId:(unsigned long long)arg1;
- (id)getActivityCellInfoByBtnTag:(long long)arg1;
- (id)getFirstOrderDetail;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)OnRealnameVerifyCancelNotification:(id)arg1;
- (void)queryH5ActivityAwardStatusIfNeed;
- (void)sendQueryTinyAppActivityAwardRequest;
- (void)onGetWCPaidDetailQueryAwardCgiResp:(id)arg1;
- (void)onGetTinyAppActivityQueryAwardResp:(id)arg1;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 fromScene:(unsigned long long)arg3 version:(unsigned int)arg4;
- (void)onWCPayPaidOrderShowInfoViewClickWAApp:(id)arg1 path:(id)arg2;
- (void)onWCPayPaidOrderShowInfoViewClickUrl:(id)arg1;
- (void)onNewDetailViewStartDrawLottery:(unsigned int)arg1;
- (void)onNewDetailViewReturnWithoutDrawLottery;
- (void)onNewDetailViewClickLotteryBtn:(id)arg1;
- (void)onNewDetailViewOpenTinyAppWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onNewDetailViewDoneBtnClickWithBrandUsername:(id)arg1;
- (void)onNewDetailViewClickNativeActicity;
- (void)onNativeActivityRespBack:(id)arg1;
- (void)onNewDetailViewClickH5Activity:(id)arg1;
- (void)onH5ActivityRespBack:(id)arg1;
- (void)tinyAppInfoClick;
- (void)reportOrderDetailViewData;
- (void)onNewDetailViewClickH5ActivityOpenWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)reportNewDetailViewClickH5Activity;
- (void)onNewDetailViewClickTinyAppActivityWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onTinyAppActivityBtnClick;
- (void)reportClickTinyAppActivity;
- (void)onNewDetailViewClickMchFav:(BOOL)arg1;
- (void)onNewDetailViewClickFinderInfoViewWithRouteInfo:(id)arg1;
- (void)handleRouteInfoInternal:(id)arg1;
- (void)onNewDetailViewClickLeadTailViewWithRouteInfo:(id)arg1;
- (void)onNewDetailViewClickLeadTailViewWithCmdData:(id)arg1;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublishedWithIconId:(id)arg1 iconDescription:(id)arg2;
- (void)textStatusDataReportWithScene:(int)arg1;
- (id)m_realNameLogic;
- (void)setM_realNameLogic:(id)arg1;
- (BOOL)bNeedQueryActivityAward;
- (void)setBNeedQueryActivityAward:(BOOL)arg1;
- (long long)curActivityBtnTag;
- (void)setCurActivityBtnTag:(long long)arg1;
- (id)activityCellInfoArray;
- (void)setActivityCellInfoArray:(id)arg1;
- (id)activityH5AwardIdArray;
- (void)setActivityH5AwardIdArray:(id)arg1;
- (id)queryAwardCgi;
- (void)setQueryAwardCgi:(id)arg1;
- (id)paidOrderDetailViewNew;
- (void)setPaidOrderDetailViewNew:(id)arg1;
- (BOOL)bNeedQueryActivityInNewDetailView;
- (void)setBNeedQueryActivityInNewDetailView:(BOOL)arg1;
- (id)subscribeBrandUsrname;
- (void)setSubscribeBrandUsrname:(id)arg1;
- (BOOL)bHasOpenTinyAppActivity;
- (void)setBHasOpenTinyAppActivity:(BOOL)arg1;
- (BOOL)bIsQueryingTinyAppActivityAward;
- (void)setBIsQueryingTinyAppActivityAward:(BOOL)arg1;
- (id)tinyAppActivityImgView;
- (void)setTinyAppActivityImgView:(id)arg1;
- (id)tinyAppActivityBtn;
- (void)setTinyAppActivityBtn:(id)arg1;
- (id)tinyAppActivityTitleLabel;
- (void)setTinyAppActivityTitleLabel:(id)arg1;
- (id)tinyAppActivityDescLabel;
- (void)setTinyAppActivityDescLabel:(id)arg1;
- (id)brandLogic;
- (void)setBrandLogic:(id)arg1;
- (id)textStatusTransId;
- (void)setTextStatusTransId:(id)arg1;
- (BOOL)isAppTaskLaunchingDuringLive;
- (void)setIsAppTaskLaunchingDuringLive:(BOOL)arg1;
- (void).cxx_destruct;
@end

