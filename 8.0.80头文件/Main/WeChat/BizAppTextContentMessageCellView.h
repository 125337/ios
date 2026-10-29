@interface BizAppTextContentMessageCellView : AppStandardTextContentMessageCellView
{
    BizAppMessageCellBaseHandler * _baseHandler; // +0xb8
}
- (void)layoutContentView;
- (BOOL)canBeReused;
- (void)onTouchUpInside;
- (id)contentImgViewsInSize:(CGSize)arg1 limit:(unsigned long long)arg2;
- (id)operationMenuItems;
- (void)onShowOperationMenu;
- (void)onYuanBaoSummary:(id)arg1;
- (void)onXiaoWeiSummary:(id)arg1;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (void)prepareForReuse;
- (void)updateWithViewModel:(id)arg1;
- (id)baseHandler;
- (void)setBaseHandler:(id)arg1;
- (void).cxx_destruct;
@end
