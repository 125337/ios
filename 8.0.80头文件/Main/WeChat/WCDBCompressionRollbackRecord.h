@interface WCDBCompressionRollbackRecord : NSObject <PBCoding>
{
    NSMutableSet * _rollbackTags; // +0x8
}
+ (void)PBArrayAdd_rollbackTags;
+ (void)initialize;
- (id)init;
- (id)getPBPropertyTable;
- (id)rollbackTags;
- (void)setRollbackTags:(id)arg1;
- (void).cxx_destruct;
@end
