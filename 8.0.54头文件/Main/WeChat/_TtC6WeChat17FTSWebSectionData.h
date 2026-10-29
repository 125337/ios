@interface _TtC6WeChat17FTSWebSectionData : _TtC6WeChat14FTSSectionData
{
     searchID; // +0x40
     position; // +0x50
     enabledSugCountLimitedByServer; // +0x58
     expiredForPrePositionSug; // +0x59
     isFromVoice; // +0x5a
}
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (BOOL)enabledSugCountLimitedByServer;
- (void)setEnabledSugCountLimitedByServer:(BOOL)arg1;
- (BOOL)expiredForPrePositionSug;
- (void)setExpiredForPrePositionSug:(BOOL)arg1;
- (BOOL)isFromVoice;
- (void)setIsFromVoice:(BOOL)arg1;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2 searchItemCount:(long long)arg3;
- (void).cxx_destruct;
@end

