@interface SpeakTextReporter : NSObject
{
    int _speakType; // +0x8
    int _contentLength; // +0xc
    NSString * _contentMd5; // +0x10
    long long _prepareSpeakTime; // +0x18
    long long _requestDataTime; // +0x20
    long long _receiveDataTime; // +0x28
    long long _startSpeakTime; // +0x30
}
- (void)report;
- (int)speakType;
- (void)setSpeakType:(int)arg1;
- (id)contentMd5;
- (void)setContentMd5:(id)arg1;
- (int)contentLength;
- (void)setContentLength:(int)arg1;
- (long long)prepareSpeakTime;
- (void)setPrepareSpeakTime:(long long)arg1;
- (long long)requestDataTime;
- (void)setRequestDataTime:(long long)arg1;
- (long long)receiveDataTime;
- (void)setReceiveDataTime:(long long)arg1;
- (long long)startSpeakTime;
- (void)setStartSpeakTime:(long long)arg1;
- (void).cxx_destruct;
@end
