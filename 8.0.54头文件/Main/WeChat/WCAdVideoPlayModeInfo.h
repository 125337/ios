@interface WCAdVideoPlayModeInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _playMode; // +0x8
    double _startOffset; // +0x10
    double _loopStartTime; // +0x18
    double _loopEndTime; // +0x20
    WCAdBreakFramePlayStateInfo * _playStateInfo; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)playMode;
- (void)setPlayMode:(int)arg1;
- (double)startOffset;
- (void)setStartOffset:(double)arg1;
- (double)loopStartTime;
- (void)setLoopStartTime:(double)arg1;
- (double)loopEndTime;
- (void)setLoopEndTime:(double)arg1;
- (id)playStateInfo;
- (void)setPlayStateInfo:(id)arg1;
- (void).cxx_destruct;
@end

