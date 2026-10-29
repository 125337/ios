@interface BypEmoticonUploadInfo : NSObject
{
    unsigned int totalLen; // +0x8
    NSString * md5; // +0x10
    CMessageWrap * wrapMsg; // +0x18
}
- (id)init;
- (id)description;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned int)totalLen;
- (void)setTotalLen:(unsigned int)arg1;
- (id)wrapMsg;
- (void)setWrapMsg:(id)arg1;
- (void).cxx_destruct;
@end

