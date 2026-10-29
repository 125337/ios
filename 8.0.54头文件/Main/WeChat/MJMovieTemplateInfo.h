@interface MJMovieTemplateInfo : NSObject
{
    NSString * _templateID; // +0x8
    NSString * _musicID; // +0x10
    NSString * _channelEventName; // +0x18
    NSString * _finderNickName; // +0x20
    unsigned long long _minimumiOSSDKVersion; // +0x28
    unsigned long long _minimumAndroidSDKVersion; // +0x30
    unsigned long long _templateType; // +0x38
}
+ (id)templateInfoWithOMJTemplateInfo:(id)arg1 OMJMusicInfo:(id)arg2 templateType:(unsigned long long)arg3;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)musicID;
- (void)setMusicID:(id)arg1;
- (id)channelEventName;
- (void)setChannelEventName:(id)arg1;
- (id)finderNickName;
- (void)setFinderNickName:(id)arg1;
- (unsigned long long)minimumiOSSDKVersion;
- (void)setMinimumiOSSDKVersion:(unsigned long long)arg1;
- (unsigned long long)minimumAndroidSDKVersion;
- (void)setMinimumAndroidSDKVersion:(unsigned long long)arg1;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

