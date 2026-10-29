@interface M3U8Parser : NSObject
{
    long long _mediaSequence; // +0x8
    double _targetDuration; // +0x10
    double _duration; // +0x18
    M3U8SegmentInfo * _lastSegmentInfo; // +0x20
    NSMutableString * _proxyM3U8Content; // +0x28
    NSMutableArray * _arrSegment; // +0x30
    NSMutableDictionary * _dicSegment; // +0x38
}
- (id)initWithContent:(id)arg1;
- (void)appendNewLine:(id)arg1;
- (void)parseContent:(id)arg1;
- (id)parseExtXKeyParams:(id)arg1;
- (id)getSegmentInfoWithFileName:(id)arg1;
- (unsigned long long)getSegmentCount;
- (id)getProxyM3U8Content;
- (long long)mediaSequence;
- (double)targetDuration;
- (double)duration;
- (id)lastSegmentInfo;
- (id)proxyM3U8Content;
- (void)setProxyM3U8Content:(id)arg1;
- (id)arrSegment;
- (void)setArrSegment:(id)arg1;
- (id)dicSegment;
- (void)setDicSegment:(id)arg1;
- (void).cxx_destruct;
@end
