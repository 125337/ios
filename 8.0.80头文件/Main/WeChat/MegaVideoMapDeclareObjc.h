@interface MegaVideoMapDeclareObjc : UnitRCObjcBaseClass <MegaVideoMapDeclare>
{
    NSArray * __stringKeyList; // +0x8
    NSArray * __byteArrayValueList; // +0x10
    NSArray * __stringValueList; // +0x18
}
+ (id)toMap_map_string_byteArray:(id)arg1;
+ (id)fromMap_map_string_byteArray:(id)arg1;
+ (id)toMap_map_string_string:(id)arg1;
+ (id)fromMap_map_string_string:(id)arg1;
- (id)stringKeyList;
- (id)byteArrayValueList;
- (id)stringValueList;
- (id)_stringKeyList;
- (void)set_stringKeyList:(id)arg1;
- (id)_byteArrayValueList;
- (void)set_byteArrayValueList:(id)arg1;
- (id)_stringValueList;
- (void)set_stringValueList:(id)arg1;
- (void).cxx_destruct;
@end
