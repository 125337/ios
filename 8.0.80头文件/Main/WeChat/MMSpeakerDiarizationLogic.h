@interface MMSpeakerDiarizationLogic : NSObject
{
    BOOL _hasReported; // +0x8
    long long _scene; // +0x10
    NSString * _voiceId; // +0x18
    id <MMSpeakerDiarizationDelegate> _delegate; // +0x20
    WCCgiBlockHelper * _cgiHelper; // +0x28
    VoiceDiarizationResponse * _response; // +0x30
    double _pollStartTime; // +0x38
}
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2;
- (void)startReportWithFavCdnInfo:(id)arg1 fileEncodeType:(unsigned int)arg2;
- (void)startCheck;
- (void)_startReportWithFavCdnInfo:(id)arg1 fileEncodeType:(unsigned int)arg2;
- (void)_notifyDelegateDidFinishWithCode:(unsigned long long)arg1 serverErrorCode:(int)arg2 serverErrorDesc:(id)arg3;
- (void)_startCheck;
- (void)cancelCheck;
- (unsigned long long)_pollingElapsedMs;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cgiHelper;
- (void)setCgiHelper:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg1;
- (double)pollStartTime;
- (void)setPollStartTime:(double)arg1;
- (void).cxx_destruct;
@end
