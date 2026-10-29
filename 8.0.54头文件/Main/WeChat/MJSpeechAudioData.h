@interface MJSpeechAudioData : NSObject
{
    NSData * _data; // +0x8
    long long _encodeType; // +0x10
}
- (id)initWithData:(id)arg1 encodeType:(long long)arg2;
- (id)description;
- (id)data;
- (long long)encodeType;
- (void).cxx_destruct;
@end

