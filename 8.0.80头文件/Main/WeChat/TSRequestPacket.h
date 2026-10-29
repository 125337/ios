@interface TSRequestPacket : TSPacket
{
    int _tag; // +0x10
}
- (id)init;
- (int)tag;
- (void)setTag:(int)arg1;
@end
