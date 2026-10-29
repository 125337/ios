@interface M3U8SegmentInfo : NSObject
{
    NSString * _fileName; // +0x8
    NSString * _filePath; // +0x10
    double _duration; // +0x18
    long long _sequenceNumber; // +0x20
    NSDictionary * _dicXKeyParams; // +0x28
}
- (id)description;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (long long)sequenceNumber;
- (void)setSequenceNumber:(long long)arg1;
- (id)dicXKeyParams;
- (void)setDicXKeyParams:(id)arg1;
- (void).cxx_destruct;
@end
