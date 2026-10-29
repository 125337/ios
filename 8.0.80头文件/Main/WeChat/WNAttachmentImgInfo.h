@interface WNAttachmentImgInfo : SimpleFavImgInfo <IRecordDownloadExt>
{
    RTEAttributeNode * _attribute; // +0x28
}
- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (id)getImgPath;
- (id)getSightPath;
- (id)getSightPath:(BOOL)arg1;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (id)attribute;
- (void)setAttribute:(id)arg1;
- (void).cxx_destruct;
@end
