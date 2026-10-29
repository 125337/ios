@interface ChatBotCardMessageCellView : CommonMessageCellView <CBTAsstBoardBaseViewModelDelegate, CBTAsstBoardBaseCellViewDelegate, ICdnComMgrExt>
{
    CBTAsstBoardBaseCellView * _embeddedCellView; // +0xb8
    CBTAsstBoardBaseViewModel * _boardViewModel; // +0xc0
    NSString * _thumbClientID; // +0xc8
}
- (void)layoutContentView;
- (void)setupEmbeddedCardWithCardWrap:(id)arg1;
- (void)setupImageCardWithCardWrap:(id)arg1;
- (void)setupAlertCardWithCardWrap:(id)arg1;
- (void)setupTextCardWithCardWrap:(id)arg1;
- (void)setupMenuCardWithCardWrap:(id)arg1;
- (void)setupNoticeTextCardWithCardWrap:(id)arg1;
- (void)bindMagicBrushCellView;
- (void)setupMagicBrushCardWithCardWrap:(id)arg1;
- (void)setupCoopV2CardWithCardWrap:(id)arg1;
- (void)setupMiniToolCardWithCardWrap:(id)arg1;
- (void)setupRichTextCardWithCardWrap:(id)arg1;
- (void)onNeedMagicBrushCardEnv;
- (id)agentRuntimeSceneInstanceHandleForViewModel:(id)arg1;
- (void)onNeedUpdateViewModel:(id)arg1;
- (void)onCellHeightUpdate:(double)arg1 cell:(id)arg2;
- (void)onDeleteSingleMessageFromCell:(id)arg1;
- (void)onTouchUpInside;
- (void)addTapGestureForCardTap;
- (void)onCardTapped;
- (void)startDownloadArticleThumb;
- (void)OnCdnDownload:(id)arg1;
- (void)setArticleThumbData:(id)arg1;
- (id)embeddedCellView;
- (void)setEmbeddedCellView:(id)arg1;
- (id)boardViewModel;
- (void)setBoardViewModel:(id)arg1;
- (id)thumbClientID;
- (void)setThumbClientID:(id)arg1;
- (void).cxx_destruct;
@end
