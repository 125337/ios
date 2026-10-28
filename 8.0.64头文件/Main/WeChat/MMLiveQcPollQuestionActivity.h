@interface MMLiveQcPollQuestionActivity : NSObject
{
    MMLiveQcPollQuestion * _question; // +0x8
    NSArray * _response; // +0x10
    unsigned long long _exposureUnixEpochTime; // +0x18
    unsigned long long _firstResponseUnixEpochTime; // +0x20
}
- (id)question;
- (void)setQuestion:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (unsigned long long)exposureUnixEpochTime;
- (void)setExposureUnixEpochTime:(unsigned long long)arg1;
- (unsigned long long)firstResponseUnixEpochTime;
- (void)setFirstResponseUnixEpochTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
