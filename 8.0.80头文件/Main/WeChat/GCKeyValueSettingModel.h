@interface GCKeyValueSettingModel : GCBaseCellModel
{
    BOOL _isNumber; // +0x8
    NSString * _key; // +0x10
}
- (id)value;
- (void)setValue:(id)arg1;
- (Class)bindCellClass;
- (id)key;
- (void)setKey:(id)arg1;
- (BOOL)isNumber;
- (void)setIsNumber:(BOOL)arg1;
- (void).cxx_destruct;
@end
