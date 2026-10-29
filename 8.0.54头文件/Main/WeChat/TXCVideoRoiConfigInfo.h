@interface TXCVideoRoiConfigInfo : NSObject
{
    int _roiStrength; // +0x8
    CGRect _roiRect; // +0x10
}
- (id)initWithRoiConfigInfo:(RoiConfigInfo)arg1;
- (CGRect)roiRect;
- (void)setRoiRect:(CGRect)arg1;
- (int)roiStrength;
- (void)setRoiStrength:(int)arg1;
@end

