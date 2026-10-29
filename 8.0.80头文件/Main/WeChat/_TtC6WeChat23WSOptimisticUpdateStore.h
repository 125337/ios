@interface _TtC6WeChat23WSOptimisticUpdateStore : NSObject
{
     queue; // +0x8
     records; // +0x10
}
+ (id)shared;
+ (void)saveFromExtraDataDict:(id)arg1 eventId:(id)arg2 hotwordType:(id)arg3;
+ (void)removeWithEventId:(id)arg1 hotwordType:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
