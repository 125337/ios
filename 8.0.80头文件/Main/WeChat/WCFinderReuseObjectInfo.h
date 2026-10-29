@interface WCFinderReuseObjectInfo : NSObject
{
    BOOL _autoCallPrepareForReuse; // +0x8
    NSString * _identifier; // +0x10
    id /* block */ _factory; // +0x18
    id /* block */ _setter; // +0x20
    id /* block */ _beforeEnqueue; // +0x28
    id /* block */ _prepareForReuse; // +0x30
}
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id /* block */)factory;
- (void)setFactory:(id /* block */)arg1;
- (id /* block */)setter;
- (void)setSetter:(id /* block */)arg1;
- (id /* block */)beforeEnqueue;
- (void)setBeforeEnqueue:(id /* block */)arg1;
- (id /* block */)prepareForReuse;
- (void)setPrepareForReuse:(id /* block */)arg1;
- (BOOL)autoCallPrepareForReuse;
- (void)setAutoCallPrepareForReuse:(BOOL)arg1;
- (void).cxx_destruct;
@end
