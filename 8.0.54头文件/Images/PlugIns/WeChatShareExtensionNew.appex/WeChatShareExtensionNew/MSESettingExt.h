@interface MSESettingExt : NSObject <PBCoding>
{
    unsigned int firstTimeShareImageFlag; // +0x8
    unsigned int firstTimeShareTimelineFlag; // +0xc
}
+ (void)PBArrayAdd_firstTimeShareImageFlag;
+ (void)PBArrayAdd_firstTimeShareTimelineFlag;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)firstTimeShareImageFlag;
- (void)setFirstTimeShareImageFlag:(unsigned int)arg1;
- (unsigned int)firstTimeShareTimelineFlag;
- (void)setFirstTimeShareTimelineFlag:(unsigned int)arg1;
@end

