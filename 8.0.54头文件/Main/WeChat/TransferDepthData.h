@interface TransferDepthData : NSObject
{
    float _median; // +0x8
    UIImage * _depthImage; // +0x10
}
- (id)depthImage;
- (void)setDepthImage:(id)arg1;
- (float)median;
- (void)setMedian:(float)arg1;
- (void).cxx_destruct;
@end

