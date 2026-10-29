@interface WCFinderLimitedContentActionSheet : WCActionSheet <WCFinderSelectPanelViewDelegate>
{
    id <WCFinderLimitedContentActionSheetDelegate> _finderDelegate; // +0x8
    NSString * _titleContent; // +0x10
    NSArray * _gridModels; // +0x18
    UIView * _tipsView; // +0x20
    WCFinderSelectPanelView * _panelView; // +0x28
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)onClickCancelButton;
- (void)onClickConfirmButton;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (id)titleContent;
- (void)setTitleContent:(id)arg1;
- (id)gridModels;
- (void)setGridModels:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (void).cxx_destruct;
@end

