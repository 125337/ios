@interface SequenceInfo : NSObject <PBCoding>
{
    unsigned int _MoreView_Seq; // +0x8
    unsigned int _Setting_Seq; // +0xc
    unsigned int _Privacy_Seq; // +0x10
    unsigned int _RecentOption_Seq; // +0x14
    unsigned int _General_Seq; // +0x18
    unsigned int _Plugin_Seq; // +0x1c
}
+ (void)PBArrayAdd_MoreView_Seq;
+ (void)PBArrayAdd_Setting_Seq;
+ (void)PBArrayAdd_Privacy_Seq;
+ (void)PBArrayAdd_RecentOption_Seq;
+ (void)PBArrayAdd_General_Seq;
+ (void)PBArrayAdd_Plugin_Seq;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)MoreView_Seq;
- (void)setMoreView_Seq:(unsigned int)arg1;
- (unsigned int)Setting_Seq;
- (void)setSetting_Seq:(unsigned int)arg1;
- (unsigned int)Privacy_Seq;
- (void)setPrivacy_Seq:(unsigned int)arg1;
- (unsigned int)RecentOption_Seq;
- (void)setRecentOption_Seq:(unsigned int)arg1;
- (unsigned int)General_Seq;
- (void)setGeneral_Seq:(unsigned int)arg1;
- (unsigned int)Plugin_Seq;
- (void)setPlugin_Seq:(unsigned int)arg1;
@end
