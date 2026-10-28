@interface WCTimelineEmotionCacheItem : NSObject <NSCoding, PBCoding>
{
    NSString * _md5; // +0x8
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x10
    long long _timestamp; // +0x18
}
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_snsEmojiInfoObj;
+ (void)PBArrayAdd_timestamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithMd5:(id)arg1 snsEmojiInfoObj:(id)arg2 isExpired:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAvailable;
- (BOOL)isExpired;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)snsEmojiInfoObj;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (void).cxx_destruct;
@end
