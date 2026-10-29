@interface WCFinderPostLinkActionSheet : WCActionSheet
{
    int _commentScene; // +0x8
    id <WCFinderPostLinkActionSheetDelegate> _m_delegate; // +0x10
    long long _linkFlag; // +0x18
    UIView * _tipsView; // +0x20
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)bindReportViewFrom:(id)arg1 eid:(id)arg2;
- (void)onClickCloseBtn;
- (void)onClickWxArticleAction;
- (void)onClickRedEnvelopeAction;
- (void)onClickTxspAction;
- (void)onClickStickerAction;
- (void)onClickShopAction;
- (void)onClickMembershipAction;
- (void)onClickTingMusicAction;
- (void)onClickTingAudioAction;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)linkFlag;
- (void)setLinkFlag:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end

