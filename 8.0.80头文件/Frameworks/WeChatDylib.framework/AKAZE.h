@interface AKAZE : Feature2D
{
    Ptr<cv::AKAZE> _nativePtrAKAZE; // +0x8
}
+ (id)fromNative:(Ptr<cv::AKAZE>)arg1;
+ (id)create:(int)arg1 descriptor_size:(int)arg2 descriptor_channels:(int)arg3 threshold:(float)arg4 nOctaves:(int)arg5 nOctaveLayers:(int)arg6 diffusivity:(int)arg7;
+ (id)create:(int)arg1 descriptor_size:(int)arg2 descriptor_channels:(int)arg3 threshold:(float)arg4 nOctaves:(int)arg5 nOctaveLayers:(int)arg6;
+ (id)create:(int)arg1 descriptor_size:(int)arg2 descriptor_channels:(int)arg3 threshold:(float)arg4 nOctaves:(int)arg5;
+ (id)create:(int)arg1 descriptor_size:(int)arg2 descriptor_channels:(int)arg3 threshold:(float)arg4;
+ (id)create:(int)arg1 descriptor_size:(int)arg2 descriptor_channels:(int)arg3;
+ (id)create:(int)arg1 descriptor_size:(int)arg2;
+ (id)create:(int)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::AKAZE>)arg1;
- (void)setDescriptorType:(int)arg1;
- (int)getDescriptorType;
- (void)setDescriptorSize:(int)arg1;
- (int)getDescriptorSize;
- (void)setDescriptorChannels:(int)arg1;
- (int)getDescriptorChannels;
- (void)setThreshold:(double)arg1;
- (double)getThreshold;
- (void)setNOctaves:(int)arg1;
- (int)getNOctaves;
- (void)setNOctaveLayers:(int)arg1;
- (int)getNOctaveLayers;
- (void)setDiffusivity:(int)arg1;
- (int)getDiffusivity;
- (id)getDefaultName;
- (Ptr<cv::AKAZE>)nativePtrAKAZE;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
