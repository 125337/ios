@interface WCFinderPostLinkActionSheet : WCActionSheet
{
    int _commentScene; // +0x8
    id <WCFinderPostLinkActionSheetDelegate> _m_delegate; // +0x10
    long long _linkFlag; // +0x18
    NSString * _redPackageContentTips; // +0x20
    unsigned long long _enterScene; // +0x28
    NSString * _finderPostSessionid; // +0x30
    UIView * _tipsView; // +0x38
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)bindReportViewFrom:(id)arg1 eid:(id)arg2;
- (void)onClickCloseBtn;
- (void)onClickWxArticleAction;
- (void)onClickRedEnvelopeAction;
- (void)onClickTxspAction;
- (void)onClickMiniGameAction;
- (void)onClickDramaAction;
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
- (id)redPackageContentTips;
- (void)setRedPackageContentTips:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)finderPostSessionid;
- (void)setFinderPostSessionid:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end
