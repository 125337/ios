@interface H5VideoPlayInfo : MMObject
{
    NSString * _videoUrl; // +0x8
    NSString * _fileID; // +0x10
    long long _fileSize; // +0x18
    int _fileType; // +0x20
    int _fileDuration; // +0x24
    int _playID; // +0x28
}
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)fileID;
- (void)setFileID:(id)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (int)fileDuration;
- (void)setFileDuration:(int)arg1;
- (int)playID;
- (void)setPlayID:(int)arg1;
- (void).cxx_destruct;
@end

