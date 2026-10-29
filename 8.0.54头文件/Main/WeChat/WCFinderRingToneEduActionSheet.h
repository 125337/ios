@interface WCFinderRingToneEduActionSheet : WCActionSheet
{
    id /* block */ _setRingToneCgiBlock; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    UIView * _tipsView; // +0x18
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)onClickSetRingToneAction;
- (void)onClickCloseBtn;
- (id /* block */)setRingToneCgiBlock;
- (void)setSetRingToneCgiBlock:(id /* block */)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end

