@interface WloginTlv_0x123 : WloginTlv
{
    NSData * G; // +0x10
    NSData * N; // +0x18
    NSData * Y; // +0x20
    NSData * X; // +0x28
    unsigned int dwCalTime; // +0x30
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)G;
- (void)setG:(id)arg1;
- (id)N;
- (void)setN:(id)arg1;
- (id)Y;
- (void)setY:(id)arg1;
- (id)X;
- (void)setX:(id)arg1;
- (unsigned int)dwCalTime;
- (void)setDwCalTime:(unsigned int)arg1;
@end
