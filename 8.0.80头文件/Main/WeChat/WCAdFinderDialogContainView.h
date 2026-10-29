@interface WCAdFinderDialogContainView : UIScrollView <UIScrollViewDelegate, WCAdFinderDialogBaseViewDelegate>
{
    WCAdFinderDialogBaseInfo * _dialogInfo; // +0x8
    WCAdFinderDialogBaseView * _dialogDetailView; // +0x10
    id <WCAdFinderDialogContainViewDelegate> _containerDelegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 dialogInfo:(id)arg2;
- (void)generateContentViews;
- (void)layoutSubviews;
- (void)viewDidTransitionToNewSize;
- (id)dialogDetailView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onDialogViewConfirmButtonClicked;
- (id)dialogInfo;
- (void)setDialogInfo:(id)arg1;
- (void)setDialogDetailView:(id)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (void).cxx_destruct;
@end
