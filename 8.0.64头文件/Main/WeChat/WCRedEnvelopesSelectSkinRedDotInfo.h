@interface WCRedEnvelopesSelectSkinRedDotInfo : NSObject <PBCoding>
{
    BOOL _isShow; // +0x8
    BOOL _selectskinpage_is_show; // +0x9
    NSString * _wording_cn; // +0x10
    NSString * _wording_hk; // +0x18
    NSString * _wording_tw; // +0x20
    NSString * _wording_en; // +0x28
    NSString * _iconUrl; // +0x30
    long long _exposureTimes; // +0x38
    long long _invalidateTime; // +0x40
    NSString * _version; // +0x48
    long long _effectiveTime; // +0x50
    long long _reddotType; // +0x58
    long long _selectskinpage_exposureTimes; // +0x60
    long long _selectskinpage_invalidateTime; // +0x68
    NSString * _tagName; // +0x70
}
+ (void)PBArrayAdd_isShow;
+ (void)PBArrayAdd_wording_cn;
+ (void)PBArrayAdd_wording_hk;
+ (void)PBArrayAdd_wording_tw;
+ (void)PBArrayAdd_wording_en;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_exposureTimes;
+ (void)PBArrayAdd_invalidateTime;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_effectiveTime;
+ (void)PBArrayAdd_reddotType;
+ (void)PBArrayAdd_selectskinpage_is_show;
+ (void)PBArrayAdd_selectskinpage_exposureTimes;
+ (void)PBArrayAdd_selectskinpage_invalidateTime;
+ (void)PBArrayAdd_tagName;
+ (void)initialize;
+ (BOOL)isVersionExist:(id)arg1;
+ (void)clearLocalRedDotInfo;
+ (void)saveVersion:(id)arg1;
+ (void)saveClickReddotTime:(unsigned int)arg1;
+ (unsigned int)getClickReddotTime;
+ (id)getMMKV;
+ (id)InfoFromCoverSetRedDotInfo:(id)arg1;
+ (id)CurrentRedDot;
+ (unsigned int)getEffectiveEndTime;
+ (void)saveEffectiveEndTime:(unsigned int)arg1;
+ (BOOL)isSkinPlazaClicked;
+ (void)setSkinPlazaClicked;
+ (void)addVersionToNeverShowList:(id)arg1;
+ (BOOL)isVersionInNeverShowList:(id)arg1;
- (id)getPBPropertyTable;
- (id)getWording;
- (void)save;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg1;
- (id)wording_cn;
- (void)setWording_cn:(id)arg1;
- (id)wording_hk;
- (void)setWording_hk:(id)arg1;
- (id)wording_tw;
- (void)setWording_tw:(id)arg1;
- (id)wording_en;
- (void)setWording_en:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (long long)exposureTimes;
- (void)setExposureTimes:(long long)arg1;
- (long long)invalidateTime;
- (void)setInvalidateTime:(long long)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (long long)effectiveTime;
- (void)setEffectiveTime:(long long)arg1;
- (long long)reddotType;
- (void)setReddotType:(long long)arg1;
- (BOOL)selectskinpage_is_show;
- (void)setSelectskinpage_is_show:(BOOL)arg1;
- (long long)selectskinpage_exposureTimes;
- (void)setSelectskinpage_exposureTimes:(long long)arg1;
- (long long)selectskinpage_invalidateTime;
- (void)setSelectskinpage_invalidateTime:(long long)arg1;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (void).cxx_destruct;
@end
