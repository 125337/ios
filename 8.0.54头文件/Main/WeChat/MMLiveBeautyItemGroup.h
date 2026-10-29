@interface MMLiveBeautyItemGroup : NSObject
{
    NSString * _groupId; // +0x8
    NSString * _displayName; // +0x10
    NSArray * _items; // +0x18
    unsigned long long _order; // +0x20
}
+ (id)itemGroupInJsonDictionary:(id)arg1 suiteId:(id)arg2;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

