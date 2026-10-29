@interface MsgImgSearchPhashInfo : MMObject <PBCoding>
{
    BOOL _hasShowOnce; // +0x8
    unsigned int _expiredTime; // +0xc
    NSString * _phashStr; // +0x10
    NSString * _bubbleTitle; // +0x18
}
+ (void)PBArrayAdd_phashStr;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_bubbleTitle;
+ (void)PBArrayAdd_hasShowOnce;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)phashStr;
- (void)setPhashStr:(id)arg1;
- (unsigned int)expiredTime;
- (void)setExpiredTime:(unsigned int)arg1;
- (id)bubbleTitle;
- (void)setBubbleTitle:(id)arg1;
- (BOOL)hasShowOnce;
- (void)setHasShowOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end

