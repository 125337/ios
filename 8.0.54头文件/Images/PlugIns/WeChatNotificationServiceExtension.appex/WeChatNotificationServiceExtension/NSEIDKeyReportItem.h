@interface NSEIDKeyReportItem : NSObject <PBCoding>
{
    BOOL isKeyLog; // +0x8
    unsigned int ID; // +0xc
    unsigned int key; // +0x10
    unsigned int value; // +0x14
}
+ (void)PBArrayAdd_ID;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_isKeyLog;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)ID;
- (void)setID:(unsigned int)arg1;
- (unsigned int)key;
- (void)setKey:(unsigned int)arg1;
- (unsigned int)value;
- (void)setValue:(unsigned int)arg1;
- (BOOL)isKeyLog;
- (void)setIsKeyLog:(BOOL)arg1;
@end

