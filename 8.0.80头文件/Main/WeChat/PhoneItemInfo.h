@interface PhoneItemInfo : NSObject <PBCoding, NSCoding>
{
    BOOL bFromHash; // +0x8
    long long index; // +0x10
    NSString * _phoneNum; // +0x18
}
+ (void)PBArrayAdd_phoneNum;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)bFromHash;
- (void)setBFromHash:(BOOL)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)phoneNum;
- (void)setPhoneNum:(id)arg1;
- (void).cxx_destruct;
@end
