@interface UnitRCFuncDeclareObjc : UnitRCObjcBaseClass <UnitRCFuncDeclare>
{
    id /* block */ _Void_Empty_Block; // +0x8
    id /* block */ _Void_Uint32Uint32String_Block; // +0x10
}
+ (id)from_Void_Empty_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_Empty_Block:(id)arg1;
+ (id)from_Void_Uint32Uint32String_Block:(id /* block */)arg1;
+ (id /* block */)to_Void_Uint32Uint32String_Block:(id)arg1;
- (void)Void_Empty;
- (void)Void_Uint32Uint32String:(unsigned int)arg1 errorType:(unsigned int)arg2 msg:(id)arg3;
- (id /* block */)Void_Empty_Block;
- (id /* block */)Void_Uint32Uint32String_Block;
- (void).cxx_destruct;
@end
