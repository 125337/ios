@interface MMLiveKtvReverbItem : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _displayName; // +0x10
    NSString * _thumbnailUri; // +0x18
}
+ (id)reverbItemWithResource:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)thumbnailUri;
- (void)setThumbnailUri:(id)arg1;
- (void).cxx_destruct;
@end

