@interface OMJRecordingFinishInfo : NSObject
{
    NSString * _outputFilePath; // +0x8
    NSString * _outputFileChecksum; // +0x10
    NSString * _originalImageSeqDirPath; // +0x18
    UIImage * _coverImage; // +0x20
    UIImage * _croppedCoverImage; // +0x28
    OMJRecordingResultTraits * _recordingResultTraits; // +0x30
    struct _recordingDuration; // +0x38
    struct _redPacketStartTime; // +0x50
}
- (id)initWithOutputFilePath:(id)arg1 outputFileChecksum:(id)arg2 recordingDuration:(struct)arg3 originalImageSeqDirPath:(id)arg4;
- (id)outputFilePath;
- (id)outputFileChecksum;
- (struct)recordingDuration;
- (id)originalImageSeqDirPath;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (id)croppedCoverImage;
- (void)setCroppedCoverImage:(id)arg1;
- (id)recordingResultTraits;
- (void)setRecordingResultTraits:(id)arg1;
- (struct)redPacketStartTime;
- (void)setRedPacketStartTime:(struct)arg1;
- (void).cxx_destruct;
@end

