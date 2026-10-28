@interface WCFinderProfileMemberShipInfo : NSObject <PBCoding>
{
    BOOL _isBlocked; // +0x8
    NSString * _title; // +0x10
    NSString * _summary; // +0x18
    NSString * _iconName; // +0x20
    UIColor * _iconColor; // +0x28
    unsigned long long _memberShipStatus; // +0x30
    unsigned long long _visitorStatus; // +0x38
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_iconName;
+ (void)PBArrayAdd_memberShipStatus;
+ (void)PBArrayAdd_visitorStatus;
+ (void)PBArrayAdd_isBlocked;
+ (void)initialize;
+ (id)fromMemberShipResponse:(id)arg1;
+ (id)formatSummaryTitle:(id)arg1;
+ (id)formatIconName:(unsigned long long)arg1;
+ (id)formatIconColor:(unsigned long long)arg1;
- (id)getPBPropertyTable;
- (BOOL)isEqualToMemberShipInfo:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (unsigned long long)memberShipStatus;
- (void)setMemberShipStatus:(unsigned long long)arg1;
- (unsigned long long)visitorStatus;
- (void)setVisitorStatus:(unsigned long long)arg1;
- (BOOL)isBlocked;
- (void)setIsBlocked:(BOOL)arg1;
- (void).cxx_destruct;
@end
