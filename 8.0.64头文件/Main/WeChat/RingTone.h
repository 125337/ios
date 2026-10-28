@interface RingTone : MMObject <NSCoding, PBCoding, NSCopying>
{
    BOOL _isPlaying; // +0x8
    unsigned int _musicSid; // +0xc
    unsigned long long _objectId; // +0x10
    NSString * _nonceId; // +0x18
    double _startTime; // +0x20
    double _endTime; // +0x28
    NSString * _userName; // +0x30
    unsigned long long _type; // +0x38
    RingToneDetail * _detail; // +0x40
}
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_musicSid;
+ (void)PBArrayAdd_type;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithRingbackSetting:(id)arg1;
- (id)initFromPB:(id)arg1;
- (id)genPB;
- (id)genSimplePB;
- (id)initFromWCSetting:(id)arg1;
- (id)initWithFinderDataItem:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isValid;
- (BOOL)isCropTimeValid;
- (BOOL)isGlobalRing;
- (unsigned long long)identifier;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (unsigned int)musicSid;
- (void)setMusicSid:(unsigned int)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (void).cxx_destruct;
@end
