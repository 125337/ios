@interface MMFinderI420Frame : NSObject
{
    __CFData * _cfData; // +0x8
    char *[3] _planeData; // +0x10
    unsigned long long[3] _stride; // +0x28
    int _width; // +0x40
    int _height; // +0x44
    int _i420DataLength; // +0x48
    unsigned long long _timetag; // +0x50
    char * _data; // +0x58
}
+ (id)initWithData:(id)arg1;
- (void)getBytesQueue:(id /* block */)arg1;
- (id)bytes;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (char *)dataOfPlane:(unsigned long long)arg1;
- (unsigned long long)strideOfPlane:(unsigned long long)arg1;
- (void)freeData;
- (void)dealloc;
- (opaqueCMSampleBuffer *)convertToSampleBuffer;
- (int)width;
- (int)height;
- (int)i420DataLength;
- (unsigned long long)timetag;
- (void)setTimetag:(unsigned long long)arg1;
- (char *)data;
@end
