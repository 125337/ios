@interface OVCPlaybackViewWrapper : UIView
{
    OVCPlaybackView * _backingPlaybackView; // +0x8
}
- (id)init;
- (void)layoutSubviews;
- (id)backingPlaybackView;
- (void)teardown;
- (void)setBackingPlaybackView:(id)arg1;
- (void).cxx_destruct;
@end
