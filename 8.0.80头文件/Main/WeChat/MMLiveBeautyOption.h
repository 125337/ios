@interface MMLiveBeautyOption : NSObject
{
    NSString * _itemId; // +0x8
    unsigned long long _type; // +0x10
    NSString * _itemGroupId; // +0x18
    unsigned long long _order; // +0x20
}
- (id)itemId;
- (void)setItemId:(id)arg1;
- (unsigned long long)type;
- (id)itemGroupId;
- (void)setItemGroupId:(id)arg1;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
