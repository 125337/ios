@interface V2TXLiveMixStream : NSObject
{
    NSString * _userId; // +0x8
    NSString * _streamId; // +0x10
    long long _x; // +0x18
    long long _y; // +0x20
    long long _width; // +0x28
    long long _height; // +0x30
    unsigned long long _zOrder; // +0x38
    long long _inputType; // +0x40
}
- (id)init;
- (id)description;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (long long)x;
- (void)setX:(long long)arg1;
- (long long)y;
- (void)setY:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (unsigned long long)zOrder;
- (void)setZOrder:(unsigned long long)arg1;
- (long long)inputType;
- (void)setInputType:(long long)arg1;
- (void).cxx_destruct;
@end
