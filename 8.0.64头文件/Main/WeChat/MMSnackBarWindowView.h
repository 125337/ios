@interface MMSnackBarWindowView : UIView
{
    MMSnackBarView * _snackBarView; // +0x8
    id <MMSnackBarWindowViewDelegate> _delegate; // +0x10
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setSnackBarView:(id)arg1;
- (void)updateSnackBarPosition;
- (id)snackBarView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
