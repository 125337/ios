@interface TextStateIcon : NSObject <TextStateIcon, PBCoding>
{
    unsigned int _type; // +0x8
    unsigned int _showType; // +0xc
    NSString * _iconId; // +0x10
    unsigned long long _flags; // +0x18
    NSString * _customIconDescription; // +0x20
    NSMutableArray * _candidateAppearances; // +0x28
}
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_candidateAppearances;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_flags;
+ (void)initialize;
- (BOOL)isDNDMode;
- (id)getPBPropertyTable;
- (id)initWithIcon:(id)arg1;
- (id)initWithIconId:(id)arg1 type:(unsigned int)arg2 actions:(id)arg3;
- (id)initWithIconId:(id)arg1 type:(unsigned int)arg2 showType:(unsigned int)arg3 actions:(id)arg4 flags:(unsigned long long)arg5;
- (id)actions;
- (id)icon;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)winnerAppearance;
- (id)appearance;
- (void)clearCachedDescription;
- (BOOL)isValidForShow;
- (BOOL)isValidForPublish;
- (id)iconDescription;
- (id)clusterDescription;
- (id)selfStatusDescription;
- (id)withMeClusterDescription;
- (id)otherClusterDescription;
- (BOOL)useOriginImage;
- (id)imageURLString;
- (id)bigImageURLString;
- (id)unreadTextColor;
- (BOOL)isCustom;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (unsigned long long)flags;
- (void)setFlags:(unsigned long long)arg1;
- (id)customIconDescription;
- (void)setCustomIconDescription:(id)arg1;
- (id)candidateAppearances;
- (void)setCandidateAppearances:(id)arg1;
- (void).cxx_destruct;
@end
