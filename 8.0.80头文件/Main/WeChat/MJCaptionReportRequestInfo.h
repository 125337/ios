@interface MJCaptionReportRequestInfo : NSObject
{
    NSString * _voiceID; // +0x8
    unsigned long long _audiofrmat; // +0x10
    unsigned long long _totalDataLength; // +0x18
}
- (id)initWithVoiceID:(id)arg1 audioFormat:(unsigned long long)arg2 totalDataLength:(unsigned long long)arg3;
- (id)toRequestInfoPB;
- (id)description;
- (id)voiceID;
- (unsigned long long)audiofrmat;
- (unsigned long long)totalDataLength;
- (void).cxx_destruct;
@end
