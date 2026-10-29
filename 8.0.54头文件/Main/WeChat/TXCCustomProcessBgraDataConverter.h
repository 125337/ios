@interface TXCCustomProcessBgraDataConverter : NSObject <TXICustomProcessConverter>
{
    NSMutableData * _srcData; // +0x8
    NSMutableData * _dstData; // +0x10
}
- (BOOL)needsYuvInput;
- (id)srcVideoFrameFromVideoFrame:(id)arg1;
- (id)dstVideoFrameFromTexture:(id)arg1 pts:(unsigned int)arg2;
- (id)outputVideoFrameFromDstVideoFrame:(id)arg1 withTexture:(id)arg2;
- (id)srcDataFromVideoFrame:(id)arg1;
- (id)srcData;
- (void)setSrcData:(id)arg1;
- (id)dstData;
- (void)setDstData:(id)arg1;
- (void).cxx_destruct;
@end

