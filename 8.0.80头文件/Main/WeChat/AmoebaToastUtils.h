@interface AmoebaToastUtils : NSObject
{
    UIView * toastView; // +0x8
    NSTimer * toastTimer; // +0x10
    NSTimer * dismissTimer; // +0x18
    id /* block */ finishHandler; // +0x20
}
+ (id)toast;
- (void)showToast:(id)arg1;
- (void)showToast:(id)arg1 duration:(double)arg2;
- (void)showToast:(id)arg1 duration:(double)arg2 gravity:(long long)arg3;
- (void)showToast:(id)arg1 duration:(double)arg2 gravity:(long long)arg3 finishHandler:(id /* block */)arg4;
- (void)toastShow:(id)arg1 duration:(double)arg2 gravity:(long long)arg3 finishHandler:(id /* block */)arg4;
- (void)initToastView:(id)arg1 gravity:(long long)arg2;
- (void)finishDismiss;
- (void)dismiss;
- (void)removeToast;
- (void)dealloc;
- (CGSize)getToastSizeWithMessage:(id)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (id)toastTimer;
- (void)setToastTimer:(id)arg1;
- (id)dismissTimer;
- (void)setDismissTimer:(id)arg1;
- (id /* block */)finishHandler;
- (void)setFinishHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
