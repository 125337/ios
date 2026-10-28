@interface TPOptionalParam : NSObject
{
    unsigned long long _paramType; // +0x8
    TPOptionalParamLong * _paramLong; // +0x10
    TPOptionalParamFloat * _paramFloat; // +0x18
    TPOptionalParamBool * _paramBool; // +0x20
    TPOptionalParamString * _paramString; // +0x28
    TPOptionalParamQueueInt * _paramQueueInt; // +0x30
    TPOptionalParamQueueString * _paramQueueString; // +0x38
    TPOptionalParamObject * _paramObject; // +0x40
}
+ (id)paramLongWithKey:(unsigned long long)arg1 value:(long long)arg2 param1:(long long)arg3 param2:(long long)arg4;
+ (id)paramFloatWithKey:(unsigned long long)arg1 value:(float)arg2 param1:(float)arg3 param2:(float)arg4;
+ (id)paramBoolWithKey:(unsigned long long)arg1 value:(BOOL)arg2 param1:(BOOL)arg3 param2:(BOOL)arg4;
+ (id)paramStringWithKey:(unsigned long long)arg1 value:(id)arg2 param1:(id)arg3 param2:(id)arg4;
+ (id)paramQueueIntWithKey:(unsigned long long)arg1 value:(id)arg2;
+ (id)paramQueueStringWithKey:(unsigned long long)arg1 value:(id)arg2;
+ (id)paramObjectWithkey:(unsigned long long)arg1 value:(id)arg2;
- (id)init;
- (unsigned long long)key;
- (long long)longValue;
- (long long)longParam1;
- (float)floatValue;
- (BOOL)boolValue;
- (id)stringValue;
- (id)queueIntValue;
- (id)queueStringValue;
- (id)objectValue;
- (id)description;
- (unsigned long long)paramType;
- (void)setParamType:(unsigned long long)arg1;
- (id)paramLong;
- (void)setParamLong:(id)arg1;
- (id)paramFloat;
- (void)setParamFloat:(id)arg1;
- (id)paramBool;
- (void)setParamBool:(id)arg1;
- (id)paramString;
- (void)setParamString:(id)arg1;
- (id)paramQueueInt;
- (void)setParamQueueInt:(id)arg1;
- (id)paramQueueString;
- (void)setParamQueueString:(id)arg1;
- (id)paramObject;
- (void)setParamObject:(id)arg1;
- (void).cxx_destruct;
@end
