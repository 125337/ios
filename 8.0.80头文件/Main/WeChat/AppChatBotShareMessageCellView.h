@interface AppChatBotShareMessageCellView : AppStandardTextContentMessageCellView
{
    AppChatBotShareContentView * _infoView; // +0xb8
}
- (void)dealloc;
- (id)chatBotShareViewModel;
- (id)infoView;
- (void)prepareForReuse;
- (id)contentImgViewsInSize:(CGSize)arg1 limit:(unsigned long long)arg2;
- (void)layoutContentView;
- (id)_shareCardReportParams;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onDelayedTouchUpInside;
- (id)operationMenuItems;
- (BOOL)canShowFavoriteMenuItem;
- (void)onClickAsRefer;
- (void)setInfoView:(id)arg1;
- (void).cxx_destruct;
@end
