@interface BizAppMessageData : NSObject
{
    unsigned int _mesLocalID; // +0x8
    NSString * _sourceUsername; // +0x10
    NSString * _thumbUrl; // +0x18
    NSData * _thumbnailData; // +0x20
    NSString * _chatName; // +0x28
    AppMsgShareItem * _shareItem; // +0x30
}
- (id)initWithMessageWrap:(id)arg1;
- (id)sourceUsername;
- (void)setSourceUsername:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbnailData;
- (void)setThumbnailData:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)mesLocalID;
- (void)setMesLocalID:(unsigned int)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (void).cxx_destruct;
@end
