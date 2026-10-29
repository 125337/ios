@interface MPOriginalImageTileJob : NSObject
{
    NSString * _key; // +0x8
    long long _level; // +0x10
    long long _x; // +0x18
    long long _y; // +0x20
    long long _tileSize; // +0x28
    long long _pixelX; // +0x30
    long long _pixelY; // +0x38
    long long _cropW; // +0x40
    long long _cropH; // +0x48
    long long _outW; // +0x50
    long long _outH; // +0x58
    NSDictionary * _headers; // +0x60
    id /* block */ _completion; // +0x68
    long long _orientation; // +0x70
    unsigned long long _generation; // +0x78
    long long _resultErrorCode; // +0x80
    NSString * _resultErrorMsg; // +0x88
}
- (id)key;
- (void)setKey:(id)arg1;
- (long long)level;
- (void)setLevel:(long long)arg1;
- (long long)x;
- (void)setX:(long long)arg1;
- (long long)y;
- (void)setY:(long long)arg1;
- (long long)tileSize;
- (void)setTileSize:(long long)arg1;
- (long long)pixelX;
- (void)setPixelX:(long long)arg1;
- (long long)pixelY;
- (void)setPixelY:(long long)arg1;
- (long long)cropW;
- (void)setCropW:(long long)arg1;
- (long long)cropH;
- (void)setCropH:(long long)arg1;
- (long long)outW;
- (void)setOutW:(long long)arg1;
- (long long)outH;
- (void)setOutH:(long long)arg1;
- (id)headers;
- (void)setHeaders:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (long long)resultErrorCode;
- (void)setResultErrorCode:(long long)arg1;
- (id)resultErrorMsg;
- (void)setResultErrorMsg:(id)arg1;
- (void).cxx_destruct;
@end
