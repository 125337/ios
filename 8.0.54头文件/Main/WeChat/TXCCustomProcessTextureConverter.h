@interface TXCCustomProcessTextureConverter : NSObject <TXICustomProcessConverter>
- (BOOL)needsYuvInput;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
@end

