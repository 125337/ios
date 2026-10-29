@interface WCSessionPagePathBusinessParam : MMObject <NSCopying>
{
    NSString * _pagePathId; // +0x8
    NSString * _value; // +0x10
    NSString * _dataPath; // +0x18
    NSString * _businessId; // +0x20
    unsigned long long _action; // +0x28
}
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)pagePathId;
- (void)setPagePathId:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)dataPath;
- (void)setDataPath:(id)arg1;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

