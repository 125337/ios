@interface OMJResourcePreloader : NSObject
{
    WeakPtr<XMJResourcePreloader> _backingPreloader; // +0x8
}
- (void)dealloc;
- (id)initWithBackingPreloader:(const void *)arg1;
- (void)setConcurrencyLimit:(long long)arg1;
- (void)setPreloadResourceSizeLimit:(long long)arg1;
- (void)startPreloading;
- (void)stopPreloading;
- (void)updateExpectedResourceUsage:(id)arg1;
- (WeakPtr<XMJResourcePreloader>)backingPreloader;
- (void)setBackingPreloader:(WeakPtr<XMJResourcePreloader>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
