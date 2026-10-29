@interface StorageUsageDetailModel : NSObject
{
    unsigned long long _type; // +0x8
    unsigned long long _size; // +0x10
    NSString * _title; // +0x18
    NSString * _usageDescription; // +0x20
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)usageDescription;
- (void)setUsageDescription:(id)arg1;
- (void).cxx_destruct;
@end

