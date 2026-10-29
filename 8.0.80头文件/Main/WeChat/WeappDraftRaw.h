@interface WeappDraftRaw : NSObject
{
    NSNumber * _hasDraft; // +0x8
    NSString * _draftJson; // +0x10
}
+ (id)makeWithHasDraft:(id)arg1 draftJson:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)hasDraft;
- (void)setHasDraft:(id)arg1;
- (id)draftJson;
- (void)setDraftJson:(id)arg1;
- (void).cxx_destruct;
@end
