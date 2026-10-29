@interface WCSessionDSLDataModel : MMObject
{
    unsigned int _chainIndex; // +0x8
    NSString * _fieldName; // +0x10
    NSString * _fieldType; // +0x18
    NSString * _containerIndex; // +0x20
    NSString * _containerKey; // +0x28
    NSString * _methodName; // +0x30
    NSString * _methodAttr; // +0x38
}
- (id)toString;
- (id)fieldName;
- (void)setFieldName:(id)arg1;
- (id)fieldType;
- (void)setFieldType:(id)arg1;
- (id)containerIndex;
- (void)setContainerIndex:(id)arg1;
- (id)containerKey;
- (void)setContainerKey:(id)arg1;
- (id)methodName;
- (void)setMethodName:(id)arg1;
- (id)methodAttr;
- (void)setMethodAttr:(id)arg1;
- (unsigned int)chainIndex;
- (void)setChainIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end

