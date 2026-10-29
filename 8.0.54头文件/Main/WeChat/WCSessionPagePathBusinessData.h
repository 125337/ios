@interface WCSessionPagePathBusinessData : MMObject <NSCopying>
{
    NSString * _businessId; // +0x8
    NSString * _value; // +0x10
    NSString * _dataPath; // +0x18
}
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)dataPath;
- (void)setDataPath:(id)arg1;
- (void).cxx_destruct;
@end

