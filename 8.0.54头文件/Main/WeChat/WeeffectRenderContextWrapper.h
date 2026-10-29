@interface WeeffectRenderContextWrapper : NSObject
{
    long long _renderType; // +0x8
    VisEffectRenderContextWrapper * _visContextWrapper; // +0x10
    CdnRenderContextWrapper * _cdnContextWrapper; // +0x18
}
- (id)initWithVisContext:(id)arg1;
- (id)initWithCdnContext:(id)arg1;
- (long long)renderType;
- (void)setRenderType:(long long)arg1;
- (id)visContextWrapper;
- (void)setVisContextWrapper:(id)arg1;
- (id)cdnContextWrapper;
- (void)setCdnContextWrapper:(id)arg1;
- (void).cxx_destruct;
@end

