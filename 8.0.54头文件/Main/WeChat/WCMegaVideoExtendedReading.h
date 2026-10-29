@interface WCMegaVideoExtendedReading : NSObject <WCTColumnCoding, PBCoding>
{
    NSString * _link; // +0x8
    NSString * _title; // +0x10
}
+ (void)PBArrayAdd_link;
+ (void)PBArrayAdd_title;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoExtendedReading:(id)arg1;
- (id)genMegaVideoExtendedReading;
- (id)description;
- (id)link;
- (void)setLink:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

