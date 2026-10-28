@interface MMFavImageComponentData : MMComponentData
{
    BOOL _largeFilePossible; // +0x8
    BOOL _isCDN; // +0x9
    BOOL _bUseWebImgView; // +0xa
    BOOL _fromWebPage; // +0xb
    unsigned int _itemShowType; // +0xc
    unsigned int _favId; // +0x10
    unsigned int _liteAppItemShowType; // +0x14
    long long _favType; // +0x18
    NSString * _dataFmt; // +0x20
    NSString * _thumbUrl; // +0x28
    NSString * _ThumbPath; // +0x30
    NSString * _CDNThumbUrl; // +0x38
    NSString * _CDNThumbKey; // +0x40
    unsigned long long _CDNThumbSize; // +0x48
    NSString * _defaultThumbPath; // +0x50
    NSString * _ocr; // +0x58
    NSString * _WebImgUrl; // +0x60
    UIImage * _icon; // +0x68
    NSString * _accessibilityString; // +0x70
    MMMusicInfo * _musicInfo; // +0x78
    MMMusicShareItem * _musicShareItem; // +0x80
    TingShareListenItem * _tingListenItem; // +0x88
    TingShareCategoryItem * _tingCategoryItem; // +0x90
    NSArray * _dataList; // +0x98
}
- (id)init;
- (long long)favType;
- (void)setFavType:(long long)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)largeFilePossible;
- (void)setLargeFilePossible:(BOOL)arg1;
- (BOOL)isCDN;
- (void)setIsCDN:(BOOL)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)ThumbPath;
- (void)setThumbPath:(id)arg1;
- (id)CDNThumbUrl;
- (void)setCDNThumbUrl:(id)arg1;
- (id)CDNThumbKey;
- (void)setCDNThumbKey:(id)arg1;
- (unsigned long long)CDNThumbSize;
- (void)setCDNThumbSize:(unsigned long long)arg1;
- (id)defaultThumbPath;
- (void)setDefaultThumbPath:(id)arg1;
- (id)ocr;
- (void)setOcr:(id)arg1;
- (BOOL)bUseWebImgView;
- (void)setBUseWebImgView:(BOOL)arg1;
- (id)WebImgUrl;
- (void)setWebImgUrl:(id)arg1;
- (BOOL)fromWebPage;
- (void)setFromWebPage:(BOOL)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)accessibilityString;
- (void)setAccessibilityString:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)musicShareItem;
- (void)setMusicShareItem:(id)arg1;
- (id)tingListenItem;
- (void)setTingListenItem:(id)arg1;
- (id)tingCategoryItem;
- (void)setTingCategoryItem:(id)arg1;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)liteAppItemShowType;
- (void)setLiteAppItemShowType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
