@interface ImageTextReaderMessageCellView : ReaderMessageCellView
{
    UIImageView * m_bgImageView; // +0x48
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (void)onAppear;
- (void)layoutContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)onHeadImageClick;
- (void)onOPButtonClicked:(id)arg1;
- (void)onClicked;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)jumpOpItem:(id)arg1;
- (void)forwardMessage;
- (void)addFavorite;
- (id)operationMenuItems;
- (void).cxx_destruct;
@end
