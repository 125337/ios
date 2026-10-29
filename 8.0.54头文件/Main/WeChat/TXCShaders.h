@interface TXCShaders : NSObject
+ (id)basicVertex;
+ (id)smoothHorizontalVertex;
+ (id)smoothVerticalVertex;
+ (id)twoInputVertex;
+ (id)basicFragment;
+ (id)nv12RenderFragment;
+ (id)i420RenderFragment;
+ (id)rgbRenderFragment;
+ (id)blendFragment;
+ (id)softBeautifyFragment;
+ (id)maskFragment;
+ (id)smoothHorizontalFragment;
+ (id)smoothVerticalFragment;
+ (id)smoothMixFragment;
@end

