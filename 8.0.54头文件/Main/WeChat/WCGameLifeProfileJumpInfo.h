@interface WCGameLifeProfileJumpInfo : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _jumpType; // +0x8
    NSString * _jumpUrl; // +0x10
}
+ (void)PBArrayAdd_jumpUrl;
+ (void)PBArrayAdd_jumpType;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithGameLifeJumpInfo:(id)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

