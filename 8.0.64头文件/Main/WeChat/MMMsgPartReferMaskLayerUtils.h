@interface MMMsgPartReferMaskLayerUtils : NSObject
+ (id)getPartReferMaskLayerWithRichTextView:(id)arg1 referPartial:(id)arg2;
+ (id)generateHeadBlurLayer:(id)arg1 referPartial:(id)arg2;
+ (id)generateTailBlurLayer:(id)arg1 referPartial:(id)arg2;
+ (id)calculateWhiteRegionsInContainer:(CGRect)arg1 excludingFrames:(id)arg2;
@end
