@interface OMJAsyncSpeechCloneSubmitRequestInfo : NSObject
{
    NSString * _voiceID; // +0x8
    NSData * _audio; // +0x10
    NSString * _text; // +0x18
    long long _offset; // +0x20
    long long _totalLength; // +0x28
    NSDictionary * _extraParams; // +0x30
}
- (id)initWithVoiceID:(id)arg1 audio:(id)arg2 text:(id)arg3 offset:(long long)arg4 totalLength:(long long)arg5 extraParams:(id)arg6;
- (id)voiceID;
- (id)audio;
- (id)text;
- (long long)offset;
- (long long)totalLength;
- (id)extraParams;
- (void).cxx_destruct;
@end

