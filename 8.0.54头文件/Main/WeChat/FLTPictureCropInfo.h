@interface FLTPictureCropInfo : NSObject
{
    double _crop_top; // +0x8
    double _crop_left; // +0x10
    double _crop_bottom; // +0x18
    double _crop_right; // +0x20
    double _image_width; // +0x28
    double _image_height; // +0x30
}
+ (id)makeWithCrop_top:(double)arg1 crop_left:(double)arg2 crop_bottom:(double)arg3 crop_right:(double)arg4 image_width:(double)arg5 image_height:(double)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (double)crop_top;
- (void)setCrop_top:(double)arg1;
- (double)crop_left;
- (void)setCrop_left:(double)arg1;
- (double)crop_bottom;
- (void)setCrop_bottom:(double)arg1;
- (double)crop_right;
- (void)setCrop_right:(double)arg1;
- (double)image_width;
- (void)setImage_width:(double)arg1;
- (double)image_height;
- (void)setImage_height:(double)arg1;
@end

