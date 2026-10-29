@interface ObjcRuntimeUtil : NSObject
+ (BOOL)isClass:(Class)arg1 inheritsFromClass:(Class)arg2;
+ (objc_method_description *)wcvmProtocolCopyMethodDescriptionList:(id)arg1 requiredMethod:(BOOL)arg2 instanceMethod:(BOOL)arg3 outCount:(unsigned int *)arg4;
+ (vector<objc_method_description, std::allocator<objc_method_description>>)getAllMethodOfProtocol:(id)arg1;
@end

