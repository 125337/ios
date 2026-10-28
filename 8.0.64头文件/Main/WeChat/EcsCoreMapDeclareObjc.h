@interface EcsCoreMapDeclareObjc : UnitRCObjcBaseClass <EcsCoreMapDeclare>
{
    NSArray * __stringKeyList; // +0x8
    NSArray * __stringValueList; // +0x10
    NSArray * __ecs_core_EcsOpenHandler_UrValueList; // +0x18
}
+ (id)toMap_map_string_string:(id)arg1;
+ (id)fromMap_map_string_string:(id)arg1;
+ (id)toMap_map_string_ecs_core_EcsOpenHandler_Ur:(id)arg1;
+ (id)fromMap_map_string_ecs_core_EcsOpenHandler_Ur:(id)arg1;
- (id)stringKeyList;
- (id)stringValueList;
- (id)ecs_core_EcsOpenHandler_UrValueList;
- (id)_stringKeyList;
- (void)set_stringKeyList:(id)arg1;
- (id)_stringValueList;
- (void)set_stringValueList:(id)arg1;
- (id)_ecs_core_EcsOpenHandler_UrValueList;
- (void)set_ecs_core_EcsOpenHandler_UrValueList:(id)arg1;
- (void).cxx_destruct;
@end
