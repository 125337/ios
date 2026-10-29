@interface CameraScanCodesCoordinateConverter : NSObject
+ (id)convertMarkDotInfoArray:(id)arg1 imageSize:(CGSize)arg2 viewSize:(CGSize)arg3 contentMode:(long long)arg4;
+ (CGRect)calculateDisplayRect:(CGSize)arg1 viewSize:(CGSize)arg2 contentMode:(long long)arg3;
+ (CGPoint)convertPoint:(CGPoint)arg1 fromImageSize:(CGSize)arg2 toDisplayRect:(CGRect)arg3 contentMode:(long long)arg4;
@end
