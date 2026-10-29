@interface YGStyleLayoutUtility : NSObject
+ (YGConfig *)globalConfig;
+ (double)roundPixelValue:(double)arg1;
+ (YGValue)pointValue:(double)arg1;
+ (YGValue)percentValue:(double)arg1;
+ (CGSize)calculateViewSize:(id)arg1 constrainedWidth:(double)arg2 constrainedHeight:(double)arg3;
@end

