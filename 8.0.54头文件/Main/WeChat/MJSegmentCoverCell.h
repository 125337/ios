@interface MJSegmentCoverCell : MJSegmentCell
{
    UIImageView * _imageView; // +0x8
    UILabel * _titleLabel; // +0x10
    OMCBatchThumbnailProvider * _batchThumbnailProvider; // +0x18
    long long _taskID; // +0x20
}
- (void)commonInit;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)requestImage;
- (void)requestImageFromSingleProvider;
- (void)requestImageFromBatchProvider;
- (void)cancelRequestImage;
- (void)cancelRequestImageFromSingleProvider;
- (void)cancelRequestImageFromBatchProvider;
- (id)imageView;
- (id)titleLabel;
- (id)batchThumbnailProvider;
- (void)setBatchThumbnailProvider:(id)arg1;
- (long long)taskID;
- (void)setTaskID:(long long)arg1;
- (void).cxx_destruct;
@end

