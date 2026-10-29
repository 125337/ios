@interface TextStatePassthroughIcon : NSObject <PBCoding>
{
    unsigned int _beginTime; // +0x8
    unsigned int _endTime; // +0xc
    NSString * _iconId; // +0x10
}
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_beginTime;
+ (void)PBArrayAdd_endTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithIcon:(id)arg1;
- (BOOL)isActive;
- (id)identifier;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

