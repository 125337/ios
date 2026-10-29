@interface MMTranscriptionResult : NSObject
{
    BOOL _shouldCover; // +0x8
    NSString * _voiceId; // +0x10
    NSString * _text; // +0x18
    unsigned long long _source; // +0x20
    NSData * _respExtraData; // +0x28
}
- (id)init;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)shouldCover;
- (void)setShouldCover:(BOOL)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)respExtraData;
- (void)setRespExtraData:(id)arg1;
- (void).cxx_destruct;
@end
