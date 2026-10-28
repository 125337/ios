@interface KSAudioFileHeader : NSObject
{
    unsigned long long _pos; // +0x8
    NSData * _headerData; // +0x10
}
- (unsigned long long)pos;
- (void)setPos:(unsigned long long)arg1;
- (id)headerData;
- (void)setHeaderData:(id)arg1;
- (void).cxx_destruct;
@end
