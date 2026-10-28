@interface QBJceOutputStreamNew : QBJceStreamNew
+ (id)stream;
+ (id)streamWithCapability:(int)arg1;
- (id)init;
- (id)initWithBufferSize:(int)arg1;
- (void)dealloc;
- (void)preventBufferOverflow:(int)arg1;
- (id)data;
- (void)writeTag:(int)arg1 type:(int)arg2;
- (void)writeInt1:(char)arg1;
- (void)writeInt2:(short)arg1;
- (void)writeInt4:(int)arg1;
- (void)writeInt8:(long long)arg1;
- (void)writeBytes:(const void *)arg1 size:(int)arg2;
- (void)fillWithZero:(unsigned int)arg1;
- (void)writeFloat:(float)arg1 tag:(int)arg2;
- (void)writeDouble:(double)arg1 tag:(int)arg2;
- (void)writeInt:(long long)arg1 tag:(int)arg2;
- (void)writeDictionary:(id)arg1 tag:(int)arg2 required:(BOOL)arg3;
- (void)writeArray:(id)arg1 tag:(int)arg2 required:(BOOL)arg3;
- (void)writeNumber:(id)arg1 tag:(int)arg2 required:(BOOL)arg3;
- (void)writeObject:(id)arg1 tag:(int)arg2 required:(BOOL)arg3;
- (void)writeString:(id)arg1 tag:(int)arg2 required:(BOOL)arg3;
- (void)writeData:(id)arg1 tag:(int)arg2 required:(BOOL)arg3;
- (void)writeAnything:(id)arg1 tag:(int)arg2 required:(BOOL)arg3;
@end
