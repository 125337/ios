@interface TextStatePublishSourceInfo : NSObject
{
    NSString * _sourceId; // +0x8
    NSString * _sourceActivityId; // +0x10
    NSString * _sourceVerifyInfo; // +0x18
    NSString * _emoticonMd5; // +0x20
    NSString * _emoticonURLString; // +0x28
    NSString * _emoticonPath; // +0x30
    NSString * _sourceName; // +0x38
    NSString * _sourceIconURL; // +0x40
    NSString * _iconId; // +0x48
    TextStateIcon * _icon; // +0x50
    NSString * _customIconDescription; // +0x58
    UIImage * _image; // +0x60
    NSString * _imageURLString; // +0x68
    NSString * _videoPath; // +0x70
    TextStatePublishMediaInfo * _mediaInfo; // +0x78
    NSString * _desc; // +0x80
    TextStatePublishBrandInfo * _brandInfo; // +0x88
    NSArray * _dataItems; // +0x90
    NSArray * _sourceDataItems; // +0x98
    NSArray * _jumpElements; // +0xa0
    id <TextState3rdPartyHandler> _thirdPartyHandler; // +0xa8
}
+ (BOOL)requestDataItemFromDataItems:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithFooter:(id)arg1;
- (id)footer;
- (id)description;
- (BOOL)isValid;
- (void)setIconId:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)privateSetIcon:(id)arg1;
- (void)setCustomIconDescription:(id)arg1;
- (void)clearMedia;
- (void)setImage:(id)arg1;
- (void)setImageURLString:(id)arg1;
- (void)setVideoPath:(id)arg1;
- (void)setMediaInfo:(id)arg1;
- (id)thirdPartyHandler;
- (BOOL)isHybrid;
- (BOOL)supportCustomMedia;
- (BOOL)supportCustomCover;
- (id)get3rdPartyDataItems;
- (void)fill3rdPartyDataItems:(id)arg1;
- (void)fill3rdPartyDataItems:(id)arg1 sourceDataItems:(id)arg2;
- (void)resetDataItems;
- (id)jumpInfos;
- (id)sourceJumpInfos;
- (void)requestDataItemsFromServerWithCompletion:(id /* block */)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)sourceActivityId;
- (void)setSourceActivityId:(id)arg1;
- (id)sourceVerifyInfo;
- (void)setSourceVerifyInfo:(id)arg1;
- (id)emoticonMd5;
- (void)setEmoticonMd5:(id)arg1;
- (id)emoticonURLString;
- (void)setEmoticonURLString:(id)arg1;
- (id)emoticonPath;
- (void)setEmoticonPath:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)sourceIconURL;
- (void)setSourceIconURL:(id)arg1;
- (id)iconId;
- (id)icon;
- (id)customIconDescription;
- (id)image;
- (id)imageURLString;
- (id)videoPath;
- (id)mediaInfo;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)brandInfo;
- (void)setBrandInfo:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (id)sourceDataItems;
- (void)setSourceDataItems:(id)arg1;
- (id)jumpElements;
- (void)setJumpElements:(id)arg1;
- (void)setThirdPartyHandler:(id)arg1;
- (void).cxx_destruct;
@end
