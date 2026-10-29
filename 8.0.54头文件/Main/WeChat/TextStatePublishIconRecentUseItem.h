@interface TextStatePublishIconRecentUseItem : NSObject <PBCoding>
{
    unsigned int _useTime; // +0x8
    unsigned int _isCustom; // +0xc
    NSString * _iconId; // +0x10
    NSString * _iconDescription; // +0x18
}
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_iconDescription;
+ (void)PBArrayAdd_useTime;
+ (void)PBArrayAdd_isCustom;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)key;
- (BOOL)isValid;
- (BOOL)hasExpired;
- (long long)compare:(id)arg1;
- (id)description;
- (BOOL)isEqualToItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (id)iconDescription;
- (void)setIconDescription:(id)arg1;
- (unsigned int)useTime;
- (void)setUseTime:(unsigned int)arg1;
- (unsigned int)isCustom;
- (void)setIsCustom:(unsigned int)arg1;
- (void).cxx_destruct;
@end

