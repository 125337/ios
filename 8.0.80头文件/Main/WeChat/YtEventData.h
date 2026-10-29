@interface YtEventData : NSObject
{
    CIImage * _depthFrame; // +0x8
    unsigned long long _timestamp; // +0x10
    Mat _data; // +0x18
}
- (id)initWith:(Mat *)arg1 withTimestamp:(unsigned long long)arg2;
- (id)initWith:(Mat *)arg1 withDepth:(id)arg2 withTimestamp:(unsigned long long)arg3;
- (Mat)data;
- (void)setData:(Mat)arg1;
- (id)depthFrame;
- (void)setDepthFrame:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
