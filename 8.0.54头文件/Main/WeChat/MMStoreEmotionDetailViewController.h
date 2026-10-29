@interface MMStoreEmotionDetailViewController : MMUIViewController <EmoticonButtonDescExt, IStoreEmotionRewardExt, EmotionStoreDetailRewardEntranceDelegate, EmoticonStoreGridViewDelegate, MMEmoticonStoreDownloadLogicDelegate, EmoticonHalfScreenSendViewDelegate, ILinkEventExt, StoreEmotionPageShareLogicDelegate, IEmoticonPackageStateMgrExt, SessionSelectControllerDelegate>
{
    long long _type; // +0x68
    long long m_downloadExtrance; // +0x70
    EmojiInfo * m_currentEmoji; // +0x78
    BOOL _needScrollToBottom; // +0x80
    BOOL _fastManagement; // +0x81
    BOOL _m_isGettingRewardInfo; // +0x82
    BOOL _hasUninstallAction; // +0x83
    BOOL _hasInstallAction; // +0x84
    BOOL _needUpdateForLink; // +0x85
    unsigned int m_clickFlag; // +0x88
    EmoticonStoreItem * m_storeItem; // +0x90
    MMUIScrollView * m_tableView; // +0x98
    EmoticonStoreDetailCoverImageView * m_coverImageView; // +0xa0
    UILabel * m_nameLabel; // +0xa8
    UILabel * m_copyrightLabel; // +0xb0
    UIButton * m_statementButton; // +0xb8
    EmoticonStoreGridView * m_thumbGridView; // +0xc0
    UIView * m_previewTipsLabel; // +0xc8
    UILabel * m_descLabel; // +0xd0
    UIImageView * m_animationView; // +0xd8
    MMBorderView * m_animationBorderView; // +0xe0
    UIView * m_packDescContainView; // +0xe8
    NSString * m_clickRegionDesc; // +0xf0
    UILabel * m_serverDescLabel; // +0xf8
    unsigned long long m_scence; // +0x100
    WCDataItem * _m_dataItem; // +0x108
    EmoticonStoreReportInfo * _reportInfo; // +0x110
    id /* block */ _finishInstallBlock; // +0x118
    id /* block */ _finishUninstallBlock; // +0x120
    MMEmoticonStoreDownloadLogic * _downloadLogic; // +0x128
    UIButton * _m_complainButton; // +0x130
    UILabel * _m_animationLabel; // +0x138
    EmoticonStoreDetailRewardEntranceView * _rewardView; // +0x140
    EmotionRewardResponseInfo * _m_rewardInfo; // +0x148
    EmotionStoreDetailDesignerContainerView * _designerContainerView; // +0x150
    UIView * _statementContainerView; // +0x158
    StoreEmotionPageShareLogic * _shareLogic; // +0x160
    MMWebImageView * _linkIconView; // +0x168
    RichTextView * _linkDetailView; // +0x170
    EmotionLinkInfo * _linkInfoForReport; // +0x178
}
+ (id)genProductIdFromTimelineUserData:(id)arg1;
- (id)initWithStoreItem:(id)arg1 Scence:(unsigned long long)arg2 extrance:(long long)arg3;
- (id)initWithPid:(id)arg1 Scence:(unsigned long long)arg2 extrance:(long long)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initData;
- (void)initView;
- (void)initScrollView;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)updateRightBarButton;
- (void)updateReportButton;
- (void)onOperate:(id)arg1;
- (BOOL)hasNecessaryShareInfo;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)checkMsgControllerFrom:(id)arg1;
- (BOOL)recurisiveCheckMsgControllerToRootFrom:(id)arg1;
- (void)updateScrollView;
- (CGPoint)makeCoverImage:(id)arg1 item:(id)arg2;
- (CGPoint)updatePreviewGridView:(CGPoint)arg1;
- (CGPoint)updatePreviewTipsView:(CGPoint)arg1;
- (CGPoint)updateDescView:(CGPoint)arg1;
- (CGPoint)updateContainerView:(CGPoint)arg1;
- (CGPoint)updateNameLabel:(CGPoint)arg1;
- (CGPoint)updateTypeLabel:(CGPoint)arg1;
- (void)updateTypeLabelWithNameLabelMargin:(CGPoint)arg1;
- (CGPoint)updateServerDescLabel:(CGPoint)arg1;
- (CGPoint)updateBuyButton;
- (CGPoint)updateJumpLink:(CGPoint)arg1;
- (CGPoint)makeContainerView:(id)arg1 item:(id)arg2;
- (void)makePackNameLabel:(id)arg1 item:(id)arg2;
- (void)makeServerDescLabel:(id)arg1 item:(id)arg2;
- (void)makeJumpLinkView:(id)arg1 item:(id)arg2;
- (void)makePackTypeLabel:(id)arg1 item:(id)arg2;
- (CGPoint)makeCoverImageCell:(id)arg1;
- (CGPoint)updateCoverImageView:(CGPoint)arg1;
- (void)makeBuyButton:(id)arg1 item:(id)arg2;
- (CGPoint)makeDescCell:(id)arg1 marginPoint:(CGPoint)arg2;
- (CGPoint)updateDescCell:(id)arg1 marginPoint:(CGPoint)arg2;
- (CGPoint)makePreviewTipCell:(id)arg1 marginPoint:(CGPoint)arg2;
- (CGPoint)updatePreviewTipCell:(CGPoint)arg1;
- (CGPoint)updateCopyRight:(id)arg1 marginPoint:(CGPoint)arg2;
- (CGPoint)updateStatementMarginPoint:(CGPoint)arg1;
- (CGPoint)updateGridView:(id)arg1 withEmojiInfos:(id)arg2;
- (CGPoint)makeEmoticonsCell:(id)arg1 emojiInfos:(id)arg2 marginPoint:(CGPoint)arg3;
- (CGPoint)makeRewardCell:(id)arg1 marginPoint:(CGPoint)arg2;
- (CGPoint)updateRewardViewWithMarginPoint:(CGPoint)arg1;
- (void)tryGetRewardInfo;
- (CGPoint)makeDesignerCell:(id)arg1 marginPoint:(CGPoint)arg2;
- (CGPoint)updateDesignerView:(CGPoint)arg1;
- (void)clickDesignerCell;
- (CGPoint)makeCopyRightCell:(id)arg1 marginPoint:(CGPoint)arg2;
- (CGPoint)makeStatementCell:(id)arg1 marginPoint:(CGPoint)arg2;
- (void)OnCancelModalView:(id)arg1;
- (void)callbackOnDismiss;
- (void)onClickComplainButton;
- (void)reportDownload;
- (void)onLawBtnClick;
- (void)requestDeleteWithLoadingText:(id)arg1;
- (BOOL)shouldShowWeCoinLongType;
- (void)handleUse;
- (void)onDownloadCancel;
- (void)onUninstall;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (void)onDownloadFinished;
- (void)onTapBackBarItem;
- (void)setReportInfo:(id)arg1;
- (id)downloadLogicReportInfo;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(long long)arg2;
- (BOOL)showServerDescLabel;
- (BOOL)needJudgeClickFlag;
- (void)onGetEmoticonDownloadFlag:(unsigned int)arg1 andButtonDesc:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)onRewardButtonClick;
- (void)onShowAllDonorsButtonClick;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onStoreEmotionRewardCompleteOkWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)didSelectEmojiAtIndex:(long long)arg1;
- (void)reportEmoticonStoreActionIfNeeded:(unsigned long long)arg1;
- (void)openH5WithURL:(id)arg1;
- (void)openBizWithUsrName:(id)arg1;
- (void)openFinderWithUsrName:(id)arg1;
- (void)openWeAppWithUsrName:(id)arg1 AndPath:(id)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)m_storeItem;
- (void)setM_storeItem:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_coverImageView;
- (void)setM_coverImageView:(id)arg1;
- (id)m_nameLabel;
- (void)setM_nameLabel:(id)arg1;
- (id)m_copyrightLabel;
- (void)setM_copyrightLabel:(id)arg1;
- (id)m_statementButton;
- (void)setM_statementButton:(id)arg1;
- (id)m_thumbGridView;
- (void)setM_thumbGridView:(id)arg1;
- (id)m_previewTipsLabel;
- (void)setM_previewTipsLabel:(id)arg1;
- (id)m_descLabel;
- (void)setM_descLabel:(id)arg1;
- (id)m_animationView;
- (void)setM_animationView:(id)arg1;
- (id)m_animationBorderView;
- (void)setM_animationBorderView:(id)arg1;
- (id)m_packDescContainView;
- (void)setM_packDescContainView:(id)arg1;
- (id)m_clickRegionDesc;
- (void)setM_clickRegionDesc:(id)arg1;
- (id)m_serverDescLabel;
- (void)setM_serverDescLabel:(id)arg1;
- (unsigned long long)m_scence;
- (void)setM_scence:(unsigned long long)arg1;
- (unsigned int)m_clickFlag;
- (void)setM_clickFlag:(unsigned int)arg1;
- (BOOL)needScrollToBottom;
- (void)setNeedScrollToBottom:(BOOL)arg1;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (id)reportInfo;
- (BOOL)fastManagement;
- (void)setFastManagement:(BOOL)arg1;
- (id /* block */)finishInstallBlock;
- (void)setFinishInstallBlock:(id /* block */)arg1;
- (id /* block */)finishUninstallBlock;
- (void)setFinishUninstallBlock:(id /* block */)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (id)m_complainButton;
- (void)setM_complainButton:(id)arg1;
- (id)m_animationLabel;
- (void)setM_animationLabel:(id)arg1;
- (id)rewardView;
- (void)setRewardView:(id)arg1;
- (id)m_rewardInfo;
- (void)setM_rewardInfo:(id)arg1;
- (BOOL)m_isGettingRewardInfo;
- (void)setM_isGettingRewardInfo:(BOOL)arg1;
- (id)designerContainerView;
- (void)setDesignerContainerView:(id)arg1;
- (id)statementContainerView;
- (void)setStatementContainerView:(id)arg1;
- (id)shareLogic;
- (void)setShareLogic:(id)arg1;
- (BOOL)hasUninstallAction;
- (void)setHasUninstallAction:(BOOL)arg1;
- (BOOL)hasInstallAction;
- (void)setHasInstallAction:(BOOL)arg1;
- (id)linkIconView;
- (void)setLinkIconView:(id)arg1;
- (id)linkDetailView;
- (void)setLinkDetailView:(id)arg1;
- (BOOL)needUpdateForLink;
- (void)setNeedUpdateForLink:(BOOL)arg1;
- (id)linkInfoForReport;
- (void)setLinkInfoForReport:(id)arg1;
- (void).cxx_destruct;
@end

