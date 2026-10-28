@interface QBUniPacket : QBRequestPacket
{
    QBUniAttribute * _attributes; // +0x8
}
+ (id)packet;
- (id)init;
- (id)description;
- (id)objectKeyWithName:(id)arg1;
- (void)__pack:(id)arg1;
- (void)__unpack:(id)arg1;
- (id)getObjectAttr:(id)arg1 forClass:(Class)arg2;
- (void)putDataAttr:(id)arg1 value:(id)arg2;
- (void)putObjectAttr:(id)arg1 type:(id)arg2 value:(id)arg3;
- (void)putObjectAttr:(id)arg1 value:(id)arg2;
- (long long)getReturnCode;
- (void).cxx_destruct;
- (id)attributes;
@end
