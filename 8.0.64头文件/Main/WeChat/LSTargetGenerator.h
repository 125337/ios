@interface LSTargetGenerator : NSObject
{
    unsigned int _type; // +0x8
    SEL _sel; // +0x10
    id /* block */ _block; // +0x18
}
+ (id)createBySel:(SEL)arg1;
+ (id)createByBlock:(id /* block */)arg1;
- (id)init;
- (id)getTarget:(id)arg1;
- (id)getTarget:(id)arg1 withParams:(id)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (SEL)sel;
- (void)setSel:(SEL)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
