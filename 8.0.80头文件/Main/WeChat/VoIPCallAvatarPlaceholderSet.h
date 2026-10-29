@interface VoIPCallAvatarPlaceholderSet : NSObject
{
    __CVBuffer * _mainWindowBuffer; // +0x8
    __CVBuffer * _subWindowBuffer; // +0x10
    __CVBuffer * _splitHalfBuffer; // +0x18
}
- (void)dealloc;
- (__CVBuffer *)bufferForStyle:(long long)arg1;
- (__CVBuffer *)mainWindowBuffer;
- (void)setMainWindowBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)subWindowBuffer;
- (void)setSubWindowBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)splitHalfBuffer;
- (void)setSplitHalfBuffer:(__CVBuffer *)arg1;
@end
