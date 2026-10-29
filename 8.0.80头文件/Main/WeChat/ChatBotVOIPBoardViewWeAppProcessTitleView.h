@interface ChatBotVOIPBoardViewWeAppProcessTitleView : UIView <ILinkEventExt, WAAppTaskMgrExt>
{
    BOOL _bUseDarkModeColor; // +0x8
    UIImageView * _completeImg; // +0x10
    RichTextView * _richTextView; // +0x18
    MMLoadingIndicatorView * _indicatorView; // +0x20
    LinkWeAppJumpWrap * _waitingLaunchWeAppWrap; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 text:(id)arg2 isUseDarkModeColor:(BOOL)arg3;
- (void)dealloc;
- (void)layoutViewsWithText:(id)arg1;
- (void)complete;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)arg1;
- (id)adaptiveColor:(id)arg1;
- (id)completeImg;
- (void)setCompleteImg:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)waitingLaunchWeAppWrap;
- (void)setWaitingLaunchWeAppWrap:(id)arg1;
- (BOOL)bUseDarkModeColor;
- (void)setBUseDarkModeColor:(BOOL)arg1;
- (void).cxx_destruct;
@end
