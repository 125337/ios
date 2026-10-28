@interface WCFinderScrollActionSection : NSObject
{
    NSString * _title; // +0x8
    long long _secType; // +0x10
    NSMutableArray * _items; // +0x18
}
- (long long)compare:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
