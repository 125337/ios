@interface WeiShiReaderMessageCellView : BaseMessageCellView <WeiShiReaderItemViewDelegate, WeiShiMsgCardMenuDelegate>
{
    WeShiReaderItemView * itemView; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (BOOL)bShouldReportShowInfo;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)getReadWraps;
- (BOOL)canPeek;
- (BOOL)canCellShowOperationMenu;
- (id)getCurrentViewController;
- (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (id)getWebViewController:(id)arg1 url:(id)arg2;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(id)arg2;
- (id)getMenuItems;
- (void)onFavoriteMenu:(id)arg1;
- (void)onForwardMenu:(id)arg1;
- (void)onMoreMenu:(id)arg1;
- (void)onAppear;
- (void)doWeishiRepor:(unsigned int)arg1 topNewsTitle:(id)arg2 readerWrap:(id)arg3;
- (void).cxx_destruct;
@end

