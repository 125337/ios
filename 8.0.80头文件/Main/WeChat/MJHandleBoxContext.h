@interface MJHandleBoxContext : NSObject
{
    MJImageLayerViewModel * _layer; // +0x8
    unsigned long long _options; // +0x10
    OMJHandleBoxBorderStyle * _borderStyle; // +0x18
    NSArray * _items; // +0x20
    NSArray * _titles; // +0x28
    id /* block */ _action; // +0x30
}
+ (id)defaultTitleWithLayerType:(unsigned long long)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithLayer:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)handleBoxDeleteItemAction;
- (void)handleBoxEditItemContentAction;
- (id)layer;
- (unsigned long long)options;
- (id)borderStyle;
- (id)items;
- (id)titles;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
