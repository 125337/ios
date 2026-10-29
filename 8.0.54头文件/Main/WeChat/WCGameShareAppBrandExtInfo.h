@interface WCGameShareAppBrandExtInfo : NSObject <NSCoding, PBCoding>
{
    unsigned int _priority; // +0x8
    NSString * _liteGameInfo; // +0x10
}
+ (void)PBArrayAdd_liteGameInfo;
+ (void)PBArrayAdd_priority;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)liteGameInfo;
- (void)setLiteGameInfo:(id)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (void).cxx_destruct;
@end

