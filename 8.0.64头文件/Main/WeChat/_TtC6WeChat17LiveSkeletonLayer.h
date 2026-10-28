@interface _TtC6WeChat17LiveSkeletonLayer : NSObject
{
     layer; // +0x8
     parent; // +0x10
     transition; // +0x18
}
- (id)layer;
- (void)setLayer:(id)arg1;
- (void)layout;
- (void)updateWithColor:(id)arg1;
- (void)removeWithComplete:(id /* block */)arg1;
- (void)insertTo:(id)arg1 complete:(id /* block */)arg2;
- (void)clean;
- (id)init;
- (void).cxx_destruct;
@end
