@interface MPPagePayInfo : MMObject <PBCoding>
{
    BOOL _isPaid; // +0x8
    BOOL _isPaySubscribe; // +0x9
    NSString * _friendPayCountStr; // +0x10
}
+ (void)PBArrayAdd_isPaid;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_friendPayCountStr;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isPaid;
- (void)setIsPaid:(BOOL)arg1;
- (id)friendPayCountStr;
- (void)setFriendPayCountStr:(id)arg1;
- (BOOL)isPaySubscribe;
- (void)setIsPaySubscribe:(BOOL)arg1;
- (void).cxx_destruct;
@end

