@interface ContactsCommon : NSObject
+ (void)initialize;
+ (id)parseContactKey:(id)arg1;
+ (id)parseContactKey:(id)arg1 chatRoom:(id)arg2;
+ (void)fixContactFullPy:(id)arg1;
+ (id)fixContactFullPyAndParseContactKey:(id)arg1;
@end

