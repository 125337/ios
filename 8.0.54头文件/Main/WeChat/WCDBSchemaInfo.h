@interface WCDBSchemaInfo : NSObject
{
    NSMutableDictionary * _infos; // +0x8
}
- (id)getOrCreateInfo:(id)arg1;
- (void)addSchema:(id)arg1;
- (void)addSequence:(id)arg1;
- (void)setCount:(id)arg1 forTable:(id)arg2;
- (id)description;
- (void).cxx_destruct;
@end

