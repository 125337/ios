@interface EmoticonMsgDeleteInfo : NSObject
{
    BOOL _isSender; // +0x8
    unsigned int _createTime; // +0xc
    NSString * _md5; // +0x10
    NSString * _talker; // +0x18
}
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)talker;
- (void)setTalker:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)isSender;
- (void)setIsSender:(BOOL)arg1;
- (void).cxx_destruct;
@end
