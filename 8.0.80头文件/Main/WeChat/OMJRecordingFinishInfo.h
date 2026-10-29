@interface OMJRecordingFinishInfo : NSObject
{
    NSString * _outputFilePath; // +0x8
    NSString * _outputFileChecksum; // +0x10
    NSString * _originalImageSeqDirPath; // +0x18
    UIImage * _coverImage; // +0x20
    UIImage * _croppedCoverImage; // +0x28
    OMJRecordingResultTraits * _recordingResultTraits; // +0x30
    NSArray * _aigcResultAssets; // +0x38
    OMJCamOptionResult * _camOptionResult; // +0x40
    struct _recordingDuration; // +0x48
    struct _redPacketStartTime; // +0x60
}
- (id)initWithOutputFilePath:(id)arg1 outputFileChecksum:(id)arg2 recordingDuration:(struct)arg3 originalImageSeqDirPath:(id)arg4;
- (id)description;
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
- (id)aigcResultAssets;
- (void)setAigcResultAssets:(id)arg1;
- (id)camOptionResult;
- (void)setCamOptionResult:(id)arg1;
- (void).cxx_destruct;
@end
