@interface WAPNAuthListSubview : WAAuthPageSheetBaseView
{
    BOOL _completed; // +0x8
    UIView * _normalContainer; // +0x10
    NSMutableArray * _rows; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)phoneList;
- (id)viewModel;
- (void)layoutNormalRows;
- (void)layoutAgentRows;
- (void)addAgentSeparatorAtTop:(double)arg1 edge:(double)arg2;
- (void)onTapRow:(id)arg1;
- (void)refreshSelection;
- (void)showCompletedOverlay;
- (void)applyCompletedOverlay;
- (id)normalContainer;
- (void)setNormalContainer:(id)arg1;
- (id)rows;
- (void)setRows:(id)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end
