@interface PreviewContentLogicController : BaseMsgContentLogicController <PreviewContentViewControllerDelegate, WCRedEnvelopesGetRedPacketPreviewCgiDelegate, WCPayWebImageViewDelegate, MMTipsViewControllerDelegate>
{
    BOOL _hasCallPreviewCgi; // +0xd8
    BOOL _bubbleImageDownloadOK; // +0xd9
    BOOL _recShowImageDownloadOK; // +0xda
    BOOL _detailImageDownloadOK; // +0xdb
    BOOL _firstStoryImageDownloadOK; // +0xdc
    BOOL _bubbleImageDownloadFail; // +0xdd
    BOOL _recShowImageDownloadFail; // +0xde
    BOOL _detailImageDownloadFail; // +0xdf
    BOOL _firstStoryImageDownloadFail; // +0xe0
    BOOL _reloadTipsIsShowing; // +0xe1
    BOOL _isLoadingOk; // +0xe2
    id <PreviewContentLogicControllerDelegate> _m_delegate; // +0xe8
    NSMutableArray * _previewContentMsgs; // +0xf0
    WCRedEnvelopesGetRedPacketPreviewCgi * _m_getRedPacketPreviewCgi; // +0xf8
    WCPayWebImageView * _bubbleImageView; // +0x100
    WCPayWebImageView * _recShowImageView; // +0x108
    WCPayWebImageView * _detailImageView; // +0x110
    WCPayWebImageView * _firstStoryImageBgView; // +0x118
    NSRecursiveLock * _m_lock; // +0x120
    NSString * _curDownloadCoverId; // +0x128
}
- (void)initViewController;
- (void)setExtraInfo:(id)arg1;
- (void)onPreviewContentViewControllerViewDidAppear;
- (void)onSendGetPreviewCGIWithScene:(unsigned int)arg1 url:(id)arg2 material_id:(id)arg3;
- (void)onPreviewContentViewControllerViewDidDisapper;
- (id)GetUsrTitle;
- (void)setPreviewContentMsg:(id)arg1;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (BOOL)isToolViewHidden;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (BOOL)HasCustomToolBar;
- (id)GetRightBarButtonTitle;
- (BOOL)isOpenSingleInfo;
- (id)GetRightBarBtn;
- (id)onGetRightBarButton;
- (id)GetRightBarButtonImageName;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiResponseOK:(id)arg1;
- (void)predownloadStoryInfo:(id)arg1;
- (void)startDownloadFirstStoryPage:(id)arg1;
- (void)startDownloadResource;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)showWeakNetworkTips;
- (void)checkAllImageStatus;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startAutoOpenTimer;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)previewContentMsgs;
- (void)setPreviewContentMsgs:(id)arg1;
- (BOOL)hasCallPreviewCgi;
- (void)setHasCallPreviewCgi:(BOOL)arg1;
- (id)m_getRedPacketPreviewCgi;
- (void)setM_getRedPacketPreviewCgi:(id)arg1;
- (id)bubbleImageView;
- (void)setBubbleImageView:(id)arg1;
- (id)recShowImageView;
- (void)setRecShowImageView:(id)arg1;
- (id)detailImageView;
- (void)setDetailImageView:(id)arg1;
- (id)firstStoryImageBgView;
- (void)setFirstStoryImageBgView:(id)arg1;
- (BOOL)bubbleImageDownloadOK;
- (void)setBubbleImageDownloadOK:(BOOL)arg1;
- (BOOL)recShowImageDownloadOK;
- (void)setRecShowImageDownloadOK:(BOOL)arg1;
- (BOOL)detailImageDownloadOK;
- (void)setDetailImageDownloadOK:(BOOL)arg1;
- (BOOL)firstStoryImageDownloadOK;
- (void)setFirstStoryImageDownloadOK:(BOOL)arg1;
- (BOOL)bubbleImageDownloadFail;
- (void)setBubbleImageDownloadFail:(BOOL)arg1;
- (BOOL)recShowImageDownloadFail;
- (void)setRecShowImageDownloadFail:(BOOL)arg1;
- (BOOL)detailImageDownloadFail;
- (void)setDetailImageDownloadFail:(BOOL)arg1;
- (BOOL)firstStoryImageDownloadFail;
- (void)setFirstStoryImageDownloadFail:(BOOL)arg1;
- (BOOL)reloadTipsIsShowing;
- (void)setReloadTipsIsShowing:(BOOL)arg1;
- (id)m_lock;
- (void)setM_lock:(id)arg1;
- (BOOL)isLoadingOk;
- (void)setIsLoadingOk:(BOOL)arg1;
- (id)curDownloadCoverId;
- (void)setCurDownloadCoverId:(id)arg1;
- (void).cxx_destruct;
@end

