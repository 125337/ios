@interface ContactProfileRecommendInfo : NSObject <PBCoding>
{
    unsigned int recommendTime; // +0x8
    unsigned int lastTextMessageLocalId; // +0xc
    NSString * userName; // +0x10
    NSString * profileMark; // +0x18
    NSString * profilePhone; // +0x20
    NSString * profileDesc; // +0x28
    NSMutableArray * _arrProfileLabel; // +0x30
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_profileMark;
+ (void)PBArrayAdd_profilePhone;
+ (void)PBArrayAdd_arrProfileLabel;
+ (void)PBArrayAdd_profileDesc;
+ (void)PBArrayAdd_recommendTime;
+ (void)PBArrayAdd_lastTextMessageLocalId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)copyFrom:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)profileMark;
- (void)setProfileMark:(id)arg1;
- (id)profilePhone;
- (void)setProfilePhone:(id)arg1;
- (id)profileDesc;
- (void)setProfileDesc:(id)arg1;
- (unsigned int)recommendTime;
- (void)setRecommendTime:(unsigned int)arg1;
- (unsigned int)lastTextMessageLocalId;
- (void)setLastTextMessageLocalId:(unsigned int)arg1;
- (id)arrProfileLabel;
- (void)setArrProfileLabel:(id)arg1;
- (void).cxx_destruct;
@end

