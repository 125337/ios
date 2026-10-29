@interface CContactExtendCode : NSObject
+ (BOOL)code:(CFastStr *)arg1 key:(const char *)arg2 string:(id)arg3;
+ (BOOL)code:(CFastStr *)arg1 key:(const char *)arg2 integer:(unsigned int)arg3;
+ (BOOL)code:(CFastStr *)arg1 key:(const char *)arg2 PhoneList:(id)arg3;
+ (id)decodeToPhoneList:(XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (BOOL)code:(CFastStr *)arg1 key:(const char *)arg2 ChatRoomDetail:(id)arg3;
+ (id)decodeToChatRoomDetail:(XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToString:(XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned long long)decodeToInteger64:(XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned int)decodeToInteger:(XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned int)decodeToInteger:(XmlReaderNode_t *)arg1 attribute:(const char *)arg2;
+ (id)codeExtentField:(id)arg1;
+ (BOOL)decodeExtentField:(id)arg1 contact:(id)arg2;
+ (BOOL)decodeKeyExtentField:(id)arg1 contact:(id)arg2;
+ (void)codeContactField:(CFastStr *)arg1 contact:(id)arg2;
+ (void)decodeContactField:(XmlReaderNode_t *)arg1 contact:(id)arg2;
+ (void)decodeKeyContactField:(XmlReaderNode_t *)arg1 contact:(id)arg2;
+ (void)decodeKeyContactFieldPurePB:(char *)arg1 size:(unsigned int)arg2 contact:(id)arg3;
@end

