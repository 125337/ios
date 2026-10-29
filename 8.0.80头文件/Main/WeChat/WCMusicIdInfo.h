@interface WCMusicIdInfo : NSObject
{
    NSString * _musicID; // +0x8
    long long _type; // +0x10
    NSString * _originalString; // +0x18
}
+ (id)infoWithID:(id)arg1 type:(long long)arg2 original:(id)arg3;
- (id)typeString;
- (id)description;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)originalString;
- (void)setOriginalString:(id)arg1;
- (void).cxx_destruct;
@end
