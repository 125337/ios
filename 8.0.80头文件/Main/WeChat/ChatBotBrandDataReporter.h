@interface ChatBotBrandDataReporter : NSObject
{
    BOOL _userHasSpoken; // +0x8
    unsigned int _userSpeakCount; // +0xc
    unsigned int _roomType; // +0x10
    CommentExitInfo * _commentExitInfo; // +0x18
    ReportAiChatExtInfo * _reportAiChatExtInfo; // +0x20
    ChatBotVoIPRoomInfo * _roomInfo; // +0x28
    long long _enterTime; // +0x30
    long long _startRecordingTime; // +0x38
    long long _bizUin; // +0x40
    long long _aiLoadingStartTime; // +0x48
    long long _aiStartSpeakTime; // +0x50
    NSString * _speakSessionId; // +0x58
    NSString * _enterSessionId; // +0x60
    NSString * _voiceId; // +0x68
}
- (id)init;
- (void)setBrandReportWithPage:(id)arg1 reportAiChatExtInfo:(id)arg2 roomInfo:(id)arg3;
- (void)setBrandReportWithPage:(id)arg1 reportAiChatExtInfo:(id)arg2 roomInfo:(id)arg3 room_type:(unsigned int)arg4;
- (void)setBrandReportWithBackBtn:(id)arg1;
- (void)reportUserJoinRoom;
- (void)reportAiJoinRoom;
- (void)reportUserSpeakBegin;
- (void)reportUserSpeakEnd;
- (void)reportAILoadingStart;
- (void)reportAILoadingEnd:(unsigned int)arg1;
- (void)reportAISpeakBegin;
- (void)reportAISpeakBegin:(BOOL)arg1 traceId:(id)arg2;
- (void)reportAISpeakEnd:(unsigned int)arg1;
- (void)reportAISpeakEnd:(unsigned int)arg1 isAnswerMe:(BOOL)arg2 traceId:(id)arg3;
- (void)reportCommentExp:(id)arg1 uin:(unsigned long long)arg2 commentType:(unsigned int)arg3;
- (void)reportCommentClk:(id)arg1 uin:(unsigned long long)arg2 commentType:(unsigned int)arg3;
- (void)reportCopyCommentClk:(id)arg1 uin:(unsigned long long)arg2 commentType:(unsigned int)arg3;
- (void)reportUserClickField;
- (void)reportUserPasteCommon;
- (void)reportGreenMicStart;
- (void)reportGreenMicCancelWithWordCnt:(int)arg1;
- (void)reportGreenMicEndWithWordCnt:(int)arg1 reason:(unsigned int)arg2;
- (void)reportUserSendQuestionWithWordCnt:(int)arg1;
- (id)genCommonReportData;
- (id)genCommonReportData:(BOOL)arg1;
- (long long)getCurrentMsTime;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2;
- (id)commentExitInfo;
- (void)setCommentExitInfo:(id)arg1;
- (id)reportAiChatExtInfo;
- (void)setReportAiChatExtInfo:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (long long)enterTime;
- (void)setEnterTime:(long long)arg1;
- (long long)startRecordingTime;
- (void)setStartRecordingTime:(long long)arg1;
- (long long)bizUin;
- (void)setBizUin:(long long)arg1;
- (long long)aiLoadingStartTime;
- (void)setAiLoadingStartTime:(long long)arg1;
- (long long)aiStartSpeakTime;
- (void)setAiStartSpeakTime:(long long)arg1;
- (id)speakSessionId;
- (void)setSpeakSessionId:(id)arg1;
- (id)enterSessionId;
- (void)setEnterSessionId:(id)arg1;
- (unsigned int)userSpeakCount;
- (void)setUserSpeakCount:(unsigned int)arg1;
- (BOOL)userHasSpoken;
- (void)setUserHasSpoken:(BOOL)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned int)roomType;
- (void)setRoomType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
