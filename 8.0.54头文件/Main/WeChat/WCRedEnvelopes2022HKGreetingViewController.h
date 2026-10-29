@interface WCRedEnvelopes2022HKGreetingViewController : MMUIViewController <IZCWScrollNumViewDelegate, EmoticonCustomAddLogicControllerDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, IStoreEmotionSingleDownloadMgrExt, WCActionSheetDelegate, CAAnimationDelegate>
{
    int m_currentNum; // +0x68
    NSString * m_currentWish; // +0x70
    NSString * m_nsStatusMsg; // +0x78
    double m_numAnimationDuration; // +0x80
    int m_currentMessIndex; // +0x88
    NSArray * m_oMessArr; // +0x90
    NSString * m_nsHeadUrl; // +0x98
    NSString * m_nsSenderNickName; // +0xa0
    unsigned long long m_enStatus; // +0xa8
    NSString * m_chatName; // +0xb0
    BOOL isEmoticonHongBao; // +0xb8
    BOOL isNeedReupload; // +0xb9
    BOOL isUploadFail; // +0xba
    BOOL isDownloadFail; // +0xbb
    BOOL isEmoticonBoardViewShow; // +0xbc
    AddEmoticonWrap * reuploadWrap; // +0xc0
    BOOL _m_bIsSender; // +0xc8
    BOOL _m_bScrollNum; // +0xc9
    BOOL _m_bPitcureEnable; // +0xca
    BOOL _m_bEnableAddEmoticon; // +0xcb
    BOOL _m_bIsCreate; // +0xcc
    BOOL _m_bFisrtLayout; // +0xcd
    BOOL _m_bEnableDownloadEmoticon; // +0xce
    id <WCRedEnvelopes2022HKGreetingViewControllerDelegate> _m_delegate; // +0xd0
    UIView * _m_coverView; // +0xd8
    UIView * _m_containerView; // +0xe0
    UIImageView * _m_containerBGImgView; // +0xe8
    UIButton * _m_closeBtn; // +0xf0
    UIButton * _m_cameraBtn; // +0xf8
    UIImageView * _m_pictureBGImgView; // +0x100
    MMEmoticonView * _m_pictureImgView; // +0x108
    UIImageView * _m_pictureLoadingView; // +0x110
    UIButton * _m_pictureDelBtn; // +0x118
    MMUILabel * _m_greetingLabel; // +0x120
    MMUILabel * _m_yuanLabel; // +0x128
    ZCWScrollNumView * _m_numView; // +0x130
    UIButton * _m_randomNextMoneyBtn; // +0x138
    UIImageView * _m_snowGifImageView; // +0x140
    MMUILabel * _m_saveBalanceLabel; // +0x148
    UIButton * _m_sendBtn; // +0x150
    MMUILabel * _m_statusLabel; // +0x158
    UIView * _m_senderView; // +0x160
    UIView * _m_receiverView; // +0x168
    UIButton * _m_cancelButton; // +0x170
    MMUILabel * _m_loadingLabel; // +0x178
    EmoticonBoardView * _m_emoticonBoardView; // +0x180
    UIView * _m_emoticonBackgroundView; // +0x188
    UIButton * _m_emoticonUploadFailBtn; // +0x190
    UIButton * _m_emoticonDownloadFailBtn; // +0x198
    UIButton * _m_openDetailButton; // +0x1a0
    UIImageView * _m_arrowImageView; // +0x1a8
    UIButton * _m_saveBalanceBtn; // +0x1b0
    UIImageView * _m_saveBalanceArrowImageView; // +0x1b8
    WCRedEnvelopesControlData * _m_data; // +0x1c0
    UIImage * _m_oImage; // +0x1c8
    WeToast * _m_toastView; // +0x1d0
    GKImagePicker * _m_picker; // +0x1d8
    NSString * _m_cdnFileId; // +0x1e0
    NSString * _m_cdnAesKey; // +0x1e8
    NSNumber * _m_cdnFileLength; // +0x1f0
    EmoticonCustomAddLogicController * _m_emoticonCustomAddLogic; // +0x1f8
    CEmoticonWrap * _m_emoticonWrap; // +0x200
}
- (id)initSendViewWithIsScrollNum:(BOOL)arg1 payData:(id)arg2;
- (id)initReceiveViewWithIsScrollNum:(BOOL)arg1 payData:(id)arg2;
- (id)m_coverView;
- (id)m_containerView;
- (void)tapOnHongBao:(id)arg1;
- (id)m_containerBGImgView;
- (id)m_closeBtn;
- (id)m_cameraBtn;
- (void)layoutCamerBtn;
- (id)m_pictureBGImgView;
- (id)m_emoticonBoardView;
- (id)m_emoticonUploadFailBtn;
- (id)m_emoticonDownloadFailBtn;
- (id)m_pictureImgView;
- (id)m_emoticonBackgroundView;
- (id)m_pictureDelBtn;
- (id)m_greetingLabel;
- (id)m_yuanLabel;
- (id)m_numView;
- (void)configNumView:(id)arg1 withNumber:(int)arg2 font:(id)arg3;
- (void)centerButton:(id)arg1 imageSpacing:(double)arg2;
- (id)m_randomNextMoneyBtn;
- (id)m_saveBalanceLabel;
- (id)m_sendBtn;
- (id)m_statusLabel;
- (id)m_senderView;
- (id)m_receiverView;
- (id)m_cancelButton;
- (id)m_toastView;
- (id)m_loadingLabel;
- (void)setupView;
- (void)onTapOnEmotionIcon:(id)arg1;
- (void)viewDidLoad;
- (void)startDownloadEmoticon;
- (void)startLoadEmoticonCache;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)showEmoticon;
- (void)showRetryView;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)layoutViews;
- (void)layoutContainerView;
- (void)viewDidLayoutSubviews;
- (BOOL)isEmoticonViewHongBao;
- (void)layoutSendView;
- (void)layoutReceiveView;
- (void)onGoToBalanceDetail;
- (void)layoutExpiredView;
- (void)layoutSenderExpiredView;
- (void)OnOpenList;
- (id)getViewController;
- (void)show;
- (void)dismiss;
- (void)onCloseClick:(id)arg1;
- (id)cameraPackageId;
- (BOOL)checkCameraEmotionIconsExist;
- (id)checkImageExistInEmoticonWrapArray:(id)arg1 abortOnFailure:(BOOL)arg2;
- (void)onClickSelectEmoticon:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setEmoticonBoardHidden:(BOOL)arg1;
- (void)setWording50Alpha;
- (void)setWording0Alpha;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (BOOL)handleAddCameraEmoji;
- (void)onSendButtonClicked;
- (void)makeSelfieEmoitcon;
- (void)endAnimationV2;
- (void)showV2;
- (void)onPictureDelBtnClick:(id)arg1;
- (void)onNextLucyMoneyClick:(id)arg1;
- (void)onSendBtnClick:(id)arg1;
- (void)onCoverTap:(id)arg1;
- (void)sendWithoutEmoticon;
- (void)sendWithEmoticon;
- (void)onNumViewAnimationDidStop;
- (void)doNumViewEndingAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (float)hb_width;
- (float)hb_height;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(BOOL)arg2;
- (void)onFailUploadLogic:(id)arg1;
- (void)onReuploadLogic:(id)arg1;
- (void)reuploadEmticon:(id)arg1;
- (void)downloadEmoticon:(id)arg1;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)arg1;
- (void)onTakePhotoCancelled;
- (void)saveLastEmoticon:(id)arg1 type:(int)arg2;
- (id)getLastEmoticonWithType:(unsigned int *)arg1;
- (id)getDisplayNameInfo:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setM_coverView:(id)arg1;
- (void)setM_containerView:(id)arg1;
- (void)setM_containerBGImgView:(id)arg1;
- (void)setM_closeBtn:(id)arg1;
- (void)setM_cameraBtn:(id)arg1;
- (void)setM_pictureBGImgView:(id)arg1;
- (void)setM_pictureImgView:(id)arg1;
- (id)m_pictureLoadingView;
- (void)setM_pictureLoadingView:(id)arg1;
- (void)setM_pictureDelBtn:(id)arg1;
- (void)setM_greetingLabel:(id)arg1;
- (void)setM_yuanLabel:(id)arg1;
- (void)setM_numView:(id)arg1;
- (void)setM_randomNextMoneyBtn:(id)arg1;
- (id)m_snowGifImageView;
- (void)setM_snowGifImageView:(id)arg1;
- (void)setM_saveBalanceLabel:(id)arg1;
- (void)setM_sendBtn:(id)arg1;
- (void)setM_statusLabel:(id)arg1;
- (void)setM_senderView:(id)arg1;
- (void)setM_receiverView:(id)arg1;
- (void)setM_cancelButton:(id)arg1;
- (void)setM_loadingLabel:(id)arg1;
- (void)setM_emoticonBoardView:(id)arg1;
- (void)setM_emoticonBackgroundView:(id)arg1;
- (void)setM_emoticonUploadFailBtn:(id)arg1;
- (void)setM_emoticonDownloadFailBtn:(id)arg1;
- (id)m_openDetailButton;
- (void)setM_openDetailButton:(id)arg1;
- (id)m_arrowImageView;
- (void)setM_arrowImageView:(id)arg1;
- (id)m_saveBalanceBtn;
- (void)setM_saveBalanceBtn:(id)arg1;
- (id)m_saveBalanceArrowImageView;
- (void)setM_saveBalanceArrowImageView:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (BOOL)m_bIsSender;
- (void)setM_bIsSender:(BOOL)arg1;
- (BOOL)m_bScrollNum;
- (void)setM_bScrollNum:(BOOL)arg1;
- (BOOL)m_bPitcureEnable;
- (void)setM_bPitcureEnable:(BOOL)arg1;
- (BOOL)m_bEnableAddEmoticon;
- (void)setM_bEnableAddEmoticon:(BOOL)arg1;
- (BOOL)m_bIsCreate;
- (void)setM_bIsCreate:(BOOL)arg1;
- (id)m_oImage;
- (void)setM_oImage:(id)arg1;
- (BOOL)m_bFisrtLayout;
- (void)setM_bFisrtLayout:(BOOL)arg1;
- (void)setM_toastView:(id)arg1;
- (id)m_picker;
- (void)setM_picker:(id)arg1;
- (id)m_cdnFileId;
- (void)setM_cdnFileId:(id)arg1;
- (id)m_cdnAesKey;
- (void)setM_cdnAesKey:(id)arg1;
- (id)m_cdnFileLength;
- (void)setM_cdnFileLength:(id)arg1;
- (id)m_emoticonCustomAddLogic;
- (void)setM_emoticonCustomAddLogic:(id)arg1;
- (id)m_emoticonWrap;
- (void)setM_emoticonWrap:(id)arg1;
- (BOOL)m_bEnableDownloadEmoticon;
- (void)setM_bEnableDownloadEmoticon:(BOOL)arg1;
- (void).cxx_destruct;
@end

