@interface NativeRenderLoadImageResult : NSObject
{
    int _width; // +0x8
    int _height; // +0xc
    NSString * _errMsg; // +0x10
}
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end

