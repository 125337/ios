@interface TPMetalColorHelper : NSObject
{
    void * _coversionMat; // +0x8
    float[4][4] _yuvMat; // +0x10
    float[16] _yuvFlatMat; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)updateColorParmeter:(TPFrame *)arg1;
- (void)uploadYuvMatToFragment:(id)arg1 atIndex:(int)arg2;
@end

