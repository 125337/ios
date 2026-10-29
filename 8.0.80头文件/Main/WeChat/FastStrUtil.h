@interface FastStrUtil : NSObject
+ (BOOL)code:(CFastStr *)arg1 key:(const char *)arg2 string:(id)arg3;
+ (BOOL)code:(CFastStr *)arg1 key:(const char *)arg2 integer:(unsigned int)arg3;
+ (id)decodeToString:(XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned int)decodeToInteger:(XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned int)decodeToInteger:(XmlReaderNode_t *)arg1 attribute:(const char *)arg2;
@end
