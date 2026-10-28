@interface AudioFileModel : NSObject
{
    int _sampleRate; // +0x8
    NSString * _path; // +0x10
    double * _data; // +0x18
    NSString * _ringId; // +0x20
}
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (double *)data;
- (void)setData:(double *)arg1;
- (id)ringId;
- (void)setRingId:(id)arg1;
- (void).cxx_destruct;
@end
