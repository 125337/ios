@interface MMLongLink : NSObject
{
    BOOL m_isConnected; // +0x8
    basic_string<char, std::char_traits<char>, std::allocator<char>> m_channelName; // +0x10
    void * m_llConfig; // +0x28
}
+ (id)defaultLongLink;
- (id)initWithChannelName:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
- (void)dealloc;
- (void *)name;
- (BOOL)isConnected;
- (void)connect;
- (void)disconnect;
- (void)setMainLongLink;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
