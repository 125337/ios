@interface WCMusicSearchReporter : NSObject
{
    BOOL _hasReportTextChanged; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _chatUsername; // +0x18
    unsigned long long _searchEnterScene; // +0x20
    unsigned long long _exitType; // +0x28
}
- (void)reportHistoryDidLoad:(id)arg1;
- (void)reportClickToListenWithMusicInfo:(id)arg1;
- (void)reportSendWithMusicInfo:(id)arg1;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)reportDoSearchWithQuery:(id)arg1 smartBoxHint:(id)arg2 enterScene:(unsigned long long)arg3;
- (id)init;
- (void)reportTextChanged;
- (void)reportWithSessionId:(id)arg1 action:(unsigned long long)arg2 enterScene:(unsigned long long)arg3 searchQuery:(id)arg4 clickQuery:(id)arg5 listenHistory:(id)arg6 songName:(id)arg7 singer:(id)arg8 audioType:(int)arg9 appId:(id)arg10 chatUsername:(id)arg11;
- (id)stringByRepacedInvalidCharacters:(id)arg1;
- (void)appendNumber:(id)arg1 forReportString:(id)arg2;
- (void)appendContent:(id)arg1 forReportString:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (unsigned long long)searchEnterScene;
- (void)setSearchEnterScene:(unsigned long long)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (BOOL)hasReportTextChanged;
- (void)setHasReportTextChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
