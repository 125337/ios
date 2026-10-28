@interface OMJRenderView : UIView
{
    shared_ptr<XMJRenderView> _backingView; // +0x8
}
- (id)initWithBackingView:(shared_ptr<XMJRenderView>)arg1;
- (void)dealloc;
- (void)teardownIfNeeded;
- (void)layoutSubviews;
- (shared_ptr<XMJRenderView>)backingView;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
