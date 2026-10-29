@interface WCDBTableInfo : NSObject
{
    NSMutableArray * _schemas; // +0x8
    NSMutableArray * _sequences; // +0x10
    NSNumber * _count; // +0x18
}
- (void)setCount:(id)arg1;
- (void)addSchema:(id)arg1;
- (void)addSequence:(id)arg1;
- (id)description;
- (void).cxx_destruct;
@end

