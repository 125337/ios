@interface WCFinderFeedShopTableViewCell : WCFinderTableViewCell <WCFinderFeedbackViewDelegate, WCFinderFocusCellProtocol>
{
    id <WCFinderFeedShopTableViewCellDelegate> _delegate; // +0x8
    WCFinderBGMPlayer * _bgmPlayer; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithContentVM:(id)arg1;
- (void)prepareForReuse;
- (void)clickxxxx:(id)arg1;
- (void)showFeedbackViewAtFeedbackBtnFrame:(CGRect)arg1;
- (void)_showFeedbackViewAtFeedbackBtnFrame:(CGRect)arg1;
- (BOOL)shouldCaluculateAsFocusCell;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (void)cellStartExposeReportAction;
- (void)doCellEndExposeAction;
- (void)requestUnlikeReasonWithLoading:(BOOL)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)preLoadUnlikeReason;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bgmPlayer;
- (void)setBgmPlayer:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
