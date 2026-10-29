@interface NoteAttachmentPreview : NSObject
{
    NSString * _attachmentId; // +0x8
    long long _type; // +0x10
    NSString * _displayThumbPath; // +0x18
    NSString * _webPageThumbUrl; // +0x20
    NSString * _fileName; // +0x28
}
+ (id)makeWithAttachmentId:(id)arg1 type:(long long)arg2 displayThumbPath:(id)arg3 webPageThumbUrl:(id)arg4 fileName:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)attachmentId;
- (void)setAttachmentId:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)displayThumbPath;
- (void)setDisplayThumbPath:(id)arg1;
- (id)webPageThumbUrl;
- (void)setWebPageThumbUrl:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (void).cxx_destruct;
@end
