@interface MMImgDataItem_MsgRecord : MMImgDataItem
{
    FavoritesItemDataField * _favData; // +0x8
    CMessageWrap * _msgWrap; // +0x10
}
- (id)initWithFavData:(id)arg1;
- (id)initWithFavData:(id)arg1 msgWrap:(id)arg2;
- (id)buildSimpleRecordImgInfo;
- (unsigned int)type;
- (id)dataId;
- (id)uuid;
- (id)thumbImage;
- (id)image;
- (id)imageData;
- (id)imagePath;
- (BOOL)isHDImage;
- (id)hdImage;
- (id)hdImageData;
- (id)hdImagePath;
- (unsigned int)hdImageSize;
- (BOOL)isFileImg;
- (id)videoThumbImage;
- (id)videoPath;
- (BOOL)isRawVideo;
- (BOOL)isRawVideoPreviewing;
- (id)rawVideoPath;
- (unsigned long long)rawVideoSize;
- (unsigned int)videoDuration;
- (id)generatePlayerInfo;
- (id)generateRawPlayerInfo;
- (id)generateForwardMsg;
- (id)generateFavItem;
- (id)generateWCDataItem;
- (BOOL)forbidDisplay;
- (id)favData;
- (void)setFavData:(id)arg1;
- (id)msgWrap;
- (void).cxx_destruct;
@end
