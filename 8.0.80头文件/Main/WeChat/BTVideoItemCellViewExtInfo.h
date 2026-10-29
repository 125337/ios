@interface BTVideoItemCellViewExtInfo : NSObject
{
    unsigned int _autoPlayId; // +0x8
    double _videoInitialTime; // +0x10
    NSString * _videoCurrentSnapshotBase64Str; // +0x18
}
- (double)videoInitialTime;
- (void)setVideoInitialTime:(double)arg1;
- (id)videoCurrentSnapshotBase64Str;
- (void)setVideoCurrentSnapshotBase64Str:(id)arg1;
- (unsigned int)autoPlayId;
- (void)setAutoPlayId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
