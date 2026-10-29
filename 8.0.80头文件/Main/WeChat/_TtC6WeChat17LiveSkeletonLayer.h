@interface _TtC6WeChat17LiveSkeletonLayer : NSObject
{
    CALayer * layer; // +0x8
     parent; // +0x10
     transition; // +0x18
     solidColor; // +0x20
     gradientColors; // +0x28
}
- (id)layer;
- (void)setLayer:(id)arg1;
- (void)layout;
- (void)updateWithColor:(id)arg1;
- (void)refreshColorsForTraitChange;
- (void)removeWithComplete:(id /* block */)arg1;
- (void)insertTo:(id)arg1 position:(long long)arg2 complete:(id /* block */)arg3;
- (void)clean;
- (id)init;
- (void).cxx_destruct;
@end
