@interface EcsOpenStartExtraBuilder : NSObject
+ (id)buildWithJumpInfo:(id)arg1 jumpInfoJson:(id)arg2;
+ (void)fillExtra:(id)arg1 fromJumpInfo:(id)arg2;
+ (void)fillExtra:(id)arg1 fromJson:(id)arg2;
+ (id)pickDictFrom:(id)arg1 keys:(id)arg2;
+ (id)pickArrayFrom:(id)arg1 keys:(id)arg2;
+ (id)pickStringFrom:(id)arg1 keys:(id)arg2;
@end
