@interface TextState3rdParty2022WinterOlympicLiveHandler : TextState3rdPartyBaseHandler
{
    NSString * _liveUsername; // +0x8
    NSString * _liveNickname; // +0x10
    NSString * _liveHeadUrl; // +0x18
}
+ (id)liveShareItemFromXML:(id)arg1;
- (unsigned int)type;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (id)liveUsername;
- (void)setLiveUsername:(id)arg1;
- (id)liveNickname;
- (void)setLiveNickname:(id)arg1;
- (id)liveHeadUrl;
- (void)setLiveHeadUrl:(id)arg1;
- (void).cxx_destruct;
@end
