@interface MMAuthorizationRequestDialog : MMAutoLayoutSheetView
{
    id /* block */ _aggreeBlock; // +0x8
    id /* block */ _rejectBlock; // +0x10
}
- (id)init;
- (id)genCommonButtonsView;
- (id /* block */)aggreeBlock;
- (void)setAggreeBlock:(id /* block */)arg1;
- (id /* block */)rejectBlock;
- (void)setRejectBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

