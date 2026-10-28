@interface SimplePreviewMsgInfo : SimpleMsgInfo
{
    NSString * _imagePath; // +0x28
}
- (id)getImgPath;
- (id)getSightPath;
- (BOOL)isImgMsg;
- (BOOL)isVideoMsg;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (void).cxx_destruct;
@end
