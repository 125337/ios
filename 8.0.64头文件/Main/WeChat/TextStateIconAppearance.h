@interface TextStateIconAppearance : NSObject <PBCoding>
{
    unsigned int _beginTime; // +0x8
    unsigned int _endTime; // +0xc
    unsigned int _order; // +0x10
    NSString * _iconURL; // +0x18
    NSString * _bigIconURL; // +0x20
    NSString * _unreadTextColorString; // +0x28
    NSString * _groupId; // +0x30
    unsigned long long _option; // +0x38
    NSMutableDictionary * _localeToIconDescriptionDict; // +0x40
    NSString * _iconDescription; // +0x48
    NSMutableDictionary * _localeToClusterDescriptionDict; // +0x50
    NSString * _clusterDescription; // +0x58
    NSMutableDictionary * _localeToOtherClusterDescriptionDict; // +0x60
    NSMutableDictionary * _localeToMyselfAloneDescriptionDict; // +0x68
    NSMutableDictionary * _localeToWithMeClusterDescriptionDict; // +0x70
    NSString * _otherClusterDescription; // +0x78
    NSString * _myselfAloneDescription; // +0x80
    NSString * _withMeClusterDescription; // +0x88
    UIColor * _unreadTextColor; // +0x90
}
+ (void)PBArrayAdd_beginTime;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_order;
+ (void)PBArrayAdd_option;
+ (void)PBArrayAdd_localeToIconDescriptionDict;
+ (void)PBArrayAdd_localeToClusterDescriptionDict;
+ (void)PBArrayAdd_localeToOtherClusterDescriptionDict;
+ (void)PBArrayAdd_bigIconURL;
+ (void)PBArrayAdd_unreadTextColorString;
+ (void)PBArrayAdd_localeToMyselfAloneDescriptionDict;
+ (void)PBArrayAdd_localeToWithMeClusterDescriptionDict;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithAction:(id)arg1;
- (id)action;
- (BOOL)isQualifiedForShow;
- (BOOL)isQualifiedForPublish;
- (id)unreadTextColor;
- (id)iconDescription;
- (id)clusterDescription;
- (id)otherClusterDescription;
- (id)myselfAloneDescription;
- (id)withMeClusterDescription;
- (id)getLocalizedDescriptionFromDict:(id)arg1 entity:(id)arg2;
- (void)clearCachedDescription;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)bigIconURL;
- (void)setBigIconURL:(id)arg1;
- (id)unreadTextColorString;
- (void)setUnreadTextColorString:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (unsigned int)order;
- (void)setOrder:(unsigned int)arg1;
- (unsigned long long)option;
- (void)setOption:(unsigned long long)arg1;
- (id)localeToIconDescriptionDict;
- (void)setLocaleToIconDescriptionDict:(id)arg1;
- (void)setIconDescription:(id)arg1;
- (id)localeToClusterDescriptionDict;
- (void)setLocaleToClusterDescriptionDict:(id)arg1;
- (void)setClusterDescription:(id)arg1;
- (id)localeToOtherClusterDescriptionDict;
- (void)setLocaleToOtherClusterDescriptionDict:(id)arg1;
- (id)localeToMyselfAloneDescriptionDict;
- (void)setLocaleToMyselfAloneDescriptionDict:(id)arg1;
- (id)localeToWithMeClusterDescriptionDict;
- (void)setLocaleToWithMeClusterDescriptionDict:(id)arg1;
- (void)setOtherClusterDescription:(id)arg1;
- (void)setMyselfAloneDescription:(id)arg1;
- (void)setWithMeClusterDescription:(id)arg1;
- (void)setUnreadTextColor:(id)arg1;
- (void).cxx_destruct;
@end
