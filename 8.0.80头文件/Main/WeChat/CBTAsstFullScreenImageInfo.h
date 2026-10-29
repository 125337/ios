@interface CBTAsstFullScreenImageInfo : NSObject
{
    NSString * _localPath; // +0x8
    NSString * _cdnFileId; // +0x10
    NSString * _fileAesKey; // +0x18
    NSString * _url; // +0x20
    NSString * _sourceUrl; // +0x28
    long long _dialogueId; // +0x30
    NSData * _bubbleExtraInfo; // +0x38
    long long _msgSvrId; // +0x40
    UIImage * _thumbnailImage; // +0x48
    NSDictionary * _reportParams; // +0x50
}
+ (id)cbt_infoWithChatBotImage:(id)arg1;
+ (id)cbt_infoWithLocalPath:(id)arg1 thumbnailImage:(id)arg2;
- (id)getImage;
- (BOOL)needDownload;
- (BOOL)cbt_hasUsableImageSource;
- (id)getImgPath;
- (id)localPath;
- (void)setLocalPath:(id)arg1;
- (id)cdnFileId;
- (void)setCdnFileId:(id)arg1;
- (id)fileAesKey;
- (void)setFileAesKey:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (long long)dialogueId;
- (void)setDialogueId:(long long)arg1;
- (id)bubbleExtraInfo;
- (void)setBubbleExtraInfo:(id)arg1;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (id)thumbnailImage;
- (void)setThumbnailImage:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end
