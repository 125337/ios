@interface NoteListAttachmentPreviewModel : NSObject <NSCopying>
{
    int _type; // +0x8
    NSString * _attachmentId; // +0x10
    NSString * _displayThumbPath; // +0x18
    NSString * _webPageThumbUrl; // +0x20
    NSString * _fileName; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)attachmentId;
- (void)setAttachmentId:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)displayThumbPath;
- (void)setDisplayThumbPath:(id)arg1;
- (id)webPageThumbUrl;
- (void)setWebPageThumbUrl:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (void).cxx_destruct;
@end
