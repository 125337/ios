@interface PAGImageLayerImpl : PAGLayerImpl
+ (id)Make:(CGSize)arg1 duration:(long long)arg2;
- (id)getVideoRanges;
- (void)replaceImage:(id)arg1;
- (void)setImage:(id)arg1;
- (long long)contentDuration;
- (id)imageBytes;
@end

