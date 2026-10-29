@interface MMMusicEditVideoCellExportModel : NSObject
{
    NSString * _localVideoPath; // +0x8
    UIImage * _localThumbImage; // +0x10
    double _videoCropStartTime; // +0x18
    double _videoCropEndTime; // +0x20
    NSMutableDictionary * _extInfo; // +0x28
}
- (id)localVideoPath;
- (void)setLocalVideoPath:(id)arg1;
- (id)localThumbImage;
- (void)setLocalThumbImage:(id)arg1;
- (double)videoCropStartTime;
- (void)setVideoCropStartTime:(double)arg1;
- (double)videoCropEndTime;
- (void)setVideoCropEndTime:(double)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

