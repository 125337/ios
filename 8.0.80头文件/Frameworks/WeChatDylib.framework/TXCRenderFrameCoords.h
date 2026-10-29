@interface TXCRenderFrameCoords : NSObject <TXCRenderCoordinate>
{
    TXCVideoFrameCoords * _frameCoords; // +0x8
}
- (id)init;
- (float *)positionVertexBytes;
- (unsigned long long)texcoordVertexCount;
- (float *)texcoordVertexAtIndex:(unsigned long long)arg1;
- (id)frameCoords;
- (void).cxx_destruct;
@end
