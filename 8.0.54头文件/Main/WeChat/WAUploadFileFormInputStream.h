@interface WAUploadFileFormInputStream : NSInputStream
{
    NSArray * _arrFormBodyObject; // +0x8
    unsigned long long _curObjectIndex; // +0x10
    unsigned long long _curOffset; // +0x18
    unsigned long long _contentLength; // +0x20
    NSString * _boundary; // +0x28
    basic_string<char, std::char_traits<char>, std::allocator<char>> _headerData; // +0x30
    int _headerDataLength; // +0x48
    basic_string<char, std::char_traits<char>, std::allocator<char>> _endData; // +0x50
    int _endDataLength; // +0x68
    unsigned long long streamStatus; // +0x70
    NSError * streamError; // +0x78
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setupWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4;
- (id)boundary;
- (void)setupCronetDataWithFileFieldName:(id)arg1 fileName:(id)arg2 filePath:(id)arg3 formFields:(id)arg4;
- (int)headerDataLength;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)headerData;
- (int)endDataLength;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)endData;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)nextBodyObject;
- (BOOL)getBuffer:(char * *)arg1 length:(unsigned long long *)arg2;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)contentLength;
- (void)_scheduleInCFRunLoop:(__CFRunLoop *)arg1 forMode:(__CFString *)arg2;
- (void)_unscheduleFromCFRunLoop:(__CFRunLoop *)arg1 forMode:(__CFString *)arg2;
- (BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(void * *)arg2 context:(struct *)arg3;
- (unsigned long long)streamStatus;
- (void)setStreamStatus:(unsigned long long)arg1;
- (id)streamError;
- (void)setStreamError:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

