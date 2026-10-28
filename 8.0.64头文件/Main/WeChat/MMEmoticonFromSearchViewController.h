@interface MMEmoticonFromSearchViewController : MMUIViewController <IStoreEmotionSingleDownloadMgrExt, EmoticonCustomManageAddLogicDelegate, IStoreEmotionDesignerInfoMgrExt, WCActionSheetDelegate>
{
    MMSearchEmotWrap * m_emotWrap; // +0x70
    UIView * m_emotContentView; // +0x78
    MMUIActivityIndicatorView * m_activityIndicatorView; // +0x80
    MMEmoticonView * m_emotView; // +0x88
    UIButton * m_saveBtn; // +0x90
    UIButton * m_sendBtn; // +0x98
    BOOL m_isEmotExpand; // +0xa0
    BOOL m_isAnimating; // +0xa1
    UIButton * m_operateButton; // +0xa8
    UILabel * m_operatePrefixLabel; // +0xb0
    UILabel * m_operateTitleLabel; // +0xb8
    MMWebImageView * m_operateThumbView; // +0xc0
    int m_internalStatus; // +0xc8
    EmoticonCustomManageAddLogic * m_emoticonAddLogic; // +0xd0
}
- (id)initWithEmojiWrap:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)initTitleArea;
- (void)initView;
- (void)initOperateContent;
- (void)initEmotContent;
- (void)layoutEmotContent;
- (void)initEmotData;
- (void)jumpEmotStore;
- (void)jumpEmotDesiger;
- (void)jumpSourceWebView;
- (void)jumpWeappProfile;
- (void)jumpBrandProfile;
- (id)getOperateImgUrlStr;
- (id)getOperateTitle;
- (BOOL)isStoreEmoticon;
- (BOOL)isCustomEmoticon;
- (BOOL)shouldDisplayOperateContent;
- (BOOL)shouldDisplayOperateImageView;
- (BOOL)isOperateContentClickable;
- (BOOL)isWeappOperateContent;
- (BOOL)isBrandOperateContent;
- (void)doubleTapEmotView:(id)arg1;
- (void)doAddEmot;
- (void)doForwardEmot;
- (void)doExchangeProcess;
- (void)doAddEmotReport;
- (void)doSendEmotReport;
- (void)reportViewDisplay;
- (void)reportEmotOperationForSearch:(int)arg1;
- (void)reportPageLaunch;
- (unsigned int)currentLaunchType;
- (void)setButton:(id)arg1 enable:(BOOL)arg2;
- (void)onAddEmot:(id)arg1;
- (void)onSendEmot:(id)arg1;
- (void)onSaveEmot:(id)arg1;
- (void)onExposeEmot:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onReturn;
- (void)onMore:(id)arg1;
- (void)onDownloadCustomEmoticonFinishWithData:(id)arg1;
- (void)onDownloadCustomEmoticonFail;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(id)arg1 isSuccessed:(BOOL)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void).cxx_destruct;
@end
