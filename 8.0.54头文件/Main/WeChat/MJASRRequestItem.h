@interface MJASRRequestItem : NSObject
{
    OMCClipSegment * _clipSegment; // +0x8
    MJSpeechAudioData * _silkAudioData; // +0x10
    NSString * _mediaFileURL; // +0x18
    struct _timeRange; // +0x20
    struct _timeRangeForASR; // +0x50
}
- (id)initWithClipSegment:(id)arg1 silkAudioData:(id)arg2 mediaFileURL:(id)arg3 timeRange:(struct)arg4 timeRangeForASR:(struct)arg5;
- (id)description;
- (id)clipSegment;
- (id)silkAudioData;
- (id)mediaFileURL;
- (struct)timeRange;
- (struct)timeRangeForASR;
- (void).cxx_destruct;
@end

