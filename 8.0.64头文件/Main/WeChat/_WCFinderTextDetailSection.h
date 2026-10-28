@interface _WCFinderTextDetailSection : NSObject
{
    NSString * _title; // +0x8
    long long _foldType; // +0x10
    NSMutableArray * _items; // +0x18
}
- (id)init;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)foldType;
- (void)setFoldType:(long long)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
