@interface MJThumbnailTileLayer : MJReusableTileLayer
{
    CGRect _separatorLineBounds; // +0x8
    long long _taskID; // +0x28
    UIImage * _image; // +0x30
    double _separatorLineWidthPixels; // +0x38
    CAShapeLayer * _separatorLineLayer; // +0x40
}
- (id)init;
- (void)setImage:(id)arg1;
- (void)setReusableAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSublayers;
- (void)updateSeparatorLine;
- (long long)taskID;
- (void)setTaskID:(long long)arg1;
- (id)image;
- (double)separatorLineWidthPixels;
- (void)setSeparatorLineWidthPixels:(double)arg1;
- (id)separatorLineLayer;
- (void).cxx_destruct;
@end

