@interface MailRTEImgInfo : SimpleImgInfo
{
    MailRTEAttachment * _attachment; // +0x20
}
- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (id)getImgPath;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (void).cxx_destruct;
@end
