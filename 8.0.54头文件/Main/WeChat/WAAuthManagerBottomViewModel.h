@interface WAAuthManagerBottomViewModel : NSObject
{
    BOOL _isEdit; // +0x8
    double _viewHeight; // +0x10
    id /* block */ _editButtonClickAction; // +0x18
}
- (id)initWithViewHeight:(double)arg1 isEdit:(BOOL)arg2;
- (double)viewHeight;
- (void)setViewHeight:(double)arg1;
- (BOOL)isEdit;
- (void)setIsEdit:(BOOL)arg1;
- (id /* block */)editButtonClickAction;
- (void)setEditButtonClickAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

