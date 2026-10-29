@interface MMNexusResourceEntry : NSObject
{
    NSData * _data; // +0x8
    NSString * _mimeType; // +0x10
}
+ (id)entryWithData:(id)arg1 mimeType:(id)arg2;
- (id)data;
- (void)setData:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (void).cxx_destruct;
@end
