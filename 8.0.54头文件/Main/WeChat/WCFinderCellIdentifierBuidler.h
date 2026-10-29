@interface WCFinderCellIdentifierBuidler : NSObject
{
    unsigned long long _index; // +0x8
    NSMutableSet * _existsIdents; // +0x10
}
- (id)init;
- (id)createForObject:(id)arg1 setter:(id /* block */)arg2;
- (void)processIdentifier:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)existsIdents;
- (void)setExistsIdents:(id)arg1;
- (void).cxx_destruct;
@end

