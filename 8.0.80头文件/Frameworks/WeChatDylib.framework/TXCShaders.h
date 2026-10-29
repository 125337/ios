@interface TXCShaders : NSObject
+ (id)basicVertex;
+ (id)smoothHorizontalVertex;
+ (id)smoothVerticalVertex;
+ (id)twoInputVertex;
+ (id)basicFragment;
+ (id)swapRgbaFragment;
+ (id)nv12RenderFragment;
+ (id)i420RenderFragment;
+ (id)rgbRenderFragment;
+ (id)rgbPerspectiveRenderFragment;
+ (id)rgbSwapChannelsRenderFragment;
+ (id)rgbPerspectiveSwapChannelsRenderFragment;
+ (id)blendFragment;
+ (id)softBeautifyFragment;
+ (id)maskFragment;
+ (id)smoothHorizontalFragment;
+ (id)smoothVerticalFragment;
+ (id)smoothMixFragment;
@end
