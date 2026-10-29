@interface TPMediaRecord : NSObject
{
    BOOL _isMultiTrack; // +0x8
    BOOL _selectedSubtitle; // +0x9
    unsigned long long _downloadType; // +0x10
    NSString * _mediaResolution; // +0x18
    long long _mediaRate; // +0x20
    long long _mediaDurationMs; // +0x28
}
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (id)mediaResolution;
- (void)setMediaResolution:(id)arg1;
- (long long)mediaRate;
- (void)setMediaRate:(long long)arg1;
- (long long)mediaDurationMs;
- (void)setMediaDurationMs:(long long)arg1;
- (BOOL)isMultiTrack;
- (void)setIsMultiTrack:(BOOL)arg1;
- (BOOL)selectedSubtitle;
- (void)setSelectedSubtitle:(BOOL)arg1;
- (void).cxx_destruct;
@end

