@interface WCFinderMsgSessionOwnerInfo : NSObject <PBCoding>
{
    BOOL _hasSetDefaultOwner; // +0x8
    NSString * _owner; // +0x10
    NSString * _lastOwner; // +0x18
}
+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_hasSetDefaultOwner;
+ (void)PBArrayAdd_lastOwner;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)owner;
- (void)setOwner:(id)arg1;
- (BOOL)hasSetDefaultOwner;
- (void)setHasSetDefaultOwner:(BOOL)arg1;
- (id)lastOwner;
- (void)setLastOwner:(id)arg1;
- (void).cxx_destruct;
@end
