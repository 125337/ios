@interface UIButtonFinderWhenTap : NSObject
{
    unsigned long long _hashValue; // +0x8
    id /* block */ _action; // +0x10
}
- (void)onTap:(id)arg1;
- (void)replaceBlock:(id /* block */)arg1;
- (unsigned long long)hashValue;
- (void)setHashValue:(unsigned long long)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
