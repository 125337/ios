@interface MJSTTReportInfo : NSObject
{
    NSString * _voiceID; // +0x8
    unsigned long long _audioFormat; // +0x10
    unsigned long long _totalDataLength; // +0x18
    unsigned long long _sttTimeCost; // +0x20
}
- (id)init;
- (id)description;
- (id)voiceID;
- (void)setVoiceID:(id)arg1;
- (unsigned long long)audioFormat;
- (void)setAudioFormat:(unsigned long long)arg1;
- (unsigned long long)totalDataLength;
- (void)setTotalDataLength:(unsigned long long)arg1;
- (unsigned long long)sttTimeCost;
- (void)setSttTimeCost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
