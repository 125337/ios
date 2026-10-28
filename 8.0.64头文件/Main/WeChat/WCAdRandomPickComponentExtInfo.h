@interface WCAdRandomPickComponentExtInfo : NSObject <NSCoding, PBCoding>
{
    NSArray * _pickedCardsList; // +0x8
}
+ (void)PBArrayAdd_pickedCardsList;
+ (void)initialize;
+ (id)fromResponseExtInfo:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)mergeWithExtInfo:(id)arg1;
- (id)pickedCardsList;
- (void)setPickedCardsList:(id)arg1;
- (void).cxx_destruct;
@end
