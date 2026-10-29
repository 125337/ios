@interface MJMovieComposingAsyncExportInfo : NSObject
{
    NSString * _asyncTaskID; // +0x8
    NSString * _clipBundleID; // +0x10
    NSString * _sessionID; // +0x18
    NSString * _outputFilePath; // +0x20
    double _exportVideoDuration; // +0x28
    OMJMovieExportSettings * _exportSettings; // +0x30
    struct _timeRange; // +0x38
}
- (id)initWithClipBundleID:(id)arg1 asyncTaskID:(id)arg2 sessionID:(id)arg3 outputFilePath:(id)arg4 exportSettings:(id)arg5 timeRange:(struct)arg6 exportVideoDuration:(double)arg7;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)clearAsyncTaskInfo;
- (id)description;
- (id)asyncTaskID;
- (void)setAsyncTaskID:(id)arg1;
- (id)clipBundleID;
- (void)setClipBundleID:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)outputFilePath;
- (void)setOutputFilePath:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (double)exportVideoDuration;
- (void)setExportVideoDuration:(double)arg1;
- (id)exportSettings;
- (void)setExportSettings:(id)arg1;
- (void).cxx_destruct;
@end

