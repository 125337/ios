@interface OpenALWrapper : NSObject
{
    unsigned int _sid; // +0x8
}
+ (id)wrapperWithSid:(unsigned int)arg1;
- (unsigned int)sid;
- (void)setSid:(unsigned int)arg1;
@end
