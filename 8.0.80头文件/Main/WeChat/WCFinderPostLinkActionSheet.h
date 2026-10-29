@interface WCFinderPostLinkActionSheet : MMPageSheetBaseViewController
{
    int _commentScene; // +0x70
    id <WCFinderPostLinkActionSheetDelegate> _m_delegate; // +0x78
    long long _linkFlag; // +0x80
    NSString * _redPackageContentTips; // +0x88
    unsigned long long _enterScene; // +0x90
    NSString * _finderPostSessionid; // +0x98
    NSArray * _postAttachmentInfos; // +0xa0
    UIView * _tipsView; // +0xa8
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)pageSheetDidRotation;
- (void)updateLinkContentLayout;
- (id)getTipsActionSheetView;
- (void)bindReportViewFrom:(id)arg1 eid:(id)arg2;
- (void)onClickWeComAction;
- (void)onClickWxArticleAction;
- (void)onClickRedEnvelopeAction;
- (void)onClickTxspAction;
- (void)onClickMiniGameAction;
- (void)onClickDramaAction;
- (void)onClickCollectionAction;
- (void)onClickPostAttachmentAction:(id)arg1;
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
- (id)postAttachmentInfos;
- (void)setPostAttachmentInfos:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end
