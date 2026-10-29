@interface MMRegion : NSObject
{
    int type; // +0x8
    int numbersOfChildren; // +0xc
    NSString * code; // +0x10
    NSString * name; // +0x18
    NSString * parentCode; // +0x20
}
- (id)description;
- (id)code;
- (void)setCode:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)parentCode;
- (void)setParentCode:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)numbersOfChildren;
- (void)setNumbersOfChildren:(int)arg1;
- (void).cxx_destruct;
@end

