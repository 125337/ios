@interface WCGameShareLiteAppExtInfo : NSObject <NSCoding, PBCoding>
{
    unsigned int _priority; // +0x8
    NSString * _bizData; // +0x10
}
+ (void)PBArrayAdd_bizData;
+ (void)PBArrayAdd_priority;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)bizData;
- (void)setBizData:(id)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (void).cxx_destruct;
@end
