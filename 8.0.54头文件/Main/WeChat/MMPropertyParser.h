@interface MMPropertyParser : MMObject
+ (id)parsePropertyListForObj:(id)arg1;
+ (BOOL)shouldParserIgnoreToken:(id)arg1 forObj:(id)arg2;
+ (Class)rootClass;
+ (id)parseProperty:(objc_property *)arg1;
@end

