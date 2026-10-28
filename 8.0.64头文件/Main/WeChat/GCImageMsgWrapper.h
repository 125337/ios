@interface GCImageMsgWrapper : NSObject
{
    BOOL _isUPload; // +0x8
    unsigned int _m_uiPercent; // +0xc
    id <GCImgMsgWrapperDelegate> _delegate; // +0x10
    MMAsset * _mmAsset; // +0x18
    UIImage * _defaultThumbImage; // +0x20
    UIImage * _donloadedThumbImage; // +0x28
    NSString * _nsAesKey; // +0x30
    NSString * _midImgUrl; // +0x38
    NSString * _md5; // +0x40
    ChatroomMsgPack * _msgPack; // +0x48
    NSString * _chatRoomName; // +0x50
    NSString * _cdnKey; // +0x58
    long long _uploadStage; // +0x60
    long long _imgCdnStatus; // +0x68
    CGSize _midImgSize; // +0x70
    CGSize _thumbSize; // +0x80
}
+ (id)createChatroomMsgImageWithImgWrap:(id)arg1;
+ (id)imgWrapFromMsgPack:(id)arg1 chatRoomName:(id)arg2;
+ (id)msgWrapperFromMsgPack:(id)arg1 oAsset:(id)arg2 chatRoomName:(id)arg3;
+ (void)deleteChatRoomImgDir;
+ (void)deleteImgDirOfchatRoomName:(id)arg1;
+ (id)getChatRoomImgDir;
+ (id)getChatRoomPathComponent:(id)arg1;
+ (id)getChatRoomImgDirOfChatroom:(id)arg1;
+ (id)imageWrapperFromImage:(id)arg1 imageData:(id)arg2 chatRoomMsgPack:(id)arg3 nsAesKey:(id)arg4 chatRoomName:(id)arg5;
- (id)init;
- (void)createCdnKey;
- (id)thumPath;
- (id)imgPath;
- (id)statusDesc;
- (id)description;
- (id)getCurrentChatRoomPathComponent;
- (id)getCurrentChatRoomPathOfSubPathComponent:(id)arg1;
- (id)getChatRoomImgDirOfMsgPack:(id)arg1;
- (id)getImgThumbDirOfMsgPack:(id)arg1;
- (id)fileNameOfMsgPack:(id)arg1;
- (id)getMaskedThumImgPathOfMsgPack:(id)arg1;
- (id)getMesImgOfMsgPack:(id)arg1;
- (BOOL)isThumbImageExist;
- (BOOL)isMidImgExist;
- (id)genThumbImageFromImgPath;
- (id)genThumbImageFromImage:(id)arg1;
- (BOOL)uploadImage;
- (BOOL)triggerReSendImage;
- (BOOL)handleImageGenerated:(id)arg1 imageData:(id)arg2;
- (void)showToastForImageFail:(id)arg1;
- (BOOL)checkClientMsgIdMatch:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mmAsset;
- (void)setMmAsset:(id)arg1;
- (id)defaultThumbImage;
- (void)setDefaultThumbImage:(id)arg1;
- (id)donloadedThumbImage;
- (void)setDonloadedThumbImage:(id)arg1;
- (id)nsAesKey;
- (void)setNsAesKey:(id)arg1;
- (id)midImgUrl;
- (void)setMidImgUrl:(id)arg1;
- (CGSize)midImgSize;
- (void)setMidImgSize:(CGSize)arg1;
- (CGSize)thumbSize;
- (void)setThumbSize:(CGSize)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)msgPack;
- (void)setMsgPack:(id)arg1;
- (BOOL)isUPload;
- (void)setIsUPload:(BOOL)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (id)cdnKey;
- (void)setCdnKey:(id)arg1;
- (long long)uploadStage;
- (void)setUploadStage:(long long)arg1;
- (unsigned int)m_uiPercent;
- (void)setM_uiPercent:(unsigned int)arg1;
- (long long)imgCdnStatus;
- (void)setImgCdnStatus:(long long)arg1;
- (void).cxx_destruct;
@end
