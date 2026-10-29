@interface QMUPointQuadTree : NSObject
{
    int _depth; // +0x8
    NSMutableArray * _children; // +0x10
    NSMutableArray * _items; // +0x18
    struct _bounds; // +0x20
}
- (id)initWithBounds:(struct)arg1;
- (id)initWithBounds:(struct)arg1 depth:(int)arg2;
- (id)queryWithBounds:(struct)arg1;
- (void)queryInternal:(id)arg1 bounds:(struct)arg2;
- (void)insert:(id)arg1;
- (void)insert:(struct)arg1 item:(id)arg2;
- (void)remove:(id)arg1;
- (void)remove:(struct)arg1 item:(id)arg2;
- (void)split;
- (int)depth;
- (void)setDepth:(int)arg1;
- (struct)bounds;
- (void)setBounds:(struct)arg1;
- (id)children;
- (void)setChildren:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
