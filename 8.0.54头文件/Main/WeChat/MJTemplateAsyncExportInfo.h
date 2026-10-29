@interface MJTemplateAsyncExportInfo : NSObject <NSCoding, NSCopying>
{
    NSString * _clipBundleID; // +0x8
    NSString * _asyncTaskID; // +0x10
    double _exportVideoDuration; // +0x18
    OMJMovieExportSettings * _exportSettings; // +0x20
    struct _timeRange; // +0x28
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)clearAsyncTaskInfo;
- (id)clipBundleID;
- (void)setClipBundleID:(id)arg1;
- (id)asyncTaskID;
- (void)setAsyncTaskID:(id)arg1;
- (double)exportVideoDuration;
- (void)setExportVideoDuration:(double)arg1;
- (id)exportSettings;
- (void)setExportSettings:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (void).cxx_destruct;
@end

