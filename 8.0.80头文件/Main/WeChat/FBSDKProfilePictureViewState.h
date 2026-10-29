@interface FBSDKProfilePictureViewState : NSObject
{
    BOOL _imageShouldFit; // +0x8
    unsigned long long _pictureMode; // +0x10
    NSString * _profileID; // +0x18
    double _scale; // +0x20
    CGSize _size; // +0x28
}
- (id)initWithProfileID:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 pictureMode:(unsigned long long)arg4 imageShouldFit:(BOOL)arg5;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToState:(id)arg1;
- (BOOL)isValidForState:(id)arg1;
- (BOOL)imageShouldFit;
- (unsigned long long)pictureMode;
- (id)profileID;
- (double)scale;
- (CGSize)size;
- (void).cxx_destruct;
@end
