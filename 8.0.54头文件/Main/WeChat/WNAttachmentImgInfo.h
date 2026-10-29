@interface WNAttachmentImgInfo : SimpleFavImgInfo
{
    RTEAttributeNode * _attribute; // +0x28
}
- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (id)getImgPath;
- (id)getSightPath;
- (id)attribute;
- (void)setAttribute:(id)arg1;
- (void).cxx_destruct;
@end

