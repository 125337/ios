@interface FavRecordVideoNodeView : FavRecordLeftThumbRightLabelNodeView <MMImageLoaderObserver>
- (void)dealloc;
- (void)addContentSubView;
- (void)addVideoThumbView;
- (id)getVideoTimeByDuration:(unsigned int)arg1;
- (id)getThumbImageView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
@end

