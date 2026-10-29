@interface MMImgDataItem_Favorites : MMImgDataItem
{
    FavoritesItemDataField * _favData; // +0x8
}
- (id)initWithFavData:(id)arg1;
- (unsigned int)type;
- (id)dataId;
- (id)uuid;
- (id)thumbImage;
- (id)image;
- (id)imagePath;
- (id)videoThumbImage;
- (id)videoPath;
- (unsigned int)videoDuration;
- (id)generatePlayerInfo;
- (id)generateForwardMsg;
- (id)generateFavItem;
- (id)favData;
- (void).cxx_destruct;
@end
