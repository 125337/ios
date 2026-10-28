@interface _TtC6WeChat17FTSWebSectionData : _TtC6WeChat14FTSSectionData
{
     searchID; // +0x40
     requestID; // +0x50
     sessionID; // +0x60
     position; // +0x70
     enabledSugCountLimitedByServer; // +0x78
     expiredForPrePositionSug; // +0x79
}
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (BOOL)enabledSugCountLimitedByServer;
- (void)setEnabledSugCountLimitedByServer:(BOOL)arg1;
- (BOOL)expiredForPrePositionSug;
- (void)setExpiredForPrePositionSug:(BOOL)arg1;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2 searchItemCount:(long long)arg3;
- (void).cxx_destruct;
@end
