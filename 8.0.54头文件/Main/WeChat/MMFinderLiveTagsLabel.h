@interface MMFinderLiveTagsLabel : UIView <MMWebImageViewDelegate>
{
    id <MMFinderLiveTagsLabelDelegate> _delegate; // +0x8
    NSArray * _tags; // +0x10
    double _spacing; // +0x18
    UILabel * _label; // +0x20
    NSArray * _imageViews; // +0x28
    CGSize _tagEstimateSize; // +0x30
}
+ (CGSize)estimateSizeWithProduct:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 maxLines:(unsigned long long)arg4 tagEstimateSize:(CGSize)arg5 spacing:(double)arg6 inWidth:(double)arg7;
+ (CGSize)estimateSizeWithContent:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 maxLines:(unsigned long long)arg4 tags:(id)arg5 tagEstimateSize:(CGSize)arg6 spacing:(double)arg7 inWidth:(double)arg8;
- (void)updateWithProduct:(id)arg1 lineHeight:(double)arg2 font:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updatePre:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTags:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tags;
- (CGSize)tagEstimateSize;
- (void)setTagEstimateSize:(CGSize)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (void).cxx_destruct;
@end

