@interface VoipCSStatHelper : NSObject
+ (id)Gen3rdLog:(VoipCS3rdReport_t *)arg1;
+ (id)GenClientLog:(VoipCSClientReport_t *)arg1;
+ (id)GenVoipCSChannelLog:(VoipCSChannelReport_t *)arg1;
+ (id)GenVoipCSEngineLog:(VoipCSEngineReport_t *)arg1;
@end
