@interface IntelligentMsgImgFullScreenMsgImgClickLogic : NSObject <ViewAppMsgControllerDelegate, MsgImgFullScreenViewControllerDelegate, MsgImgWeakBrowseViewControllerDelegate, MsgImgFullScreenWindowDelegate>
{
    ViewAppMsgController * m_viewAppMsgController; // +0x8
    MsgImgFullScreenWindow * m_imgFullScreenWnd; // +0x10
    NSArray * _m_arrResultMessagr; // +0x18
    id <IntelligentMsgImgFullScreenMsgImgClickLogicDelegate> _m_delegate; // +0x20
}
- (void)PreviewImage:(id)arg1 MsgSquareThumb:(id)arg2;
- (void)previewImage:(id)arg1 originFrame:(CGRect)arg2;
- (BOOL)messageWrapMatchImage:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onShowImgMsgLocate:(id)arg1 imageScrollView:(id)arg2 vc:(id)arg3;
- (BOOL)onCurrentPageMsgImgDataMatch:(id)arg1;
- (BOOL)shouldNeedShowImgFastBrowseBtn:(id)arg1;
- (id)getViewController;
- (void)onImgMsgLocate:(id)arg1;
- (id)m_arrResultMessagr;
- (void)setM_arrResultMessagr:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
